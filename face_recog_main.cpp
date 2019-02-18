#include <memory>
#include <string>
#include <vector>
#include <grpc++/grpc++.h>

#include "FaceRecogAPI.grpc.pb.h"

#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
using namespace cv;
using namespace std;

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using facerecog::faceRecogUploadRequest;
using facerecog::faceRecogRealtimeRequest;
using facerecog::faceRecogHistoryRequest;

using facerecog::faceRecogUploadResponse;
using facerecog::faceRecogRealtimeResponse;
using facerecog::faceRecogHistoryResponse;

using facerecog::FaceRecogAPI;


class FaceEmoClient {
    public:
        FaceEmoClient(std::shared_ptr<Channel> channel): stub_(FaceRecogAPI::NewStub(channel)){};

    // Assembles the client's payload, sends it and presents the response back
    // from the server.
    std::string faceRecogUpload(const std::string& rawData,const int width,const int height,const int channel){
        faceRecogUploadRequest request;
        
        request.set_rawdata(rawData);
        request.set_width(width);
        request.set_hight(height);
        request.set_channel(channel);

        faceRecogUploadResponse response;


        ClientContext context;

        Status status = stub_->faceRecogUpload(&context, request, &response);
        if (status.ok()) {
            int status_ = response.status();
            std::cout << status_ << std::endl;
            return "OK";
        } else {
            std::cout << status.error_code() << ": " << status.error_message() << std::endl;
        return "RPC failed";
        }

    }

    std::string faceRecogRealtime(const std::string& rawData,const int width,const int height,const int channel){
        faceRecogRealtimeRequest request;
	
        request.set_rawdata(rawData);
        request.set_width(width);
        request.set_hight(height);
        request.set_channel(channel);

        faceRecogRealtimeResponse response;


        ClientContext context;

        Status status = stub_->faceRecogRealtime(&context, request, &response);
        if (status.ok()) {
             google::protobuf::RepeatedField<int> status_list_ = response.status();
            std::cout << status_list_[0] << std::endl;
            return "OK";
        } else {
            std::cout << status.error_code() << ": " << status.error_message() << std::endl;
        return "RPC failed";
        }
    }

    std::string faceRecogHistory(const std::vector<std::string>& imagePaths){
        faceRecogHistoryRequest request;
	    for (std::size_t i = 0; i < imagePaths.size(); i++)
        {
            request.add_imagepath(imagePaths[i]);
        }
        
        faceRecogHistoryResponse response;


        ClientContext context;

        Status status = stub_->faceRecogHistory(&context, request, &response);
        if (status.ok()) {
             google::protobuf::RepeatedField<int> status_list_ = response.index();
            std::cout << status_list_[0] << std::endl;
            return "OK";
        } else {
            std::cout << status.error_code() << ": " << status.error_message() << std::endl;
        return "RPC failed";
        }
    }




    private:
        std::unique_ptr<FaceRecogAPI::Stub> stub_;
};

 
int main()
{

    FaceEmoClient detecter(grpc::CreateChannel("192.168.16.166:6001", grpc::InsecureChannelCredentials()));
	VideoCapture capture("rtsp://admin:1234qwer@192.168.16.202/h264/ch1/main/");//如果是笔记本，0打开的是自带的摄像头，1 打开外接的相机
	Mat frame =imread("/police_client_demo/data/celin-1.jpg");
    cv::Size size = frame.size();
    int total = size.width * size.height * frame.channels();
    std::string my_std_string(frame.ptr(), frame.ptr()+total);
    std::string reply = detecter.faceRecogUpload(my_std_string,size.width,size.height,frame.channels());
    std::cout << "faceRecogUpload: " << reply << std::endl;

    reply = detecter.faceRecogRealtime(my_std_string,size.width,size.height,frame.channels());
    std::cout << "faceRecogRealtime: " << reply << std::endl;


    std::vector<std::string> imagepaths={"/police_client_demo/data/celin-1.jpg","/police_client_demo/data/celin-1.jpg"}; 
    reply = detecter.faceRecogHistory(imagepaths);
    std::cout << "faceRecogRealtime: " << reply << std::endl;


 
	// while (capture.isOpened())
	// {   
        
	// 	capture >> frame;
    //     if (frame.empty()) break; 
    //     cv::Size size = frame.size();
	// 	int total = size.width * size.height * frame.channels();
	// 	std::string my_std_string(frame.ptr(), frame.ptr()+total);
    //     std::string reply = detecter.faceRecogUpload(my_std_string,size.width,size.height,frame.channels());
	// 	std::cout << "Greeter received: " << reply << std::endl;
	// }


    return 1;
}
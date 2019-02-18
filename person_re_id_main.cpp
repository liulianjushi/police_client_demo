#include <memory>
#include <string>
#include <vector>
#include <grpc++/grpc++.h>

#include "PersonReIDAPI.grpc.pb.h"

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
using namespace std;

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using personreid::personReIDUploadRequest;
using personreid::personReIDRealtimeRequest;
using personreid::personReIDHistoryRequest;

using personreid::personReIDUploadResponse;
using personreid::personReIDRealtimeResponse;
using personreid::personReIDHistoryResponse;

using personreid::PersonReIDAPI;


class PersonReIDClient {
    public:
       PersonReIDClient(std::shared_ptr<Channel> channel): stub_(PersonReIDAPI::NewStub(channel)){};
        

    // Assembles the client's payload, sends it and presents the response back
    // from the server.
    std::string personReIDUpload(const std::string& rawData,const int width,const int height,const int channel){
        personReIDUploadRequest request;

        request.set_rawdata(rawData);
        request.set_width(width);
        request.set_hight(height);
        request.set_channel(channel);

        personReIDUploadResponse response;


        ClientContext context;

        Status status = stub_->personReIDUpload(&context, request, &response);
        if (status.ok()) {
            int status_ = response.status();
            std::cout << status_ << std::endl;
            return "OK";
        } else {
            std::cout << status.error_code() << ": " << status.error_message() << std::endl;
        return "RPC failed";
        }

    }

    std::string personReIDRealtime(const std::string& rawData,const int width,const int height,const int channel){
        personReIDRealtimeRequest request;

        request.set_rawdata(rawData);
        request.set_width(width);
        request.set_hight(height);
        request.set_channel(channel);

        personReIDRealtimeResponse response;


        ClientContext context;

        Status status = stub_->personReIDRealtime(&context, request, &response);
        if (status.ok()) {
             google::protobuf::RepeatedField<int> status_list_ = response.status();
            std::cout << status_list_[0] << std::endl;
            return "OK";
        } else {
            std::cout << status.error_code() << ": " << status.error_message() << std::endl;
        return "RPC failed";
        }
    }

    std::string personReIDHistory(const std::vector<std::string>& imagePaths){
        personReIDHistoryRequest request;
	    for (std::size_t i = 0; i < imagePaths.size(); i++)
        {
            request.add_imagepath(imagePaths[i]);
        }

        personReIDHistoryResponse response;


        ClientContext context;

        Status status = stub_->personReIDHistory(&context, request, &response);
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
        std::unique_ptr<PersonReIDAPI::Stub> stub_;
};


int main()
{

    PersonReIDClient detecter(grpc::CreateChannel("192.168.16.166:6003", grpc::InsecureChannelCredentials()));
	VideoCapture capture("rtsp://admin:1234qwer@192.168.16.202/h264/ch1/main/");//如果是笔记本，0打开的是自带的摄像头，1 打开外接的相机
	Mat frame =imread("/police_client_demo/data/celin-1.jpg");
    cv::Size size = frame.size();
    int total = size.width * size.height * frame.channels();
    std::string my_std_string(frame.ptr(), frame.ptr()+total);
    std::string reply = detecter.personReIDUpload(my_std_string,size.width,size.height,frame.channels());
    std::cout << "personReIDUpload: " << reply << std::endl;

    reply = detecter.personReIDRealtime(my_std_string,size.width,size.height,frame.channels());
    std::cout << "personReIDRealtime: " << reply << std::endl;


    std::vector<std::string> imagepaths={"data/celin-1.jpg","data/celin-1.jpg"};
    reply = detecter.personReIDHistory(imagepaths);
    std::cout << "personReIDHistory: " << reply << std::endl;



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

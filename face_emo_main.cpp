#include <memory>
#include <string>

#include <grpc++/grpc++.h>

#include "FaceEmogDetectAPI.grpc.pb.h"

#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
using namespace cv;
using namespace std;

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using faceemodetect::faceEmogDetectRequest;
using faceemodetect::faceEmogDetectResponse;
using faceemodetect::FaceEmogDetectAPI;


class FaceEmoClient {
    public:
        FaceEmoClient(std::shared_ptr<Channel> channel): stub_(FaceEmogDetectAPI::NewStub(channel)){};

    // Assembles the client's payload, sends it and presents the response back
    // from the server.
    std::string faceEmogDetect(const bool isEmo, const std::string& rawData,const int width,const int height,const int channel){
        faceEmogDetectRequest request;
	
	request.set_isemo(isEmo);
	request.set_rawdata(rawData);
    request.set_width(width);
    request.set_hight(height);
    request.set_channel(channel);

	faceEmogDetectResponse response;


	ClientContext context;

	Status status = stub_->faceEmogDetect(&context, request, &response);
	if (status.ok()) {
        google::protobuf::RepeatedField<int> status_list_ = response.status();
         std::cout << status_list_[0] << std::endl;
        return "OK";
    } else {
        std::cout << status.error_code() << ": " << status.error_message() << std::endl;
      return "RPC failed";
    }

    }

    private:
        std::unique_ptr<FaceEmogDetectAPI::Stub> stub_;
};

 
int main()
{

    FaceEmoClient detecter(grpc::CreateChannel("192.168.16.166:6005", grpc::InsecureChannelCredentials()));
	VideoCapture capture("rtsp://admin:1234qwer@192.168.16.202/h264/ch1/main/");//如果是笔记本，0打开的是自带的摄像头，1 打开外接的相机
	Mat frame;

 
	while (capture.isOpened())
	{   
        
		capture >> frame;
        if (frame.empty()) break; 
        cv::Size size = frame.size();
		int total = size.width * size.height * frame.channels();
		std::string my_std_string(frame.ptr(), frame.ptr()+total);
        std::string reply = detecter.faceEmogDetect(true, my_std_string,size.width,size.height,frame.channels());
		std::cout << "Greeter received: " << reply << std::endl;
	}
    return 1;
}

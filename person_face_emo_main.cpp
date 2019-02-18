#include <memory>
#include <string>

#include <grpc++/grpc++.h>

#include "PersonFaceEmoDetectAPI.grpc.pb.h"

#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
using namespace cv;
using namespace std;

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using personfaceemodetect::personFaceEmoDetectRequest;
using personfaceemodetect::personFaceEmoDetectResponse;
using personfaceemodetect::PersonFaceEmoDetectAPI;


class PersonFaceEmoDetectClient {
    public:
        PersonFaceEmoDetectClient(std::shared_ptr<Channel> channel): stub_(PersonFaceEmoDetectAPI::NewStub(channel)){};

    // Assembles the client's payload, sends it and presents the response back
    // from the server.
    std::string personFaceEmoDetect(const std::string& rawData,const std::string& savePath, const int width,const int height,const int channel){

    personFaceEmoDetectRequest request;
	
	
	request.set_rawdata(rawData);
    request.set_savepath(savePath);
    request.set_width(width);
    request.set_hight(height);
    request.set_channel(channel);

	personFaceEmoDetectResponse response;


	ClientContext context;

	Status status = stub_->personFaceEmoDetect(&context, request, &response);
	if (status.ok()) {
        int currentframesum_ = response.currentframesum();
         std::cout << currentframesum_ << std::endl;
        return "OK";
    } else {
        std::cout << status.error_code() << ": " << status.error_message() << std::endl;
      return "RPC failed";
    }

    }

    private:
        std::unique_ptr<PersonFaceEmoDetectAPI::Stub> stub_;
};

 
int main()
{

    PersonFaceEmoDetectClient detecter(grpc::CreateChannel("192.168.16.166:6002", grpc::InsecureChannelCredentials()));
	VideoCapture capture("rtsp://admin:1234qwer@192.168.16.202/h264/ch1/main/");//如果是笔记本，0打开的是自带的摄像头，1 打开外接的相机
	Mat frame;
    std::string savepath="/police_client_demo/";

 
	while (capture.isOpened())
	{   
        
		capture >> frame;
        if (frame.empty()) break; 
        cv::Size size = frame.size();
		int total = size.width * size.height * frame.channels();
		std::string my_std_string(frame.ptr(), frame.ptr()+total);
        std::string reply = detecter.personFaceEmoDetect(my_std_string,savepath, size.width,size.height,frame.channels());
		std::cout << "Greeter received: " << reply << std::endl;
	}
    return 1;
}
#include <memory>
#include <string>
#include <vector>

#include <grpc++/grpc++.h>

#include "CrowdCountAPI.grpc.pb.h"
#include "common.grpc.pb.h"

#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
using namespace cv;
using namespace std;

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using crowdcount::crowdCountRequest;
using crowdcount::crowdCountResponse;
using crowdcount::CrowdCountAPI;
using common::BoundingBox;


class CrowdCountClient {
    public:
        CrowdCountClient(std::shared_ptr<Channel> channel): stub_(CrowdCountAPI::NewStub(channel)){};

    // Assembles the client's payload, sends it and presents the response back
    // from the server.
    std::string crowdCount(const std::vector<int>& bbox, const std::string& rawData,const int width,const int height,const int channel){
    crowdCountRequest request;
    BoundingBox* rect = request.mutable_rect();
    rect->set_x1(bbox[0]);
    rect->set_y1(bbox[1]);
    rect->set_x2(bbox[2]);
    rect->set_y2(bbox[3]);

	request.set_rawdata(rawData);
    request.set_width(width);
    request.set_hight(height);
    request.set_channel(channel);


	crowdCountResponse response;


	ClientContext context;

	Status status = stub_->crowdCount(&context, request, &response);
	if (status.ok()) {
        int rectnum_ = response.rectnum();
        std::cout << "num:" << rectnum_ << std::endl;
        return "OK";
    } else {
        std::cout << status.error_code() << ": " << status.error_message() << std::endl;
      return "RPC failed";
    }

    }

    private:
        std::unique_ptr<CrowdCountAPI::Stub> stub_;
};

 
int main()
{

    CrowdCountClient detecter(grpc::CreateChannel("192.168.16.166:6004", grpc::InsecureChannelCredentials()));
	VideoCapture capture("rtsp://admin:1234qwer@192.168.16.202/h264/ch1/main/");//如果是笔记本，0打开的是自带的摄像头，1 打开外接的相机
	Mat frame;
    std::vector<int> bbox = {0, 0, 400, 400};
	while (capture.isOpened())
	{   
		capture >> frame;
        if (frame.empty()) break; 
        cv::Size size = frame.size();
		int total = size.width * size.height * frame.channels();
		std::string my_std_string(frame.ptr(), frame.ptr()+total);
        std::string reply = detecter.crowdCount(bbox, my_std_string, size.width, size.height, frame.channels());
     
		std::cout << "Greeter received: " << reply << std::endl;
         

	}
    return 1;
}
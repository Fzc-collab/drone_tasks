#include<opencv2/opencv.hpp>
#include<iostream>

int main(){
	cv::VideoCapture cap(0);
	if(!cap.isOpened()){
		std::cerr<<"错误：无法打开摄像头"<<std::endl;
		return -1;
	}

	std::cout<<"摄像头已开启"<<std::endl;

	cv::Mat frame;

	while(true){
		cap>>frame;

		if(frame.empty()){
			std::cerr<<"读取失败"<<std::endl;
			break;
		}
	cv::imshow("c++ camera test",frame);

	if(cv::waitKey(30)==27){
		break;
	}
	}
	cap.release();
	cv::destroyAllWindows();
	return 0;
}

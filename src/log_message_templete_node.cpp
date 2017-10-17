#include <ros/ros.h>

int main(int argc, char** argv){
	ros::init(argc, argv, "log_message_node");
	ros::NodeHandle nh;
	
	//Gernerate log message in a loop
	ros::Rate rate(10);
	for(int i=0; ros::ok(); i++){
		if(i%5==0)
			ROS_DEBUG_STREAM("This is a DEBUG message." << i);
		if(i%5==1)
			ROS_INFO_STREAM("This is a INFO message." << i);
		if(i%5==2)
			ROS_WARN_STREAM("This is a WARN message." << i);
		if(i%5==3)
			ROS_ERROR_STREAM("This is a ERROR message." << i);
		if(i%5==4)
			ROS_FATAL_STREAM("This is a FATAL message." << i);
	}
}

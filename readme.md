[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)
---

### Project Description
With industry 5.0 and wide spread use of robots in industries and in day to day life, inspection and surveillance with robots could not have been any better. With exponential growth in camera and sensing technology over the last decade, inspection tasks with robots attached with these sensors can be carried out with high accuracy and precision

### Team
### Sprint 1
1. Driver : Smit Dumore
2. Navigator : Badrinarayanan Raghunathan Srikumar      
3. Design Keeper : Aniruddh Balram

### AIP
Sprint planning notes : https://docs.google.com/document/d/1wdccIWWXtUxuXXT_2JpvLoirFL0By40nLpI3DHsvV1o/edit
Product backlog :  https://docs.google.com/spreadsheets/d/1uHDDDbMvHY4QyDjH6F0JqCa6SoQ2CfuYaCJu3RNxHEI/edit#gid=120650665

### Build and testing instructions
clone the repo
```
cd <your_ros_ws>/src
git clone https://github.com/smitdumore/Anomaly-Detection-Robot.git
```

build the repo
```
catkin_build anomaly_detection_robot
```

run the test
```
catkin run_tests anomaly_detection_robot
```

### Dependencies
- [ROS Melodic](http://wiki.ros.org/melodic/Installation/Ubuntu)
- [Gazebo](http://gazebosim.org/)
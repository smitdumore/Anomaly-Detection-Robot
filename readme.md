[![Build Status](https://github.com/smitdumore/Anomaly-Detection-Robot/actions/workflows/build_and_coveralls.yml/badge.svg)](https://github.com/smitdumore/Anamoly-Detection-Robot/.github/workflows/build_and_coveralls.yml)
[![Coverage Status](https://coveralls.io/repos/github/smitdumore/Anomaly-Detection-Robot/badge.svg?branch=master)](https://coveralls.io/github/smitdumore/Anamoly-Detection-Robot?branch=master)

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

### Doxygen
Doxygen is the de facto standard tool for generating documentation from annotated C++ sources. It can generate an on-line documentation browser (in HTML).

Command to install doxygen, in command line type

sudo apt install doxygen

To generate doxygen documentation after installation, type

doxygen -g

where is the name of the configuration file that you want to create. In this file edit the input and output directories, and the files that have to be included or excluded while generating the Doxygen comments. Finally, after generating the config file, type

doxygen

This will generate a HTML and LATEX output of the Doxygen comments inside the output directory mentioned in the configuration file.

### Dependencies
- [ROS Melodic](http://wiki.ros.org/melodic/Installation/Ubuntu)
- [Gazebo](http://gazebosim.org/)
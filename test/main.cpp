/********************************************************************
 * Copyright (c) 2022 Smit Dumore
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 ********************************************************************/
/**
 *  @file    main.cpp
 *  @author  Smit Dumore
 *  @date    11/30/2022
 *  @version 0.1
 *  @brief 
 *
 */

#include <gtest/gtest.h>
#include <ros/ros.h>
#include "anomaly_detection_robot/navigation.h"
#include "anomaly_detection_robot/perception.h"
#include "anomaly_detection_robot/detect_anomaly.h"
#include "anomaly_detection_robot/ADRobot.h"

/**
 * @brief Construct a new TEST object to test navigation class
 * 
 */
TEST(nav_class_test, test_nav) {
    Navigation nav;
    EXPECT_EQ(nav.location_to_home(), false);
}

/**
 * @brief Construct a new TEST object to test perception class
 * 
 */
TEST(perception_class_test, test_perception) {
    Perception percep;
    EXPECT_EQ(percep.is_object_present, false);
}

/**
 * @brief Construct a new TEST object to test adrobot class
 * 
 */
TEST(adrobot_class_test, test_adrobot) {
    ADRobot adrobo;
    EXPECT_NO_THROW(adrobo.run());
}

/**
 * @brief Construct a new TEST object to test anomaly class
 * 
 */
TEST(anomaly_class_test, test_anomaly) {
    Detect_anomaly detect;
    EXPECT_NO_THROW(detect.is_anomaly());
}

// main function calls all the tests
int main(int argc, char **argv) {
    ros::init(argc, argv, "gtest_node");
    std::shared_ptr<ros::NodeHandle> nh;
    nh.reset(new ros::NodeHandle);
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
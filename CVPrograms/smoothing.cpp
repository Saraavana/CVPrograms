//
//  smoothing.cpp
//  OpenCVTest
//
//  Created by Saravanakumar G on 02/01/21.
//  Copyright © 2021 Saravanakumar G. All rights reserved.
//

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

const int max_value_H = 360/2;
const int max_value = 255;
/*
int main()
{
    string image_path1 = "/Users/saravana/Desktop/CVPrograms/Images/BabyFood-Test6.JPG";
    string image_path2 = "/Users/saravana/Desktop/CVPrograms/Images/redHats.jpg";
    string image_path3 = "/Users/saravana/Desktop/CVPrograms/Images/redHatSimple.jpg";
  
    Mat image1 = imread(image_path3, IMREAD_COLOR);
    resize(image1, image1, {500,500});

    if(image1.empty())
    {
        cout << "Could not read the image: " << endl;
        return 1;
    }

    vector<int> lower_bound = {170,80,50};

    int low_H = lower_bound[0], low_S = lower_bound[1], low_V = lower_bound[2];
    int high_H = max_value_H, high_S = max_value, high_V = max_value;

    Mat hsvImg, imgThreshold;

    // Convert from BGR to HSV colorspace
    cvtColor(image1, hsvImg, COLOR_BGR2HSV);
    // Detect the object based on HSV Range Values
    inRange(hsvImg, Scalar(low_H, low_S, low_V), Scalar(high_H, high_S, high_V), imgThreshold);

//    Mat medianBlurImg, guassianBlurImg;
//    medianBlur(image1, medianBlurImg, 9);
//    GaussianBlur(image1, guassianBlurImg, Size(1,1), 9, 9);
//
//    imshow("Original Image", image1);
//    imshow("Median Blurred Image", medianBlurImg);
//    imshow("Guassian Blurred Image", guassianBlurImg);

    imshow("Original Image", image1);
    imshow("Hsv Image", hsvImg);
    imshow("Threshold Image", imgThreshold);



    int k = waitKey(0); // Wait for a keystroke in the window

    if(k == 'q'){
        destroyAllWindows();
    }
    return 0;
}

*/

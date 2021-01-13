//
//  binaryVision.cpp
//  OpenCVTest
//
//  Created by Saravanakumar G on 04/01/21.
//  Copyright © 2021 Saravanakumar G. All rights reserved.
//

#include "opencv2/highgui.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/imgproc.hpp"
#include <iostream>
#include <string>

using namespace std;
using namespace cv;


int main()
{
    string imagePath1 = "/Users/saravana/Desktop/Bildschirmfoto 2021-01-04 um 9.30.37 PM.png";
    string imagePath2 = "/Users/saravana/Documents/Photos/Saravanakumar_Gopalakrishnan.JPG";
    string imagePath3 = "/Users/saravana/Documents/Photos/Saravanakumar.png";

    Mat img = imread(imagePath3, IMREAD_COLOR);
    resize(img, img, Size(600, 400));

    
    if (img.empty())
    {
        cout << "failed to load image" << endl;
        return EXIT_FAILURE;
    }

    vector<vector<Point> > contours;
    vector<Vec4i> hierarchy;
    Mat gray, binaryImg, contoursImg;
    cvtColor(img, gray, COLOR_RGB2GRAY);

    threshold(gray, binaryImg, 50, 255, THRESH_BINARY);

    findContours(binaryImg, contours, hierarchy, RETR_TREE, CHAIN_APPROX_NONE);

    imshow("Original Image", img);

    for (int contour = 0; contour < contours.size(); contour++)
    {
        Scalar colour(rand() & 0xFF, rand() & 0xFF, rand() & 0xFF);
        drawContours(img, contours, contour, colour, FILLED, 8, hierarchy);
    }
    
    imshow("Contour Image", img);
    waitKey();

    return EXIT_SUCCESS;
}

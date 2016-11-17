#ifndef _DRIVER_H
#define _DRIVER_H

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

struct Point {
    int x;
    int y;  
    Point() : Point{0,0}{}
    Point(int x, int y) : x{x}, y{y}{}
};

int image_total_pixels(cv::Mat*);
void image_convert_grayscale(cv::Mat*);
void image_generate_negative(cv::Mat*);

std::vector<int> image_histogram(cv::Mat*);
void image_generate_binary(cv::Mat*);



// Morphological Algos

void image_dilate(cv::Mat*, std::vector<Point>);
#endif
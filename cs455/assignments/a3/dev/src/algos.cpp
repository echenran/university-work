#include "driver.hpp"
#include <queue>
#include <iostream>
#include <algorithm>
#include <iomanip>

int image_total_pixels(cv::Mat *image) {
    return image->rows * image->step; 
}

void image_rgb_to_hsi(cv::Mat *image) {
}

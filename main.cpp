// ==============================
// By Jimmy
//
// 2018/12/14
//
// 1. sort out code
// ==============================

#include "image.h"
#include "socket_client.h"
#include <iostream>
#include <vector>
#include <ctime>

static cv::VideoCapture *cap;
static image im;
static cv::Mat m, frame;
static image **alphabet;
static int frame_stamp = 0;

int main()
{
    alphabet = load_alphabet();

    //char *filename = "time_counter.flv";
    char *filename = "test.MTS";

    cap = new cv::VideoCapture(filename);

    while(1)
    {
        *cap >> m;

        im = mat_to_image(m);

        frame_stamp++;

        send_frame("127.0.0.1", 8091, 95, im, frame_stamp);
    }
    
    return 0;
}

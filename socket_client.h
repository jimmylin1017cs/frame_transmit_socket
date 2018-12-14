// ==============================
// By Jimmy
//
// 2018/12/14
//
// 1. sort out code
// ==============================

#include "socket_header.h"
#include "image.h"

#include <iostream>
#include <vector>

int send_frame(std::string ip, int port, int quality, std::vector<uchar> &frame);
int send_frame(std::string ip, int port, int quality, image im, int frame_stamp);
int send_frame(std::string ip, int port, int quality, image im);


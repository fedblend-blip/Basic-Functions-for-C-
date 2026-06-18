// Created by Fedor on 6/13/2026.
#include "functions.h"
#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
namespace sdr {
    void delay(int mills) {
        this_thread::sleep_for(chrono::milliseconds(mills));
    }


}


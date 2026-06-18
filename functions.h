// Created by Fedor on 6/13/2026.
#pragma once
#include <iostream>
using namespace std;
namespace sdr {
    template <typename T>
    void print(T format, bool isEndl = true) {
        cout << format;
        if (isEndl) cout << endl;
    }
    void delay(int mills);


}

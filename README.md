# Basic-Functions-for-C++
This repository contains basic functions that simplify programming in C++. Functions such as `print` and `delay` are included.
# How to Use
Simply place the files in your project's root folder and add them to CMakeLists.txt (if you're using CMake).
- You can include them using the command #include ”functions.h“  in the main file. After that, the following functions will be available: print(), delay().
# Examples
- As you can see, the `delay` function takes an integer (of type `int`) in milliseconds. The dependencies for this library are `thread` and `chrono`. The function uses `this_thread::sleep_for()`.

- The `print` function takes two parameters: the text to be displayed and a boolean value indicating whether to move to a new line (i.e., add `endl` at the end). By default, this value is `true`, so it is not necessary to specify it.

- You may notice that the functions are placed in the sdr namespace, so for convenience, in addition to `using namespace std;`, include a line with `sdr`. This is simply to avoid having to write `sdr::print()` every time.

<img width="1920" height="1080" alt="{548A486D-BC27-4093-9DAA-D2D3C3D9F819}" src="https://github.com/user-attachments/assets/4e14cda2-0f51-43b3-a393-2bd813ea9a81" />

<img width="457" height="315" alt="{F7CC7C68-A9F1-4DAB-B2EB-12750E205F9D}" src="https://github.com/user-attachments/assets/25245cfe-fb30-4d5b-af99-a1cf746c9734" />


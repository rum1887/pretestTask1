# Pretest task #1
Create a C++ program to blur an image using OpenCV

1. Clone this project and move into the pretestTask1 directory
`cd pretextTask1`
2. Make sure opencv and g++ complier are installed.<br>
Complile the file opencvmini.cpp using the following command
<code>g++ -std=c++14 opencvminicpp.cpp -o opencvmini `pkg-config opencv4 --cflags --libs`</code>
3. Execute the compliled file 
`./opencvmini`

TIL(Journal)
- Finding the appropriate header file that needs to be added (opencv.hpp). Why not core.hpp? Todo: research a lil about the header files arch.
- Finding the location of the header file to be included in the cpp program. In my case, OpenCV was downloaded using homebrew and the header files were at `opt/homebrew/Cellar/opencv/4.8.1_5/include/opencv4/opencv2`. Todo : research a lil about the unix file systems to comprehend the purpose of the opt folder. To the best of my knowlege, opt is used to store library files by package managers like pip, Anaconda, and Homebrew.
- Compiling the program using the right flags (throws error when u don't spefify the c++ std using this flag `-std=c++14`).Todo: learn more about the Cpp stds.
- Throws the following error:fatal error: 'opencv2/opencv_modules.hpp' file not found #include "opencv2/opencv_modules.hpp" when this is not used while compiling `pkg-config opencv4 --cflags --libs`. 



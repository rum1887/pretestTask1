# Pretest task #1
Create a C++ program to blur an image using OpenCV

1. Clone this project and move into the pretestTask1 directory
`cd pretextTask1`
2. Make sure opencv and g++ complier are installed.<br>
Complile the file opencvmini.cpp using the follwing command
<code>g++ -std=c++14 opencvminicpp.cpp -o opencvmini `pkg-config opencv4 --cflags --libs`</code>
3. Execute the complied file 
`./opencvmini`

TIL
- Finding the exact header file to be added (opencv.hpp)
- Finding the location of the header file to inclued in the cpp program. OpenCV was downloaded using homebrew and the header files were at `opt/homebrew/Cellar/opencv/4.8.1_5/include/opencv4/opencv2`. Todo : research a lil about the file system in unix systems to understand what the opt filder is for. From the best of my knowledge, it a the folder into which library files are stored by package managers like pip,anaconda and homebrew.
- Complile the program using the right flags (throws error when u don't spefify the c++ std using this flag `-std=c++14`). Learn more about the Cpp stds.
- Throws the follwing error:atal error: 'opencv2/opencv_modules.hpp' file not found #include "opencv2/opencv_modules.hpp" when this is not used while compiling `pkg-config opencv4 --cflags --libs`. 



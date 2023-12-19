#include </opt/homebrew/Cellar/opencv/4.8.1_5/include/opencv4/opencv2/opencv.hpp>
using namespace cv;
int main() {
    // Read the input image
    Mat inputImage = cv::imread("input.png");

    // Check if the image was loaded successfully
    if (inputImage.empty()) {
        std::cerr << "Error: Could not open or find the image!\n";
        return -1;
    }

    // Apply Gaussian blur to the input image
    Mat outputImage;
    GaussianBlur(inputImage, outputImage,Size(5, 5), 0);
    imwrite("output.png", outputImage);
    // Display the original and filtered images
    imshow("Original Image", inputImage);
    imshow("Filtered Image", outputImage);
    waitKey(0);

    return 0;
}

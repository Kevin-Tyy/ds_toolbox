#include <iostream>

double calculateCubeVolume(double sideLength) {
    return sideLength * sideLength * sideLength;
}

int main() {
    double sideLength;

    // Prompt the user to enter the side length of the cube
    std::cout << "Enter the side length of the cube: ";
    std::cin >> sideLength;

    // Calculate and display the volume of the cube
    double volume = calculateCubeVolume(sideLength);

    std::cout << "Volume of the cube: " << volume << std::endl;

    return 0;
}

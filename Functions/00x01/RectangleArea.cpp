#include <iostream>

int main() {
    double width, length;

    // Prompt the user to enter the width and length of the rectangle
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    // Calculate the area and perimeter
    double area = width * length;
    double perimeter = 2 * (width + length);

    // Display the results
    std::cout << "Area of the rectangle: " << area << std::endl;
    std::cout << "Perimeter of the rectangle: " << perimeter << std::endl;

    return 0;
}

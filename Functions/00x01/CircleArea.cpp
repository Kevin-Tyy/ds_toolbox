#include <iostream>
#include <cmath>

const double PI = 3.14159265359;

double calculateArea(double radius) {
    return PI * radius * radius;
}

double calculateCircumference(double radius) {
    return 2 * PI * radius;
}

int main() {
    double radius;

    // Prompt the user to enter the radius of the circle
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate and display the area and circumference
    double area = calculateArea(radius);
    double circumference = calculateCircumference(radius);

    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;

    return 0;
}

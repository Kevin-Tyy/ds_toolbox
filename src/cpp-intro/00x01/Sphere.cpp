#include <iostream>
#include <cmath>

int main() {
    double radius;

    // Prompt the user to enter the radius of the sphere
    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    // Check if the radius is non-negative
    if (radius < 0) {
        std::cout << "Radius cannot be negative." << std::endl;
        return 1; // Exit with an error code
    }

    // Calculate the volume of the sphere
    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

    // Display the calculated volume
    std::cout << "The volume of the sphere with radius " << radius << " is: " << volume << std::endl;

    return 0;
}

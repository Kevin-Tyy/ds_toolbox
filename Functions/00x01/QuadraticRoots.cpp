#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    double discriminant, x1, x2;

    // Prompt the user to enter coefficients a, b, and c
    std::cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
    std::cin >> a >> b >> c;

    // Calculate the discriminant
    discriminant = b * b - 4 * a * c;

    // Check if the discriminant is non-negative (real roots)
    if (discriminant >= 0) {
        // Calculate the roots
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);

        std::cout << "Roots of the quadratic equation are:" << std::endl;
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    } else {
        std::cout << "The quadratic equation has no real roots (discriminant < 0)." << std::endl;
    }

    return 0;
}

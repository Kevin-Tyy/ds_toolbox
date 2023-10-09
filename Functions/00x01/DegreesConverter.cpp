#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius;

    // Prompt the user to enter the temperature in Celsius
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> celsius;

    // Convert Celsius to Fahrenheit using the function
    double fahrenheit = celsiusToFahrenheit(celsius);

    // Display the result
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}

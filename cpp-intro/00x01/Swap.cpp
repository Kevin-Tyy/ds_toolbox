#include <iostream>

int main() {
    double num1, num2;

    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Display the original numbers
    std::cout << "Original numbers: " << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Swap the numbers
    double temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the swapped numbers
    std::cout << "Swapped numbers: " << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}

#include <iostream>

void checkNumber(int number) {
    if (number > 0) {
        std::cout << "Positive number." << std::endl;
    } else if (number < 0) {
        std::cout << "Negative number." << std::endl;
    } else {
        std::cout << "Zero." << std::endl;
    }
}

int main() {
    int number;

    // Prompt the user to enter a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check whether the number is positive, negative, or zero using the function
    checkNumber(number);

    return 0;
}

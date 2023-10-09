#include <iostream>

int countDigit(int number, int digit) {
    if (number < 0 || digit < 0) {
        return -1; // Negative input is not allowed
    }

    int count = 0;

    while (number > 0) {
        int lastDigit = number % 10;
        if (lastDigit == digit) {
            count++;
        }
        number /= 10;
    }

    return count;
}

int main() {
    int number, digit;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    std::cout << "Enter a digit to count: ";
    std::cin >> digit;

    int result = countDigit(number, digit);

    if (result == -1) {
        std::cout << "Invalid input. Please enter a positive integer and a non-negative digit." << std::endl;
    } else {
        std::cout << "The digit " << digit << " appears " << result << " times in the number " << number << "." << std::endl;
    }

    return 0;
}

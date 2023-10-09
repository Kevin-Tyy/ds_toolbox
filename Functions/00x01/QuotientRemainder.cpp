#include <iostream>

void computeQuotientAndRemainder(int dividend, int divisor, int& quotient, int& remainder) {
    quotient = dividend / divisor;
    remainder = dividend % divisor;
}

int main() {
    int dividend, divisor, quotient, remainder;

    // Prompt the user to enter the dividend and divisor
    std::cout << "Enter the dividend: ";
    std::cin >> dividend;

    std::cout << "Enter the divisor: ";
    std::cin >> divisor;

    // Calculate the quotient and remainder using the function
    computeQuotientAndRemainder(dividend, divisor, quotient, remainder);

    // Display the results
    std::cout << "Quotient: " << quotient << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;

    return 0;
}

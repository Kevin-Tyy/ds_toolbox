#include <iostream>

int main() {
    int n;

    // Prompt the user to enter a positive integer N
    std::cout << "Enter a positive integer N: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
    } else {
        int sumOfSquares = 0;
        int squareOfSum = 0;

        for (int i = 1; i <= n; i++) {
            sumOfSquares += i * i;
            squareOfSum += i;
        }

        squareOfSum *= squareOfSum;

        int difference = squareOfSum - sumOfSquares;

        std::cout << "The difference between the square of the sum and the sum of the squares of the first " << n << " natural numbers is: " << difference << std::endl;
    }

    return 0;
}

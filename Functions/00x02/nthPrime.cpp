#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    if (number <= 3) {
        return true;
    }
    if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int findNthPrime(int n) {
    if (n <= 0) {
        return -1; // Invalid input
    }

    int count = 0;
    int number = 2;

    while (count < n) {
        if (isPrime(number)) {
            count++;
        }
        if (count < n) {
            number++;
        }
    }

    return number;
}

int main() {
    int n;

    std::cout << "Enter the value of n to find the nth prime number: ";
    std::cin >> n;

    int nthPrime = findNthPrime(n);

    if (nthPrime != -1) {
        std::cout << "The " << n << "th prime number is: " << nthPrime << std::endl;
    } else {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
    }

    return 0;
}

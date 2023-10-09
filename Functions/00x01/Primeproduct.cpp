#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long product = 1;

    for (int i = 2; i <= 100; ++i) {
        if (isPrime(i)) {
            product *= i;
        }
    }

    std::cout << "The product of prime numbers between 1 and 100 is: " << product << std::endl;

    return 0;
}

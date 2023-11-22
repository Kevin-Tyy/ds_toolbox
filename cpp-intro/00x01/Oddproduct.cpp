#include <iostream>

int main() {
    int product = 1;

    for (int i = 1; i <= 20; i += 2) {
        product *= i;
    }

    std::cout << "The product of all odd numbers between 1 and 20 is: " << product << std::endl;

    return 0;
}

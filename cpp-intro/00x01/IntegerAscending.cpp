#include <iostream>

void printInAscendingOrder(int a, int b, int c) {
    if (a > b) {
        std::swap(a, b);
    }
    if (a > c) {
        std::swap(a, c);
    }
    if (b > c) {
        std::swap(b, c);
    }

    std::cout << "Integers in ascending order: " << a << " " << b << " " << c << std::endl;
}

int main() {
    int num1, num2, num3;

    // Prompt the user to enter three integers
    std::cout << "Enter three integers: ";
    std::cin >> num1 >> num2 >> num3;

    // Call the function to print them in ascending order
    printInAscendingOrder(num1, num2, num3);

    return 0;
}

#include <iostream>

namespace arithmetic {
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int divide(int a, int b) {
        if (b == 0) {
            std::cout << "Error: Division by zero is not allowed." << std::endl;
            return 0;
        }
        return a / b;
    }

    int modulus(int a, int b) {
        if (b == 0) {
            std::cout << "Error: Modulus by zero is not allowed." << std::endl;
            return 0;
        }
        return a % b;
    }
}

int main() {
    char choice;
    do {
        std::cout << "MENU" << std::endl;
        std::cout << "1. Add" << std::endl;
        std::cout << "2. Subtract" << std::endl;
        std::cout << "3. Multiply" << std::endl;
        std::cout << "4. Divide" << std::endl;
        std::cout << "5. Modulus" << std::endl;
        std::cout << "Enter your choice: ";
        int operation;
        std::cin >> operation;

        int num1, num2;
        std::cout << "Enter your two numbers: ";
        std::cin >> num1 >> num2;

        int result = 0;
        switch (operation) {
            case 1:
                result = arithmetic::add(num1, num2);
                break;
            case 2:
                result = arithmetic::subtract(num1, num2);
                break;
            case 3:
                result = arithmetic::multiply(num1, num2);
                break;
            case 4:
                result = arithmetic::divide(num1, num2);
                break;
            case 5:
                result = arithmetic::modulus(num1, num2);
                break;
            default:
                std::cout << "Invalid choice!" << std::endl;
                break;
        }

        std::cout << "Result: " << result << std::endl;

        std::cout << "Continue? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

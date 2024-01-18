#include <iostream>
#include <cctype>

bool isDigitOrAlpha(char c) {
    return std::isalnum(c);
}

int main() {
    char character;

    // Prompt the user to enter a character
    std::cout << "Enter a character: ";
    std::cin >> character;

    if (isDigitOrAlpha(character)) {
        std::cout << "The character is a digit or alpha letter." << std::endl;
    } else {
        std::cout << "The character is not a digit or alpha letter." << std::endl;
    }

    return 0;
}

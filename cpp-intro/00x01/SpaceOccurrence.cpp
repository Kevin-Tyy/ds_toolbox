#include <iostream>

int countSpaces(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (c == ' ') {
            count++;
        }
    }
    return count;
}

int main() {
    std::string input;

    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int spaceCount = countSpaces(input);
    std::cout << "Number of spaces in the string: " << spaceCount << std::endl;

    return 0;
}

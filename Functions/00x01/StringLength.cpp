#include <iostream>

int calculateStringLength(const std::string& str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int length = calculateStringLength(input);

    std::cout << "Length of the string: " << length << std::endl;

    return 0;
}

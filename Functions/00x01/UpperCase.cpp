#include <iostream>
#include <string>
#include <cctype>

std::string toUppercase(const std::string& str) {
    std::string uppercaseStr = str;
    for (char& c : uppercaseStr) {
        c = std::toupper(c);
    }
    return uppercaseStr;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string uppercase = toUppercase(input);

    std::cout << "Uppercase string: " << uppercase << std::endl;

    return 0;
}

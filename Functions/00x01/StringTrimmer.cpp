#include <iostream>
#include <string>

std::string removeSpaces(const std::string& str) {
    std::string noSpacesStr;
    for (char c : str) {
        if (c != ' ') {
            noSpacesStr += c;
        }
    }
    return noSpacesStr;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string noSpaces = removeSpaces(input);

    std::cout << "String without spaces: " << noSpaces << std::endl;

    return 0;
}

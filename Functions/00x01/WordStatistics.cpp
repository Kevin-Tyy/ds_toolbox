#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;

    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int charCountWithoutSpaces = input.length();
    int charCountWithSpaces = input.size();
    int wordCount = 0;

    std::istringstream iss(input);
    std::string word;
    while (iss >> word) {
        wordCount++;
    }

    std::cout << "Number of characters without spaces: " << charCountWithoutSpaces << std::endl;
    std::cout << "Number of characters with spaces: " << charCountWithSpaces << std::endl;
    std::cout << "Number of words: " << wordCount << std::endl;

    return 0;
}

#include <iostream>
#include <string>
#include <cctype>

bool isPalindrome(std::string str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (std::tolower(str[left]) != std::tolower(str[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string input;

    // Prompt the user to enter a string
    std::cout << "Enter a string: ";
    std::cin.ignore(); // Ignore any previous newline character
    std::getline(std::cin, input);

    // Check if the string is a palindrome
    if (isPalindrome(input)) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}

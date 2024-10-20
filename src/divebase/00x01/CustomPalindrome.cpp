#include <iostream>
#include <string>
#include <algorithm>

bool isPalindromeWithBuiltIn(const std::string& str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

bool isPalindromeWithoutBuiltIn(const std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isPalindromeWithBuiltIn(input)) {
        std::cout << "The string is a palindrome (with built-in functions)." << std::endl;
    } else {
        std::cout << "The string is not a palindrome (with built-in functions)." << std::endl;
    }

    if (isPalindromeWithoutBuiltIn(input)) {
        std::cout << "The string is a palindrome (without built-in functions)." << std::endl;
    } else {
        std::cout << "The string is not a palindrome (without built-in functions)." << std::endl;
    }

    return 0;
}

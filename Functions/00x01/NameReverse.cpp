#include <iostream>
#include <string>

void reverseAndPrintNames() {
    std::string firstName, lastName;

    // Prompt the user to enter their first and last names
    std::cout << "Enter your first name: ";
    std::cin >> firstName;

    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    // Print the names in reverse order with a space
    std::cout << "Reversed Name: " << lastName << " " << firstName << std::endl;
}

int main() {
    // Call the function to accept and print names in reverse order
    reverseAndPrintNames();

    return 0;
}

#include <iostream>
#include <ctime>

void displayCurrentDateTime() {
    // Get the current time
    std::time_t currentTime = std::time(nullptr);

    // Convert the current time to a string
    std::string dateTime = std::ctime(&currentTime);

    // Display the current date and time
    std::cout << "Current Date and Time: " << dateTime;
}

int main() {
    // Call the function to display the current date and time
    displayCurrentDateTime();

    return 0;
}

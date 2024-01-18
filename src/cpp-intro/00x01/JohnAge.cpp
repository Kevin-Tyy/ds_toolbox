#include <iostream>

long long calculateAgeInSeconds(long long seconds) {
    const long long secondsInYear = 31536000; // Assuming 365 days in a year

    long long years = seconds / secondsInYear;
    return years;
}

int main() {
    long long johnSeconds = 1000000000;
    long long johnYears = calculateAgeInSeconds(johnSeconds);

    std::cout << "John is approximately " << johnYears << " years old." << std::endl;

    return 0;
}

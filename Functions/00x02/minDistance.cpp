#include <iostream>
#include <vector>
#include <cmath>

int minDistance(int number) {
    if (number <= 1) {
        return -1; // Invalid input, no factors to find distance between
    }

    std::vector<int> factors;
    
    for (int i = 1; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            factors.push_back(i);
            if (i != number / i) {
                factors.push_back(number / i);
            }
        }
    }

    int minDist = number; // Initialize minDist to a large value

    for (int i = 0; i < factors.size(); ++i) {
        for (int j = i + 1; j < factors.size(); ++j) {
            int dist = abs(factors[i] - factors[j]);
            if (dist < minDist) {
                minDist = dist;
            }
        }
    }

    return minDist;
}

int main() {
    int number;

    std::cout << "Enter a positive integer: ";
    std::cin >> number;

    int result = minDistance(number);

    if (result == -1) {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
    } else {
        std::cout << "The smallest positive distance between two factors of " << number << " is: " << result << std::endl;
    }

    return 0;
}

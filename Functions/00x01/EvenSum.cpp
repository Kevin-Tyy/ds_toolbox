#include <iostream>

int main() {
    int sum = 0;

    for (int i = 2; i < 100; i += 2) {
        sum += i;
    }

    std::cout << "The sum of all even numbers less than 100 is: " << sum << std::endl;

    return 0;
}

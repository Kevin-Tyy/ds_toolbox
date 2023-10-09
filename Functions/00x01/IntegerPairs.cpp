#include <iostream>
#include <cmath>

bool isHypotenuse(int a, int b) {
    int c = sqrt(a * a + b * b);
    return (c * c == a * a + b * b);
}

int main() {
    int count = 0;

    for (int a = 2; a < 100; ++a) {
        for (int b = a; b < 100; ++b) {
            if (isHypotenuse(a, b)) {
                std::cout << "(" << a << ", " << b << ") ";
                count++;
            }
        }
    }

    std::cout << "\nTotal pairs found: " << count << std::endl;

    return 0;
}

#include <iostream>
#include <cmath>

int main()
{

    float a = 0;
    float b = 0;

    while (a == 0) {
        std::cout << "\nInput a: ";
        std::cin >> a;

        if (a == 0) {
            std::cout << "Zero is not a valid number\n";
        }
    }

    while (b == 0) {
        std::cout << "\nInput b: ";
        std::cin >> b;

        if (b == 0) {
            std::cout << "Zero is not a valid number\n";
        }
    }

    float a_absolute = abs(a);
    float b_absolute = abs(b);

    std::cout << "\nSum of modules is: " << a_absolute + b_absolute;
    std::cout << "\nDifference of modules is: " << a_absolute - b_absolute;
    std::cout << "\nProduct of modules is: " << a_absolute * b_absolute;
    std::cout << "\nQuotient of modules is: " << a_absolute / b_absolute;

}

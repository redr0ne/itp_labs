#include <iostream>
#include <cmath>

int main()
{

    int a = 0;
    int b = 0;

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

    int a_squared = pow(a, 2);
    int b_squared = pow(b, 2);

    std::cout << "\nSum of squares is: " << a_squared + b_squared;
    std::cout << "\nDifference of squares is: " << a_squared - b_squared;
    std::cout << "\nProduct of squares is: " << a_squared * b_squared;
    std::cout << "\nQuotient of squares is: " << a_squared / b_squared;

}
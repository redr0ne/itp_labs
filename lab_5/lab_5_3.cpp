#include <iostream>
#include <cmath>

int main()
{
    int a = 0;
    int b = 1;
    int c = 2;

    while (!(a < c < b) and !(a > c > b)) {

        std::cout << "\ninput a: ";
        std::cin >> a;

        std::cout << "\ninput b: ";
        std::cin >> b;

        std::cout << "\ninput c: ";
        std::cin >> c;

        if (!(a < c < b) and !(a > c > b)) {
            std::cout << "\npoint c must be between points a and b";

        }

    }

    int length_ac = abs(a - c);
    int length_bc = abs(b - c);
    int product_of_lengths = length_ac * length_bc;

    std::cout << "\nproduct of lengths: " << product_of_lengths;
}

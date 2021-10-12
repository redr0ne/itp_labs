#include <iostream>
#include <cmath>

int main()
{
    int a;
    int b;
    int c;

    std::cout << "\nInput a: ";
    std::cin >> a;

    std::cout << "\nInput b: ";
    std::cin >> b;

    std::cout << "\nInput c: ";
    std::cin >> c;

    int length_ac = abs(a - c);
    int length_bc = abs(b - c);
    int sum_of_lengths = length_ac + length_bc;

    std::cout << "\nSection length ac: " << length_ac;
    std::cout << "\nSection length bc: " << length_bc;
    std::cout << "\nSum of lengths: " << sum_of_lengths;
}

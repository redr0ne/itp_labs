#include <iostream>

int main()
{
    int a;
    int b;

    std::cout << "Input a: ";
    std::cin >> a;

    std::cout << "\nInput b: ";
    std::cin >> b;

    int S = a * b;
    int P = 2 * (a + b);

    std::cout << "Area is: " << S << "\nPerimeter is: " << P;
}

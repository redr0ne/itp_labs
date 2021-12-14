#include <iostream>
#include <cmath>

int main()
{
    int a, b, c;
    
    std::cout << "\nInput a: ";
    std::cin >> a;
    std::cout << "\nInput b: ";
    std::cin >> b;
    std::cout << "\nInput c: ";
    std::cin >> c;
    
    if ((pow(a, 2) == pow(b, 2) + pow(c, 2)) or (pow(b, 2) == pow(a, 2) + pow(c, 2)) or (pow(c, 2) == pow(a, 2) + pow(b, 2))){
        std::cout << "\nA triangle with sides a, b, c is rectangular";
    } else {
        std::cout << "\nA triangle with sides a, b, c is NOT rectangular";
    }
    
}

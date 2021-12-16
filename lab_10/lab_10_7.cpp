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
    
    if ((a + b > c) and (a + c > b) and (c + b > a)){
        std::cout << "\nA triangle with sides a, b, c exists";
    } else {
        std::cout << "\nA triangle with sides a, b, c does NOT exist";
    }
    
}

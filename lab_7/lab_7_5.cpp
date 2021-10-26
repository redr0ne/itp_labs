#include <iostream>
#include <cmath>

int main()
{
    std::cout << "\nA•x + B = 0";
    
    int A, B;
    
    std::cout << "\nInput A: ";
    std::cin >> A;
    
    std::cout << "\nInput B: ";
    std::cin >> B;
    
    int x = -(B / A);
    
    std::cout << "\nx is: " << x;
}

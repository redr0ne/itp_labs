#include <iostream>
#include <cmath>

int main()
{
    int A, B;
    
    std::cout << "\nInput A: ";
    std::cin >> A;
    std::cout << "\nInput B: ";
    std::cin >> B;
    
    if (A != B){
        A = std::max(A, B);
        B = std::max(A, B);
    } else {
        A = 0;
        B = 0;
    }

    std::cout << "\nNew A value: " << A;
    std::cout << "\nNew B value: " << B;
    
}

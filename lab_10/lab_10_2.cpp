#include <iostream>
#include <cmath>

int main()
{
    int A, B, C;
    
    std::cout << "\nInput A: ";
    std::cin >> A;
    std::cout << "\nInput B: ";
    std::cin >> B;
    std::cout << "\nInput C: ";
    std::cin >> C;
    
    if ((A < B) and (B < C)){
        std::cout << "\nThe double inequality A < B < C are valid";
    } else {
        std::cout << "\nThe double inequality A < B < C are not valid";
    }
    
}

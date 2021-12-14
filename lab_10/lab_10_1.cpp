#include <iostream>
#include <cmath>

int main()
{
    int A, B;
    
    std::cout << "\nInput A: ";
    std::cin >> A;
    std::cout << "\nInput B: ";
    std::cin >> B;
    
    if ((A > 2) and (B <= 3)){
        std::cout << "\nInequalities A > 2 and B ≤ 3 are valid";
    } else {
        std::cout << "\nInequalities A > 2 and B ≤ 3 are not valid";
    }
    
}

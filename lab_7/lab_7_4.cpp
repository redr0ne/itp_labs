#include <iostream>
#include <cmath>

int main()
{
    
    int V1, V2, S, T;

    std::cout << "\nInput V1 (First car speed): ";
    std::cin >> V1;
    
    std::cout << "\nInput V2 (Second car speed): ";
    std::cin >> V2;
    
    std::cout << "\nInput S (Distance between cars):";
    std::cin >> S;
    
    std::cout << "\nInput T (Time after the departure of cars): ";
    std::cin >> T;
    
    int S2 = (V1 + V2) * T + S;
    
    std::cout << "\nDistance between cars after " << T << " hours: " << S2;
}

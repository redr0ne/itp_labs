#include <iostream>
#include <cmath>

int main()
{
    
    int x, A;

    std::cout << "\nInput x(weight): ";
    std::cin >> x;
    
    std::cout << "\nInput A(price): ";
    std::cin >> A;

    float price_per_kilogram = A / x;
    std::cout << "\nPrice per kilogram is: " << price_per_kilogram;
    
    int Y;
    
    std::cout << "\nInput Y(second weight): ";
    std::cin >> Y;
    
    float Y_price = price_per_kilogram * Y;
    std::cout << "\nPrice for " << Y << " kilograms of sweets: " << Y_price;
    
}

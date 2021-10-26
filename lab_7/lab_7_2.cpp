#include <iostream>
#include <cmath>

int main()
{
    
    float radians_alpha = 0;
    
    while (!((0 < radians_alpha) and (radians_alpha < 6.283188))) {

        std::cout << "\ninput alpha in radians: ";
        std::cin >> radians_alpha;

        if (!((0 < radians_alpha) and (radians_alpha < 6.283188))) {
            std::cout << "\nalpha must be between 0 and 6.283188";
        }
    }
    
    float degrees_alpha = 57.29578 * radians_alpha;
    
    std::cout << "\nAlpha angle in degrees: " << degrees_alpha;
}

#include <iostream>
#include <cmath>

int main()
{
    
	int N = 0;
	float product = 1.1;

    while (!(N > 0)) {
        std::cout << "\nВведите N: ";
        std::cin >> N;
        
        if (!(N > 0)) {
            std::cout << "\nЧисло должно быть больше нуля";
        }
    }
    
    float multiplier = product + 0.1;
    
    for (int count = 1; count < N; count++, multiplier += 0.1){
        product *= multiplier;
    }
    
    std::cout << "\nПроизведение: " << product;
    
}

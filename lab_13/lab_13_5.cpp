#include <iostream>
#include <cmath>

int main()
{
    
	int N = 0;
	float A;

    while (!(N > 0)) {
        std::cout << "\nВведите N: ";
        std::cin >> N;
        
        if (!(N > 0)) {
            std::cout << "\nЧисло должно быть больше нуля";
        }
    }
    
    std::cout << "\nВведите A: ";
    std::cin >> A;
    
    float sum = 0;
    
    for (int count = 0; count <= N; count++){
        sum += pow(A, count);
        A = -A;
    }
    
    std::cout << "\nПолученная сумма: " << sum;
    
}

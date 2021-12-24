#include <iostream>
#include <cmath>

int main()
{
    
	int N = 0;

    while (!(N > 1)) {
        std::cout << "\nВведите N: ";
        std::cin >> N;
        
        if (!(N > 1)) {
            std::cout << "\nЧисло N должно быть больше 1";
        }
    }
    
    int sum = 0;
    int K = 0;
    while (!(sum >= N)){
        K++;
        sum += K;
    }
    
    std::cout << "\nНаименьшее из чисел K, для которого сумма больше или равна N: " << K;
    
}

#include <iostream>
#include <cmath>

int main()
{
    
	float P = 0;
    
    while (!(P > 0 and P < 25)) {
        std::cout << "\nВведите P: ";
        std::cin >> P;
        
        if (!(P > 0 and P < 25)) {
            std::cout << "\nP должно быть в промежутке от 0 до 25";
        }
    }
    
    int K = 0;
    float S = 1000;
    while (!(S >= 1100)){
        K++;
        S += S * (P / 100);
    }
    
    std::cout << "\nРазмер вклада превысит 1100р. через " << K << " месяцев";
    std::cout << "\nИтоговый размер вклада: " << S;
    
}

#include <iostream>
#include <cmath>

float Fact2(int N){
    
    if (N % 2 == 1){
        int addition = 1;
        float N_fact = 1;
        while (addition <= N){
            N_fact = N_fact * addition;
            addition += 2;
        }
        return N_fact;
    }
    
    if (N % 2 == 0){
        int addition = 2;
        float N_fact = 1;
        while (addition <= N){
            N_fact = N_fact * addition;
            addition += 2;
        }
        return N_fact;
    }
    
    return 0;
}

int main() 
{
    
    float N;
    while (!(N > 0)) {
        std::cout << "\nВведите N: ";
        std::cin >> N;
        
        if (!(N > 0)) {
            std::cout << "\nN должно быть больше нуля";
        }
    }
    std::cout << "\nДвойной факториал данного числа: " << Fact2(N);
    
}

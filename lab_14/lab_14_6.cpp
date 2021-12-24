#include <iostream>
#include <cmath>

int main()
{
    int N = 0;
    
    while (!(N > 1 and ((sqrt(5 * (N * N) - 4) == int(sqrt(5 * (N * N) - 4))) or (sqrt(5 * (N * N) + 4) == int(sqrt(5 * (N * N) + 4)))))) {
        std::cout << "\nВведите N: ";
        std::cin >> N;
        
        if (!(N > 1)) {
            std::cout << "\nN должно быть больше единицы";
        }
        if (!((sqrt(5 * (N * N) - 4) == int(sqrt(5 * (N * N) - 4))) or (sqrt(5 * (N * N) + 4) == int(sqrt(5 * (N * N) + 4))))){
            std::cout << "\nN должно быть числом Фибоначчи";
        }
    }
    
    int first_num = 1;
    int second_num = 1;
    int current_num = 0;
    int k = 2;
    
    while (current_num != N){
        current_num = first_num + second_num;
        k++;
        
        first_num = second_num;
        second_num = current_num;
    }
    
    std::cout << "\nПорядковый номер числа Фибоначчи N: " << k;
    
}

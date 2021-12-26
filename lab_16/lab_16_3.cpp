#include <iostream>
#include <cmath>

int main()
{
    int N = 0;
    while (!(N > 2)) {
        std::cout << "\nВведите N: ";
        std::cin >> N;
        
        if (!(N > 2)) {
            std::cout << "\nN должно быть больше двух";
        }
    }
    
    int A;
    std::cout << "\nВведите A: ";
    std::cin >> A;
    
    int B;
    std::cout << "\nВведите B: ";
    std::cin >> B;
    
    int array[N];
    
    int outer_current_index = 2;
    array[0] = A;
    array[1] = B;
    int sum;
    while (outer_current_index < N){
        sum = 0;
        for (int inner_current_index = 0; inner_current_index < outer_current_index; inner_current_index++){
            sum += array[inner_current_index];
        }
        array[outer_current_index] = sum;
        outer_current_index++;
    }
    
    std::cout << "\nПолучившийся массив: ";
    for (int i = 0; i < N; i++){
        std::cout << array[i] << " ";
    }
    
}

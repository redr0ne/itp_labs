#include <iostream>
#include <cmath>

int main()
{
    
	int N = -2;
	char C = 'A';

    //Ввод русских символов плохо работает, по крайней мере в onlinegdb

    while (!(C == 'N' or C == 'W' or C == 'S' or C == 'E')) {
        std::cout << "\nВведите направление (N/W/S/E): ";
        std::cin >> C;
        
        if (!(C == 'N' or C == 'W' or C == 'S' or C == 'E')) {
            std::cout << "\nПодходят только символы N, W, S, E";
        }
    }
    
    while (!(N == 0 or N == 1 or N == -1)) {
        std::cout << "\nВведите команду (0/1/-1): ";
        std::cin >> N;
        
        if (!(N == 0 or N == 1 or N == -1)) {
            std::cout << "\nПодходят только команды 0, 1, -1";
        }
    }
    
    int C_number;
    
    switch (C){
        case 'N':
            C_number = 4;
            break;
        case 'E':
            C_number = 3;
            break;
        case 'S':
            C_number = 2;
            break;
        case 'W':
            C_number = 1;
            break;
    }
    
    int delta_C = C_number + N;
    
    switch (delta_C){
        case 1:
            std::cout << "Новое направление: West";
            break;
        case 5:
            std::cout << "Новое направление: West";
            break;
        case 2:
            std::cout << "Новое направление: South";
            break;
        case 3:
            std::cout << "Новое направление: East";
            break;
        case 4:
            std::cout << "Новое направление: North";
            break;
        case 0:
            std::cout << "Новое направление: North";
            break;
    }
    
}

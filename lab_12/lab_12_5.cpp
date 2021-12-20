#include <iostream>
#include <cmath>

int main()
{
    
	int year = 0;
	int offset = 4;

    while (!(year >= 4)) {
        std::cout << "\nВведите год: ";
        std::cin >> year;
        
        if (!(year >= 4)) {
            std::cout << "\nГод должен быть больше 4";
        }
    }
    
    
    int year_with_offset = year - offset;
    int year_number_in_cycle = year_with_offset - (year_with_offset / 60) * 60 + 1;
    int cycle_number = (year_number_in_cycle - 1) / 12 + 1;
    int animal_number = year_number_in_cycle / cycle_number;
    
    std::cout << "\nГод ";
    
    if ((animal_number >= 1 and animal_number <= 2) or (animal_number >= 6 and animal_number <= 12)){
        switch (cycle_number){
        case 1:
            std::cout << "зелёной ";
            break;
        case 2:
            std::cout << "красной ";
            break;
        case 3:
            std::cout << "желтой ";
            break;
        case 4:
            std::cout << "белой ";
            break;
        case 5:
            std::cout << "черной ";
            break;
        }
    } else {
        switch (cycle_number){
        case 1:
            std::cout << "зелёного ";
            break;
        case 2:
            std::cout << "красного ";
            break;
        case 3:
            std::cout << "желтого ";
            break;
        case 4:
            std::cout << "белого ";
            break;
        case 5:
            std::cout << "черного ";
            break;
        }
    }
    
    switch (animal_number){
        case 1:
            std::cout << "крысы";
            break;
        case 2:
            std::cout << "коровы";
            break;
        case 3:
            std::cout << "тигра";
            break;
        case 4:
            std::cout << "зайца";
            break;
        case 5:
            std::cout << "дракона";
            break;
        case 6:
            std::cout << "змеи";
            break;
        case 7:
            std::cout << "лошади";
            break;
        case 8:
            std::cout << "овцы";
            break;
        case 9:
            std::cout << "обезьяны";
            break;
        case 10:
            std::cout << "курицы";
            break;
        case 11:
            std::cout << "собаки";
            break;
        case 12:
            std::cout << "свиньи";
            break;
    }
    
}

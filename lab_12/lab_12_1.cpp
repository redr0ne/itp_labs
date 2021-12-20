#include <iostream>
#include <cmath>

int main()
{
	int day, month = 0;

    while (!(day >= 1 and day <= 31)) {
        std::cout << "\nВведите номер дня месяца: ";
        std::cin >> day;
        
        if (!(day >= 1 and day <= 31)) {
            std::cout << "\nЧисло должно быть от 1 to 31";
        }
    }
    
    while (!(month >= 1 and month <= 12)) {
        std::cout << "\nВведите номер месяца: ";
        std::cin >> month;
        
        if (!(month >= 1 and month <= 12)) {
            std::cout << "\nЧисло должно быть от 1 to 12";
        }
    }
    
     if (day % 10 == 0){
        switch (day){
            case 10:
                std::cout << "десятое";
                break;
            case 20:
                std::cout << "двадцатое";
                break;
            case 30:
                std::cout << "тридцатое";
                break;
        }
    }
    
    if (day % 10 != 0) {
        switch (day / 10){
            case 2:
                std::cout << "двадцать ";
                break;
            case 3:
                std::cout << "тридцать ";
                break;
        }
    }
    
    if (day / 10 != 1){
    
        switch (day % 10){
            case 1:
                std::cout << "первое";
                break;
            case 2:
                std::cout << "второе";
                break;
            case 3:
                std::cout << "третье";
                break;
            case 4:
                std::cout << "четвёртое";
                break;
            case 5:
                std::cout << "пятое";
                break;
            case 6:
                std::cout << "шестое";
                break;
            case 7:
                std::cout << "седьмое";
                break;
            case 8:
                std::cout << "восьмое";
                break;
            case 9:
                std::cout << "девятое";
                break;
        }
    } else {
        switch (day){
            case 11:
                std::cout << "одиннадцатое";
                break;
            case 12:
                std::cout << "двенадцатое";
                break;
            case 13:
                std::cout << "тринадцатое";
                break;
            case 14:
                std::cout << "четырнадцатое";
                break;
            case 15:
                std::cout << "пятнадцатое";
                break;
            case 16:
                std::cout << "шестнадцатое";
                break;
            case 17:
                std::cout << "семнадцатое";
                break;
            case 18:
                std::cout << "восемнадцатое";
                break;
            case 19:
                std::cout << "девятнадцатое";
                break;
        }
    }
    
    switch (month){
        case 1:
            std::cout << " января";
            break;
        case 2:
            std::cout << " февраля";
            break;
        case 3:
            std::cout << " марта";
            break;
        case 4:
            std::cout << " апреля";
            break;
        case 5:
            std::cout << " мая";
            break;
        case 6:
            std::cout << " июня";
            break;
        case 7:
            std::cout << " июля";
            break;
        case 8:
            std::cout << " августа";
            break;
        case 9:
            std::cout << " сентября";
            break;
        case 10:
            std::cout << " октября";
            break;
        case 11:
            std::cout << " ноября";
            break;
        case 12:
            std::cout << " декабря";
            break;
        
    }
}

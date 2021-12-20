#include <iostream>
#include <cmath>

int main()
{
    
	int number = 0;

    while (!(number >= 10 and number <= 40)) {
        std::cout << "\nВведите количество учебных заданий: ";
        std::cin >> number;
        
        if (!(number >= 10 and number <= 40)) {
            std::cout << "\nЧисло должно быть от 10 до 40";
        }
    }
    
    switch (number / 10){
            case 2:
                std::cout << "двадцать ";
                break;
            case 3:
                std::cout << "тридцать ";
                break;
            case 4:
                std::cout << "сорок ";
                break;
    }
    
    if (number / 10 != 1){
    
        switch (number % 10){
            case 1:
                std::cout << "одно";
                break;
            case 2:
                std::cout << "два";
                break;
            case 3:
                std::cout << "три";
                break;
            case 4:
                std::cout << "четыре";
                break;
            case 5:
                std::cout << "пять";
                break;
            case 6:
                std::cout << "шесть";
                break;
            case 7:
                std::cout << "семь";
                break;
            case 8:
                std::cout << "восемь";
                break;
            case 9:
                std::cout << "девять";
                break;
        }
    
    } else {
        switch (number){
            case 10:
                std::cout << "десять";
                break;
            case 11:
                std::cout << "одиннадцать";
                break;
            case 12:
                std::cout << "двенадцать";
                break;
            case 13:
                std::cout << "тринадцать";
                break;
            case 14:
                std::cout << "четырнадцать";
                break;
            case 15:
                std::cout << "пятнадцать";
                break;
            case 16:
                std::cout << "шестнадцать";
                break;
            case 17:
                std::cout << "семнадцать";
                break;
            case 18:
                std::cout << "восемнадцать";
                break;
            case 19:
                std::cout << "девятнадцать";
                break;
        }
    }
    if (number >= 11 and number <= 14){
        std::cout << " учебных заданий";
    } else {
        if ((number % 10) == 1){
            std::cout << " учебное задание";
        }
        if ((number % 10) >= 2 and (number % 10) <= 4){
            std::cout << " учебных задания";
        }
        if ( ((number % 10) >= 5 and (number % 10) <= 9) or (number % 10) == 0) {
            std::cout << " учебных заданий";
        }
    
    }
    
}

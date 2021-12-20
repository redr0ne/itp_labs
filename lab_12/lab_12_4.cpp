#include <iostream>
#include <cmath>

int main()
{
    
	int number = 0;

    while (!(number >= 100 and number <= 999)) {
        std::cout << "\nВведите число от 100 до 999: ";
        std::cin >> number;
        
        if (!(number >= 100 and number <= 999)) {
            std::cout << "\nЧисло должно быть от 100 до 999";
        }
    }
    
        switch (number / 100){
        case 1:
            std::cout << "сто ";
            break;
        case 2:
            std::cout << "двести ";
            break;
        case 3:
            std::cout << "триста ";
            break;
        case 4:
            std::cout << "четыреста ";
            break;
        case 5:
            std::cout << "пятьсот ";
            break;
        case 6:
            std::cout << "шестьсот ";
            break;
        case 7:
            std::cout << "семьсот ";
            break;
        case 8:
            std::cout << "восемьсот ";
            break;
        case 9:
            std::cout << "девятьсот ";
            break;
    }
    
    switch ((number / 10) % 10){
                case 2:
                    std::cout << "двадцать ";
                    break;
                case 3:
                    std::cout << "тридцать ";
                    break;
                case 4:
                    std::cout << "сорок ";
                    break;
                case 5:
                    std::cout << "пятьдесят ";
                    break;
                case 6:
                    std::cout << "шестьдесят ";
                    break;
                case 7:
                    std::cout << "семьдесят ";
                    break;
                case 8:
                    std::cout << "восемьдесят ";
                    break;
                case 9:
                    std::cout << "девяносто ";
                    break;
        }
    
    if ((number / 10) % 10 != 1){
    
        switch (number % 10){
            case 1:
                std::cout << "один";
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
        switch (number % 100){
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
    
}

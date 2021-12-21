#include <iostream>
#include <cmath>

int main()
{
    
	int price;

    std::cout << "\nВведите цену 1 кг конфет: ";
    std::cin >> price;
        
    for (float weight = 0.1; weight < 1.1; weight += 0.1){
        std::cout << "\nСтоимость " << weight << " кг конфет: " << price * weight;
    }
    
}

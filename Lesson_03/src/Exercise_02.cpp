#include <iostream>

int inputValue = 0;

int main(){
	std::cout << "Введите число: " ;
	std::cin >> inputValue;
	std::cout << "Результат: " << ((inputValue > 21) ? inputValue-21 : inputValue*2) << std::endl;

	return 0;
}

#include <iostream>

int a,b,c,d = 0;

int main(){
	a = 1;
	b = 5;
	c = 7;
	d = 2;

	std::cout << "Результат переводим во Float: "<<static_cast<float>(a*(b+(c/d))) << std::endl;

	std::cout << "Результат Float: "<< static_cast<float>(a)*(static_cast<float>(b)+
					(static_cast<float>(c)/static_cast<float>(d)))
					<< std::endl;
	return 0;
}

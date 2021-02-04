#include <iostream>

extern int a,b,c,d;

int main(){
	std::cout << "Результат переводим во Float: "<<static_cast<float>(a*(b+(c/d))) << std::endl;

	std::cout << "Результат Float: "<< static_cast<float>(a)*(static_cast<float>(b)+
					(static_cast<float>(c)/static_cast<float>(d)))
					<< std::endl;
	return 0;
}
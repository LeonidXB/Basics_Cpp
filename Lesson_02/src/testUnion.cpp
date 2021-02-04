#include <iostream>

int valSize = 0;


union var{
	int i;
	char c;
	float f;
};

struct complex{
	union var value;
	bool isInt	: 1;
	bool isFloat	: 1;
	bool isChar	: 1;
};

complex myUnion;

//Я посчитал что самый менее затратный способ узнать какой тип данных занесен в Union
//это выставить флаг вручную.
//Если я не прав, прошу поправить меня

int main()
{
	myUnion.value.i = 24;
	myUnion.isInt	= true;
	myUnion.isChar  = false;
	myUnion.isFloat = false;

	myUnion.value.c = 'w';
	myUnion.isInt	= false;
	myUnion.isChar  = true;
	myUnion.isFloat = false;

//	myUnion.value.f = 1.3;
//	myUnion.isInt	= false;
//	myUnion.isChar  = false;
//	myUnion.isFloat = true;

	if (myUnion.isInt){
		std::cout << "Value: "   << myUnion.value.i   << std::endl;
	}
	else if (myUnion.isChar){
		std::cout << "Value: "   << myUnion.value.c   << std::endl;
	}
	else if (myUnion.isFloat){
		std::cout << "Value: "   << myUnion.value.f   << std::endl;
	}

	std::cout << "isInt: "   << myUnion.isInt   << std::endl;
	std::cout << "isFloat: " << myUnion.isFloat << std::endl;
	std::cout << "isChar: "  << myUnion.isChar  << std::endl;
	return 0;
}

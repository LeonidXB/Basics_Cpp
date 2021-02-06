#include<iostream>

int array[3][3][3] ={};
int* target = &array[1][1][1];

int main(){
	array[1][1][1] = 25;
	std::cout << "Результат разыменования Array[1][1][1]: " << *target << std::endl;

	return 0;
}

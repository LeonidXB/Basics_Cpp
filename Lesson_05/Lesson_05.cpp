#include<iostream>

int const arraySize = 10;
int arrayContent[arraySize] = { 1,1,0,0,1,0,1,1,0,1 };
void invertArray(int* array, int arraySize);
void printArray(int* array, int arraySize);

int emptyArray[8];

int main(int argc, char** argv) {
	//Exercise#01
	std::cout << "Exercise#1" << std::endl;
	printArray(arrayContent, arraySize);
	invertArray(arrayContent, arraySize);

	//Exercise#02
	std::cout << std::endl;
	std::cout << "Exercise#2" << std::endl;
	for (int index = 1; index <= 8; index++) {
		emptyArray[index] = index*2+index-2;
		std::cout << emptyArray[index] << " ";
	}

	return 0;
}

//Вывод содержимого массива в консоль
void printArray(int* array, int arraySize) {
	for (int index = 0; index < arraySize; index++) {
		std::cout << array[index] << " ";
	}
	std::cout << std::endl;
}

//Инвертирование переменных 1,0 в массиве
void invertArray(int* array, int arraySize) {
	for (int index = 0; index < arraySize; index++) {
		std::cout << !bool(array[index]) << " ";
	}
	std::cout << std::endl;
}
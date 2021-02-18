#include<iostream>

#define DEF(x,n) (((x > 0) && (x < n))? "YES": "NO")	/*Exercise#1*/
#define PRINT_EL(ar, x,y) (*(*(ar+x)+y))				/*Exercise#2*/
#define ARR_SIZE(ar, type) (sizeof(ar)/sizeof(type))	/*Exercise#3*/

int main(int argc, char* argv[]) {
//Check Exercise#1
	int x = 3;
	int n = 10;
	std::cout << DEF(x, n) << std::endl;

//Check Exercise#2
	int sizeX = 5;
	int sizeY = 5;

	int** tArray = new int*[sizeX];
	for (int index = 0; index < sizeX; index++){
		tArray[index] = new int[sizeY];
	}

	for (int x = 0; x < sizeX; x++){
		std::cout << std::endl;
		for (int y = 0; y < sizeY; y++){
			tArray[x][y] = x + y ;
			std::cout << tArray[x][y] << " ";
		}
	}

	std::cout << std::endl << "Find: " << PRINT_EL(tArray, 1,1) << std::endl;
	for (int index = 0; index < sizeX; index++) {
		delete[] tArray[index];
	}

//Check Exercise#3
	int vArray[15] = {1,2,3,4,5};
	std::cout << "Number of elements: "<< ARR_SIZE(vArray, int) << std::endl;

	return 0;
}
#include <iostream>

int 	testIntValue 	= 0;
short 	testShortValue 	= 0;
bool 	testBool 	= false;
float 	testFloatValue 	= 0.0;
const unsigned short testUShortValue = 0;


unsigned short state = 0;			//Переменная, описывающая текущее состояние игры:
						//- Новая игра
						//- Игровой процесс
						//- Игра завершена

enum sym{ O, X};				//Символы, доступные для игры в крестики-нолики

sym gameField[9]={};				//Игровое поле 3х3.
						//Одномерный массив в данном случае позволяет упростить алгоритм
						//и уменьшить требуемые для программы ресурсы
struct FieldForTicTakToeGame
{
	bool		isYourTurn;		//Флаг хода игрока
	unsigned short	Score[1]={};		//Счет игры.
};


int main()
{
	return 0;
}

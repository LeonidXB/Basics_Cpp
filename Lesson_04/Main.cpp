#include<iostream>

int a,b = 0;

int c = 0;
bool flag = false;

const int d = 5;
const int f = 7;

int year = 0;
bool isLeap = false;

int main(){
//Exercise#1
	std::cout << "Exercise#1" << std::endl;
	std::cout << "Input number a: ";
	std::cin >> a;
	std::cout << "Input number b: ";
	std::cin >> b;
	std::cout <<"Result 10<=(a+b)<=20?: ";

	if ((a+b>=10) && (a+b<=20)){
		std::cout << "True" << std::endl;
	} else {
		std::cout << "False" << std::endl;
	}

//Exercise#2
	std::cout << "Exercise#2" << std::endl;
	std::cout << "Input the number: ";
	std::cin >> c;
	flag = false;

	if (c>0){
		for(int i=2; i < c; i++){
			if(c % i == 0){
				flag = true;
				break;
			}
		flag = false;
		}
	} else {
	std::cout << "Incorrent number!" << std::endl;
	}

	std::cout << "Flag: " << flag << std::endl;
	if (flag){
		 std::cout << "It is not natural number" << std::endl;
	} else {
		std::cout << "It is natural number!!!" << std::endl;
	}

//Exercise#3
	std::cout << "Exercise#3" << std::endl;
	if((d==10 && f==10)||(d+f==10)){
		std::cout << "True" << std::endl;
	}
	else std::cout << "False" << std::endl;

//Exercise#4
	std::cout << "Exercise#4" << std::endl;
	std::cout << "Input the year number: ";
	std::cin >> year;

	isLeap = false;
	if(year%400==0||(year%4==0 && year%100!=0)){
		std::cout << "Leap year (366 days)" << std::endl;
	} else {
		std::cout << "Not leap year (365 days)" << std::endl;
	}

	return 0;
}

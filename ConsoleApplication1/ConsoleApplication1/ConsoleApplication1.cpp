// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

void problem25(unsigned_integer numberOfDigits) {
	long double toReturn = ((numberOfDigits - 1) + 0.5l*log10l(5l)) / (log10l(1l + sqrtl(5l)) - log10l(2l));
	std::cout << toReturn << std::endl;
}

void previousProblems() {
	/*Dodecahedron::Bigint two = 100;
	Dodecahedron::Bigint twoPow = Dodecahedron::factorial(100);
	std::cout << twoPow << std::endl;
	long sum = 0;
	for (int i = 0; i < twoPow.digits(); i++)
	{
	sum += twoPow[i];
	}
	std::cout << "Fact sum:"<<sum << std::endl;
	*/

	//std::cout << Util::factorial(40)/ Util::factorial(20) << std::endl;
	//std::cout << Util::over(100,1) << std::endl;
	/*for (unsigned_integer i = 2; i < 40; i++)
	{
	std::cout << Util::over(i,i/2) << std::endl;
	}*/

	//std::cout << Util::over(33, 17) << std::endl;
}

int factorial(int num) {
	int toReturn = 1;
	for (int i = 2; i <= num; i++)
	{
		toReturn *= i;
	}
	return toReturn;
}

void problem24() {
	int num = 2 * factorial(9);//[0-1]*
	num += 6*factorial(8);//[2][0,1,3,4,5,6]*
	num += 6*factorial(7);//[2][7][0,1,3,4,5,6]*
	num += 2*factorial(6);//[2][7][8][0,1]*
	num += 5*factorial(5);//[2][7][8][3][0,1,4,5,6]*
	num += 1*factorial(4);//[2][7][8][3][9][0]*
	num += 2*factorial(3);//[2][7][8][3][9][0][1,4]*
	num += 2*factorial(2);//[2][7][8][3][9][0][5][1,4]*
	//1,6
	//2783905461
	std::cout <<  num << std::endl;
}




int main()
{
	problem24();
	/*Problem* pb = new Problem21();
	pb->init();
	pb->run();
	std::cout << "Run finished"<<std::endl;*/
	int a;
	std::cin>>a;
}




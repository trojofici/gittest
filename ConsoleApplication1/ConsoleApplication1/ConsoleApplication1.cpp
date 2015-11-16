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


int main()
{
	Problem* pb = new Problem21();
	//pb->init();
	pb->run();
	std::cout << "Run finished"<<std::endl;
	int a;
	std::cin>>a;
}




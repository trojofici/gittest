// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

int main()
{
	Problem* pb = new Problem14();
	pb->init();
	pb->run();
	std::cout << "Run finished"<<std::endl;
	//Util::isPrime(10);

	int a;
	std::cin>>a;
}


#include "stdafx.h"


Problem2::Problem2()
{
}


Problem2::~Problem2()
{
}

void Problem2::init()
{
}

void Problem2::run()
{
	int a1 = 1;
	int a2 = 2;
	int sum = 0;
 	while (a1 < 4000000) {
		if(a1%2 == 0) {
			sum += a1;
		}
		int a = a1+a2;
		a1 = a2;
		a2 = a;
	}
	std::cout << sum << std::endl;
}

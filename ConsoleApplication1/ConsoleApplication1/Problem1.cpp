#include "stdafx.h"

Problem1::Problem1()
{
}


Problem1::~Problem1()
{
}

void Problem1::init() {

}

void Problem1::run()
{
	std::cout << "Problem1 run start" << std::endl;
	int sum = 0;
	for (int i = 1; i < 1000; i++)
	{
		bool add = (i % 3 == 0) || (i % 5 == 0);
		if (add) {
			sum += i;
		}
	}
	std::cout<<sum << std::endl;

}

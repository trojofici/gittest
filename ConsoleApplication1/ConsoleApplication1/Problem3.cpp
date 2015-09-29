#include "stdafx.h"


Problem3::Problem3()
{
}


Problem3::~Problem3()
{
}

void Problem3::init()
{
}

void Problem3::run()
{
	//int maxFactor = Util::findMaxFactor(600851475143);
	//long a = 600851475143;
	unsigned_integer a = 3;
	a =11l * 13 * 71 *93 *17 * 23l;
	//a = 11l * 13 * 71;
	//a = 923;
	a = 600851475143;
	std::cout <<"maxFacor start val:" << a << std::endl;
	unsigned_integer maxFactor = 1;
	maxFactor = Util::findMaxFactor(a);
	std::cout << a << ", maxFacor:"<<maxFactor << std::endl;
}

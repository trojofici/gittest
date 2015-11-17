#include "stdafx.h"


Problem4::Problem4()
{
}


Problem4::~Problem4()
{
}

void Problem4::init()
{
}

void Problem4::run()
{
	//min = 317;
	//28*11 az 90*11
	//int min = 28 * 11;
	//int max = 90 * 11;
	int maxPali = 0;

	for (int i = 10; i < 91; i++)
	{
		int a1 = i * 11;
		for (int a2 = 100; a2 < 999; a2++)
		{
			int result = a1*a2;
			if (isPalindrome(result)) {
				std::cout << "Palindrome:" << result << std::endl;
				if (result>maxPali) {
					maxPali = result;
				}
				std::cout << "Max Pali  :" << maxPali << std::endl;
			}

		}
	}
}

bool Problem4::isPalindrome(int num)
{
	/*if (num < 10) return true;
	int logD = std::log10(num);
	int num2 = std::pow(10, logD);*/
	char c[16];
	std::sprintf(c, "%d", num);
	std::string str(c);// = std::string(c);
	int le = (int)str.length();
	for (int i = 0; i < le/2; i++)
	{
		if (str.at(i) != str.at(le-i-1)) return false;
	}
	return true;
	
}

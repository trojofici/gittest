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


Problem7::Problem7()
{
}


Problem7::~Problem7()
{
}

void Problem7::init() {

}

void Problem7::run()
{
	unsigned_integer inputSize = 1000;
	char input[] = "731671765313306249192251196744265747423534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	//unsigned_integer inputSize = 9;
	//char input[] = "703198206";
	unsigned_integer product = 1;
	unsigned_integer lastZero = -1;
	int windowSize = 13;
	
	unsigned_integer maxProduct = 0;
	unsigned_integer tmpProduct = 1;

	for (int i = 0; i < inputSize; i++)
	{
		int input0 = input[i] - '0';
		if (input0==0) {
			lastZero = i;
			tmpProduct = 1;
		} else {
			tmpProduct *= input0;
		}
		if (lastZero < i - windowSize) {
			int inputWindow = input[i - windowSize] - '0';
			tmpProduct /= inputWindow;
		}
		product = 0;
		if (lastZero <= i - windowSize) {
			product = tmpProduct;
		}
		


		if (i>=windowSize-1 &&  product > maxProduct) {
			maxProduct = product;
			std::cout << "index:" << i << ", tmpProduct:" << tmpProduct << std::endl;
			std::cout << "Product:" << product << ", Max Product:" << maxProduct << std::endl;
		}
		/*if (i > 45 && i < 52) {
			std::cout << "index:" << i << ", tmpProduct:" << tmpProduct << std::endl;
			std::cout << "Product:" << product << ", Max Product:" << maxProduct << std::endl;
		}*/

		
		
	}
	std::cout << "Max Product:" << maxProduct << std::endl;
}

Problem8::Problem8()
{
}


Problem8::~Problem8()
{
}

void Problem8::init() {

}

void Problem8::run()
{
	std::cout << "Problem8 run start" << std::endl;
	for (int a = 0; a < 500; a++)
	{
		for (int b = a; b < 500; b++)
		{
			int c = (int)sqrt(a*a + b*b);
			int as = a*a;
			// && (a*a+b*b=c*c)
			if(a+b+c==1000 && a*a + b*b == c*c) {
				std::cout << "[a,b,c]: [" << a<<":"<<b<<":"<<c<<"]"<<std::endl;
				std::cout << "abc: [" << a*b*c << std::endl;
				break;
			}
		}

	}
	
	
	
	

}


#include "stdafx.h"
#include "Util.h"

vector<unsigned_integer> Util::primes(0);
bool Util::primesInitialized = false;

Util::Util()
{
}


Util::~Util()
{
}
unsigned_integer Util::factorial(unsigned_integer num)
{
	unsigned_integer toReturn = 1;
	for (unsigned_integer i = 1; i <= num; i++)
	{
		toReturn *= i;
	}
	return toReturn;

}
unsigned_integer Util::over(unsigned_integer num1, unsigned_integer num2)
{
	std::cout << "over:" << num1 << ":" << num2 << std::endl;
	if (num2<=(num1-1)/2) {
		//std::cout << "over flipping:" << num1 << ":" << num1-num2 << std::endl;
		return over(num1, num1 - num2);
	}
	unsigned_integer toReturn = 1;
	unsigned_integer dividedBy = 1;
	unsigned_integer toReturn0 = 1;
	for (unsigned_integer i = num2+1; i <= num1; i++)
	{
		toReturn *= i;
		std::cout << "toReturn:" << toReturn << std::endl;
		//if (toReturn0 > toReturn) {
		if (toReturn > max_unsigned_integer/i) {
			//std::cout << "overflow:" << toReturn0 << ":" << toReturn << std::endl;
			while(dividedBy<=num1-num2)
			{
				if (toReturn0%dividedBy ==0) {
					toReturn0 /= dividedBy;
					//std::cout << "overflow divide:" << toReturn0 << ", divideBy:" << dividedBy << std::endl;
					dividedBy++;
				}
				else {
					break;
				}
			}
			toReturn = toReturn0*i;
		}
		toReturn0 = toReturn;
	}
	unsigned_integer divide = 1;
	for (unsigned_integer i = dividedBy; i <= num1 - num2; i++)
	{
		divide *= i;
	}
	return toReturn/divide;
}
void Util::initializePrimesDynamic()
{	
	vector<bool> _primes(Util::maxPrime);
	std::cout << "initializePrimesDynamic dyn start, maxNumber:" << maxPrime	<< std::endl;
	for (unsigned_integer i = 1; i < maxPrime; i++)
	{
		_primes.at(i)=true;
	}
	for (unsigned_integer i = 2; i < maxPrime; i++)
	{
		if (_primes.at(i)) {
			for (unsigned_integer j = i+i; j < maxPrime; j+=i)
			{
				_primes.at(j) = false;
			}

		}
	}

	unsigned_integer numberOfPrimes = 0;
	unsigned_integer sumOfPrimes = 0;

	for (unsigned_integer i = 2; i < maxPrime; i++) {
		if (_primes.at(i)) {
			numberOfPrimes++;
			primes.push_back(i);
			sumOfPrimes += i;
		}
	}

	std::cout << "initializePrimesDynamic dyn sum:" << sumOfPrimes << std::endl;
	std::cout << "initializePrimesDynamic dyn numberOfPrimes:" << numberOfPrimes << std::endl;
	std::cout << "initializePrimesDynamic dyn max Prime:" << primes.at(numberOfPrimes-1) << std::endl;
}

bool Util::isPrimeDynamic(unsigned_integer num)
{
	//if (primes.size()==0) {
	if (!primesInitialized) {
		initializePrimesDynamic();
		primesInitialized = true;
	}
	return false;
}

bool Util::isPrimeSimple(unsigned_integer num)
{
	unsigned_integer max = sqrt(num)+1;
	for (unsigned_integer i = 2; i <= max; i++)
	{
		if (num%i == 0) {
			return false;
		}
	}
	return true;
}

unsigned_integer Util::findMaxFactorSimple(unsigned_integer num)
{	
	std::cout << "findMaxFactor start num:" << num << std::endl;
	if (isPrime(num)) {
		return 1;
	}
	//double sq = sqrt(num);
	unsigned_integer startNum = num;
	unsigned_integer max = num/2+1;
	unsigned_integer maxFactor = 1;
	while (max>1)
	{
		if ((num % max)==0) {
			std::cout << "Dicvide:" << max << std::endl;
			unsigned_integer factor = 1;
			if (isPrime(max)) {
				factor = max;
			}
			else {
				factor = findMaxFactor(max);
			}
			num = num / max;
			max = std::min(max - 1, num);
			maxFactor = std::max(factor, maxFactor);
			std::cout << "Max factor:" << maxFactor << std::endl;
		}
		else {
			max--;
		}
	}
	std::cout << "findMaxFactor end num:" << startNum << ", max factor:"<<maxFactor<<std::endl;
	return maxFactor;
}

unsigned_integer Util::findMaxFactorSimple2(unsigned_integer num)
{
	std::cout << "findMaxFactor start num:" << num << std::endl;
	if (isPrime(num)) {
		return 1;
	}
	//double sq = sqrt(num);
	unsigned_integer startNum = num;
	unsigned_integer max = 2;
	unsigned_integer maxFactor = 1;
	while (num>1)
	{
		if ((num % max) == 0) {
			std::cout << "Dicvide:" << max << std::endl;
			unsigned_integer factor = max;
			/*if (isPrime(max)) {
				factor = max;
			}
			else {
				continue;
				//factor = findMaxFactor(max);
			}*/
			num = num / max;
			max = std::min(max, num);
			maxFactor = std::max(factor, maxFactor);
			std::cout << "Temp num:" << num << std::endl;
			std::cout << "Max factor:" << maxFactor << std::endl;
		}
		else {
			max++;
		}
	}
	std::cout << "findMaxFactor end num:" << startNum << ", max factor:" << maxFactor << std::endl;
	return maxFactor;
}



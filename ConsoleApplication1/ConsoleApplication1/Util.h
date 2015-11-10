#pragma once
#define unsigned_integer unsigned long long
#define max_unsigned_integer ULLONG_MAX
#include <vector>
using namespace std;
class Util
{
protected:
	static vector<unsigned_integer> primes;
	static bool primesInitialized;
	static void initializePrimesDynamic();
	static bool isPrimeDynamic(unsigned_integer num);
	static bool isPrimeSimple(unsigned_integer num);
	static unsigned_integer findMaxFactorSimple(unsigned_integer num);
	static unsigned_integer findMaxFactorSimple2(unsigned_integer num);
public:
	const static unsigned_integer int maxPrime = 100000000;
	Util();
	~Util();
	static bool isPrime(unsigned_integer num) {
		return isPrimeDynamic(num);
	}
	static unsigned_integer findMaxFactor(unsigned_integer num) {
		return findMaxFactorSimple2(num);
	}
	static unsigned_integer factorial(unsigned_integer num);
	static unsigned_integer over(unsigned_integer num1, unsigned_integer num2);
};


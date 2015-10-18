#pragma once
#define unsigned_integer signed long long
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
	const static unsigned_integer int maxPrime = 2000000;
	Util();
	~Util();
	static bool isPrime(unsigned_integer num) {
		return isPrimeDynamic(num);
	}
	static unsigned_integer findMaxFactor(unsigned_integer num) {
		return findMaxFactorSimple2(num);
	}
};


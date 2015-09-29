#pragma once
#define unsigned_integer signed long long
class Util
{
protected:
	static bool isPrimeSimple(unsigned_integer num);
	static unsigned_integer findMaxFactorSimple(unsigned_integer num);
	static unsigned_integer findMaxFactorSimple2(unsigned_integer num);
public:
	Util();
	~Util();
	static bool isPrime(unsigned_integer num) {
		return isPrimeSimple(num);
	}
	static unsigned long findMaxFactor(unsigned_integer num) {
		return findMaxFactorSimple2(num);
	}
	
};


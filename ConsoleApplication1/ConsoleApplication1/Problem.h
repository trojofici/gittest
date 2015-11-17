#pragma once
#include "Util.h"
#include "bigint.h"

class Problem
{
public:
	Problem();
	~Problem();
	virtual void init();
	virtual void run()=0;
};

class Problem1 :
	public Problem
{
public:
	Problem1();
	~Problem1();
	void init();
	void run();
};

class Problem2 :
	public Problem
{
public:
	Problem2();
	~Problem2();
	void init();
	void run();
};

class Problem3 :
	public Problem
{
public:
	Problem3();
	~Problem3();
	void init();
	void run();
};

class Problem4 :
	public Problem
{
public:
	Problem4();
	~Problem4();
	void init();
	void run();
	bool isPalindrome(int num);
};

class Problem7 :
	public Problem
{
public:
	Problem7();
	~Problem7();
	void init();
	void run();
};

class Problem8 :
	public Problem
{
public:
	Problem8();
	~Problem8();
	void init();
	void run();
};

class Problem12: public Problem
{
private:
	vector<unsigned_integer> numbers;
public:
	const static unsigned_integer maxNumber = 100000000;
	//const static unsigned_integer maxNumber = 50;
	Problem12();
	~Problem12();
	void init();
	void run();
};

class Problem13 : public Problem
{
	static const int numberOfLines = 100;
	//static const int numberOfLines = 2;
	static const int numberOfDigits = 50;
	int numbers[numberOfLines][numberOfDigits];
public:
	Problem13();
	~Problem13();
	void init();
	void run();
};

class Problem14 : public Problem
{
private:
	bool debug = false;
	int length(unsigned_integer num);
	static const int NOT_CALCULATED = 1;
	static const unsigned_integer maxNumber = 40000000;
	//static const unsigned_integer maxNumber = 2;
	static const unsigned_integer maxStartNumber = 1000000;
	static const unsigned_integer minStartNumber = 1;
	int numbers[maxNumber];
public:
	Problem14();
	~Problem14();
	void init();
	void run();
};


class Problem18 : public Problem
{
protected:
	static const int numberOfLines = 15;
	int numbers[numberOfLines][numberOfLines];
	int sums[numberOfLines][numberOfLines];
public:
	Problem18();
	~Problem18();
	void init();
	void run();
};

class Problem21 : public Problem
//and 23
{
protected:
	//static const int numberOfNumbers =1000000;//21
	//static const int topNumber = 10000;//21
	static const int numberOfNumbers = 28123;//23
	static const int topNumber = numberOfNumbers;//23
	//static const int topNumber = 30;//23
	unsigned_integer numbers[numberOfNumbers];
public:
	Problem21();
	void run();
};


class Problem26 : public Problem
{
protected:
	static const int maxD = 10;
public:
	Problem26();
	~Problem26();
	void run();
};
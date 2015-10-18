#pragma once
class Problem
{
public:
	Problem();
	~Problem();
	virtual void init()=0;
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

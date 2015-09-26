#pragma once
class Problem
{
public:
	Problem();
	~Problem();
	virtual void init() = 0;
	virtual void run() = 0;
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


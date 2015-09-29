#pragma once
class Problem
{
public:
	Problem();
	~Problem();
	virtual void init();
	virtual void run();
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


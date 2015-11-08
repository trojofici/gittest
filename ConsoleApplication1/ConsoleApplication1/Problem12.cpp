#include "stdafx.h"


Problem12::Problem12()
{
	this->numbers = vector<unsigned_integer>(Problem12::maxNumber);
	//memset(&this->numbers, 0, sizeof(this->numbers));
}


Problem12::~Problem12()
{
}


void Problem12::init() {
	std::cout << "initializePrimesDynamic dyn start, maxNumber:" << maxNumber << std::endl;
	for (unsigned_integer i = 1; i < maxNumber; i++)
	{
		numbers.at(i) = 0;
	}
	for (unsigned_integer i = 1; i < maxNumber; i++)
	{
		for (unsigned_integer j = i; j < maxNumber; j += i)
		{
			numbers.at(j)++;
		}
	}
	std::cout << "initializePrimesDynamic initialized, maxNumber:" << maxNumber << std::endl;


}

void Problem12::run() {
	unsigned_integer triangel = 0;
	unsigned_integer maxDivisors = 1;
	for (unsigned_integer i = 1; true; i++) {
		triangel += i;
		if (triangel > maxNumber) break;
		if (this->numbers[triangel]>maxDivisors) {
			std::cout << triangel << ":" << this->numbers[triangel] << std::endl;
			maxDivisors = this->numbers[triangel];
		}
		if (this->numbers[triangel] > 500) {
			break;
		}
		

	}

}


Problem13::Problem13()
{
}


Problem13::~Problem13()
{
}

void Problem13::init()
{
	string line;
	ifstream myfile("data/problem13.txt");
	if (myfile.is_open())
	{
		int j = 0;
		while (getline(myfile, line))
		{
			//cout << line << '\n';
			for (int i = 0; i < numberOfDigits; i++)
			{
				char c = line.at(i);
				numbers[j][i] = (int)(c - '0');
				//cout << numbers[j][i];
			}
			cout << endl << "line "<<j<<" read"<<endl;
			j++;
			if (j == numberOfLines) break;
		}

		myfile.close();
	}

	else cout << "Unable to open file";

}

void Problem13::run()
{
	unsigned_integer sum = 0;
	unsigned_integer mul = 1;
	for (int i = numberOfDigits-1; i >= 0; i--)
	{
		for (int j = 0; j < numberOfLines; j++)
		{
			sum += (unsigned_integer)numbers[j][i]*mul;
		}
		if (mul >= 10000000000) {
			sum /= 10;
		}
		else {
			mul *= 10;
		}
		//cout << "Sum:" << sum << endl;

	}
	cout << "Sum:"<<sum<<endl;



}

int Problem14::length(unsigned_integer num)
{
	if (debug) cout << num << ',';
	bool tooBig = !(num <maxNumber);
	if (tooBig) {
		if (num % 2 == 0) {
			return length(num / 2)+1;
		}
		else {
			return length(3 * num + 1)+1;
		}
	} 

	if (numbers[num] != NOT_CALCULATED) return numbers[num];
	if (num == 1) {
		numbers[num] = 1;
		return 1;
	}
	if (num%2==0) {
		int l0 = length(num / 2);
		numbers[num] = l0 + 1;
	}
	else {
		int l0 = length(3*num +1);
		numbers[num] = l0 + 1;
	}
	return numbers[num];
}

Problem14::Problem14()
{
}


Problem14::~Problem14()
{
}

void Problem14::init()
{
}

void Problem14::run()
{
	for (unsigned_integer i = 0; i < maxNumber; i++)
	{
		numbers[i] = NOT_CALCULATED;
	}
	//numbers[1] = 1;
	unsigned_integer maxStart = NOT_CALCULATED;
	int maxLength = -1;
	for (unsigned_integer i = minStartNumber; i < maxStartNumber; i++)
	{
		//if (i == 23529) debug = true;
		if(debug) cout << endl<< "Calculating:" << i << endl;
		int le = length(i);
		if (debug) cout << endl << "Result:" << le << endl;
		if (le > maxLength) {
			maxLength = le;
			maxStart = i;
			cout << endl << "Replacing max:" << i << ", length:" << le << endl;
		}
	}

}



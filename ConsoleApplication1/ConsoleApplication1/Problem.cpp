#include "stdafx.h"

Problem::Problem()
{
}

Problem::~Problem()
{
}
void Problem::init()
{
}




Problem18::Problem18()
{
}

Problem18::~Problem18()
{
}

void Problem18::init()
{
	string line;
	ifstream myfile("data/problem18.txt");
	if (myfile.is_open())
	{
		int j = 0;
		while (getline(myfile, line))
		{
			//cout << line << '\n';
			for (int i = 0; i <= j; i++)
			{
				char c = line.at(i);
				string number = line.substr(i*3,2);
				int intko = std::stoi(number);
				//std::stringstream ss;
				//ss<< convert(number);
				//numbers[j][i] = (int)(c - '0');
				numbers[j][i] = intko;
				sums[j][i] = intko;
				//cout << numbers[j][i]<<" ";
			}
			//cout << endl << "line " << j << " read" << endl;
			j++;
		}

		myfile.close();
	}

	else cout << "Unable to open file";


}

void Problem18::run()
{
	for (int i = 1; i < numberOfLines; i++)
	{
		for (int j = 0; j <= i; j++) {
			if (j == 0) {
				sums[i][j] = sums[i][j] + sums[i - 1][j];
			}
			else if (j == i) {
				sums[i][j] = sums[i][j] + sums[i - 1][j-1];
			}
			else {
				sums[i][j] = std::max(sums[i][j] + sums[i - 1][j], sums[i][j] + sums[i - 1][j-1]);
			}
			cout << sums[i][j] << " ";
		}
		cout << endl;
	}
}

Problem21::Problem21()
{
}

void Problem21::run()
{
	//memset(numbers, (unsigned_integer)0, numberOfNumbers);
	for (int i = 0; i < numberOfNumbers; i++) {
		numbers[i] = 0;
	}
	for (int i = 1; i < numberOfNumbers; i++)
	{
		for (int j = i*2; j < numberOfNumbers; j+=i)
		{
			numbers[j] += i;
		}
	}
	//21
	/*
	unsigned_integer sum = 0;
	for (int i = 1; i < topNumber; i++)
	{
		//cout << i << ":" << numbers[i] << endl;
		if (i<numbers[i] && numbers[numbers[i]]==i) {
			cout << i << ":" << numbers[i] << endl;
			sum += (i + numbers[i]);
		}
	}
	cout << sum << endl;*/
	//23
	std::vector<unsigned_integer> v;
	bool abundant[topNumber];
	for (int i = 0; i < topNumber; i++)
	{
		if (numbers[i]>i) {
			v.push_back(i);
			//cout << "adding abbundant:"<<i << endl;
			abundant[i] = true;
		}
		else {
			abundant[i] = false;
		}
	}
	unsigned_integer sum = 0;

	for (int i = 0; i < topNumber; i++)
	{
		bool found = false;
		for (int j = 0; j < v.size(); j++)
		{
			if (2 * v.at(j)>i) {
				break;
			}
			int numba = i - v.at(j);
			if(abundant[numba]) {
				//cout << "found:" << i << ":"<< v.at(j) <<":"<< numba << endl;
				found = true;
				break;
			}
		}
		if (!found) {
			cout << "not found:" << i << endl;
			sum += i;
		}

	}

	cout << "sum:" << sum << endl;

}

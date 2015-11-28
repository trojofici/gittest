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
			unsigned_integer numba = i - v.at(j);
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


//Problem26::max9 = Dodecahedron::Bigint("999999999999999999999999999999999");

Problem26::Problem26()
{
}

Problem26::~Problem26()
{
}
void Problem26::run()
{
	int maxPeriodNumber = 0;
	int maxPeriodLength = 0;
	for (int number = 2; number < 1000; number++)
	{
		std::vector<int> remainders;
		int result = (int)pow(10, (int)(log10(number) + 0.5));
		//cout << result << endl;
		//cout << number << ":";
		while (true) {
			int remainder = result % number;
			if (remainder == 0) {
				//not periodic
				break;
			}
			//cout << (result / number);
			result = remainder * 10;
			//int remainderPosition = std::find(remainders.begin(), remainders.end(), remainder);
			if (std::find(remainders.begin(), remainders.end(), remainder) != remainders.end()) {
				int periodLength = (int)remainders.size();
				//cout << "period length:" << periodLength;
				if (periodLength > maxPeriodLength) {
					maxPeriodLength = periodLength;
					maxPeriodNumber = number;
					cout << "Max length:" << maxPeriodLength <<", number:"<< maxPeriodNumber<<endl;
				}
				break;
			}
			remainders.push_back(remainder);
		}
		//cout << endl;
	}

	


	
}

void Problem28::run()
{
	int cycleCount = (gridSize - 1) / 2;
	int center = (gridSize - 1) / 2;
	cout <<"grid size:"<<gridSize << ", center:" << center << ", cycleCount:" << cycleCount << endl;
	int value = 1;
	numbers[center][center] = value++;
	for (size_t cycle = 0; cycle < cycleCount; cycle++)
	{
		numbers[center - cycle][center + cycle + 1] = value++;
		for (size_t j = 0; j < 2* cycle +1; j++)
		{
			numbers[center - cycle + 1 +j][center + cycle + 1] = value++;
		}
		for (size_t j = 0; j < 2 * cycle + 2; j++)
		{
			numbers[center + cycle+1][center + cycle -j] = value++;
		}
		for (size_t j = 0; j < 2 * cycle + 2; j++)
		{
			numbers[center + cycle -j][center - cycle-1] = value++;
		}
		for (size_t j = 0; j < 2 * cycle + 2; j++)
		{
			numbers[center - cycle- 1][center - cycle +j] = value++;
		}
	}


	for (size_t i = 0; i < gridSize; i++)
	{
		for (size_t j = 0; j < gridSize; j++)
		{
			//cout << numbers[i][j]<<"\t\t";
		}
		//cout << endl<<endl;
	}

	int sum = 0;
	for (size_t i = 0; i < gridSize; i++)
	{

		sum += numbers[i][i];
		cout << numbers[i][i] << endl;
		sum += numbers[i][gridSize-i-1];
		cout << numbers[i][gridSize - i - 1]<<endl;
	}
	sum -= numbers[center][center];
	cout << "Sum:"<<sum << endl;


}

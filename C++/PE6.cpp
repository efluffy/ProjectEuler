#include<iostream>

using namespace std;

int main()
{
	int sumSquare = 0;
	int squareSum = 0;
	int out = 0;

	for(int i = 1; i <= 100; i++)
	{
		sumSquare += i*i;
	}
	for(int j = 1; j <= 100; j++)
	{
		squareSum += j;
	}
	squareSum = squareSum*squareSum;
	out = squareSum - sumSquare;
	cout << out << endl;
	system("pause");
	return 0;
}

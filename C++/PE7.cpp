#include<iostream>

using namespace std;

int isPrime(int i)
{
	for(int j = 2; j <= (i - 1); j++)
	{
		if(i % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 1;
	int n = 1;
	while(1)
	{
		i++;
		if(isPrime(i))
		{
			n++;
			if(n == 10002)
			{
				break;
			}
		}
	}
	cout << i << endl;
	system("pause");
	return 0;
}


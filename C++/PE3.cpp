#include<iostream>
#include<vector>
#include<math.h>
#include<time.h>

using namespace std;

int main()
{
	clock_t tStart = clock();
	int handler = 0;
	long long num = 600851475143;
	int max = int(sqrt(double(num)));
	vector<int> factors (1);

	for(int i = 3; i <= max; i+=2)
	{
		if(long long(num) % i == 0)
		{
			for(int j = 2; j < (i - 1); j++)
			{
				if(i % j == 0)
				{
					handler = 1;
					break;
				}
			}
			if(!handler)
			{
				factors.resize(factors.size());
				factors.insert(factors.end(), i);
			}
			handler = 0;
		}
	}

	for(vector<int>::iterator i = factors.begin(); i != factors.end(); i++)
	{
		cout << *i << endl;
	}
	cout<<"Execution Time: " << (double)(clock() - tStart)/CLOCKS_PER_SEC << endl;
	system("pause");
	return 0;
}


#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int x = 1;
	int y = 2;
	int n = 0;
	int sum = 0;
	vector<int> fibb(1);
	fibb[0] = 2;

	do
	{
		if(n < 4000000)
		{
			n = x + y;
			x = y;
			y = n;
			if(n % 2 == 0)
			{
				fibb.resize(fibb.size());
				fibb.insert(fibb.end(), n);
			}
		}
		else
		{
			break;
		}
	}while(1);

	for(int i = 0; i < fibb.size(); i++)
	{
		sum += fibb[i];
	}
	cout << sum << endl;
	system("pause");
}





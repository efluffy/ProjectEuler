#include<iostream>

using namespace std;

int main()
{
	int j = 0;
	int x = 0;
	while(1)
	{
		j++;
		x = 0;
		for(int i = 1; i <= 20; i++)
		{
			if(j % i == 0)
			{
				x++;
			}
		}
		if(x == 20)
		{
			break;
		}

	}
	cout << j << endl;
	system("pause");
	return 0;
}

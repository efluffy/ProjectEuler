#include<iostream>
#include<sstream>
#include<algorithm>

using namespace std;

int main()
{
	int test;
	string f;
	string r;
	int palindrome = 0;
	for(int i = 100; i <=999; i++)
	{
		for(int j = 100; j <=999; j++)
		{
			test = i*j;
			stringstream out;
			out << test;
			f = out.str();
			r = f;
			reverse(r.begin(), r.end());
			if(f.compare(r) == 0)
			{
				if(test > palindrome)
				{
					palindrome = test;
				}
			}
		}
	}
	cout << palindrome << endl;
	system("pause");
	return 0;
}


		

			



#include<iostream>
using namespace std;
int jia[100] = {};
void xuesheng(int diji)
{
	for (int k = 0; k <= (100 - diji) / (diji ); k++)
	{
		jia[diji - 1 + k * (diji )] += 1;
	}
}

	int main()
{
		for (int m = 2; m < 101; m++)
		{
			xuesheng(m);
		}
		for (int n = 0; n < 100; n++)
		{
			if (jia[n] % 2 == 0)
			{
				cout << n+1 << "  ";
			}
		}
	return 0;
}
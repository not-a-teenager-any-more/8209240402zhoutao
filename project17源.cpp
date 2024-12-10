#include<iostream>
using namespace std;
void paixu(int*shuzu, int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int k = 0; k < length - i - 1; k++)

		{
			if (shuzu[k] > shuzu[k + 1])
			{
				int temp = shuzu[k ];
				 shuzu[k] = shuzu[k + 1];
				 shuzu[k + 1] = temp;

			}
		} }
}
int main()
{
	int n;
	cout << "Please enter the length:";
	cin >> n;
	int* sz = new int[n];
	cout << "Please enter the numbers:";
		for (int m = 0; m < n; m++)
		{
			cin >> sz[m];
		}
		paixu(sz, n);
		for(int h=0;h<n;h++)
		{ 
			cout << sz[h] << "\t";
		}

		delete[]sz;


	return 0;
}
#include<iostream>
using namespace std;
bool panduan(int shuzu[],int p)
{
	for (int m = 0; m < p; m++)
	{
		if (shuzu[p] == shuzu[m])
		{
			return true;

		}
		
	}
	return false;
}
int main()
{
	int shuzu[10];
	cout << "Enter ten numbers:  ";
	for (int i = 0; i < 10; i++)
	{
		cin >> shuzu[i];
	}
	for (int k = 0; k < 10; k++)
	{
		if (k == 0)
		{
			cout << shuzu[k] << "  ";
		}
		else
		{
			if (panduan(shuzu, k) == false)
			{
				cout << shuzu[k] << "  ";
			}
		}
	}



	return 0;
}
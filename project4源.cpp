#include<iostream>
using namespace std;
int digui(int i)
{
	if (i == 1)
	{
		return 1;
	}
	else
	{
		return (digui(i - 1) + 1) * 2;
	}
}
int main()
{
	cout << digui(10) << endl;



	return 0;
}
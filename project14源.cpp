#include<iostream>
using namespace std;
int* f()
{
	const int size = 4;
	int*list = new int[size];
	for (int k = 1; k < 5; k++)
	{
		list[k - 1] = k;
	}
	return list;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[] p;
}

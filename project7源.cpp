#include<iostream>
using namespace std;
void swap(double* a, double* b)
{
	double temp = *a;
	*a = *b;
	*b = temp;
}
void shuchu(double adf[],int length)
{
	for (int m = 0; m < length; m++)
	{
		cout << adf[m]<<"  ";
	};
}

int main()
{

	bool changed = true;
	double list[10];
	cout << "please enter the numbers:";
	for (int c = 0; c < 10; c++)
	{
		cin >> list[c];
	}
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (list[j] > list[j + 1])
			{
				swap(&list[j],&list[j+1]);
				changed = true;
			}
	} 
	while (changed);
	cout << endl;
	shuchu(list,sizeof(list)/sizeof(list[0]));




	return 0;
}
#include<iostream>
using namespace std;
void paixu(int list[],int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int k = 0; k < length-1-i; k++)
		{
			if (list[k] > list[k + 1])
			{
				int m = list[k];
				list[k] = list[k + 1];
				list[k + 1] = m;
			}
		}
	}
	
}
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int p = 0; p < size1; p++)
	{
		list3[p] = list1[p];
	}
	for (int h = 0; h < size2; h++)
	{
		list3[size1 + h] = list2[h];
	}
	paixu(list3, size1 + size2);
	
		for (int yu = 0; yu < size1 + size2; yu++)
		{
			cout << list3[yu] << "  ";
		}
	
}

int main()
{
	int size4;
	cout << "Enter list 1:" << endl;
	cin >> size4;
     int list4[80] = {};
	for (int kj = 0; kj < size4; kj++)
	{
		cin >> list4[kj];
	}
	int size5;
	cout << "Enter list2:" << endl;
	cin >> size5;
	int list5[80] = {};
	int list6[80];
	for (int kp = 0; kp < size5; kp++)
	{
		cin >> list5[kp];
	}
	merge(list4, size4, list5, size5, list6);


	return 0;
}
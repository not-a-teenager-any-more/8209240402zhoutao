#include<iostream>
using namespace std;
int zdgys(int a, int b)
{
	while(b!=0)
	{
		int temp1 = a > b ? a : b;
		int temp2 = a <= b ? a : b;
		a = temp1; b = temp2;
		 b= a % b;
		 a = temp2;
	}
	return a;
	
}
int main()
{
	int m , n;
	cout << "�������һ��ֵΪ" << endl;
	cin >> m;
	cout << "������ڶ���ֵΪ��" << endl;
	cin >> n;
	int gys = zdgys(m, n);
	cout << "�������Ϊ��" << gys << endl;
	cout << "��С������Ϊ��" << m * n / gys << endl;
	return 0;
}
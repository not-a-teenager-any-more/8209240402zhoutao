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
	cout << "请输入第一个值为" << endl;
	cin >> m;
	cout << "请输入第二个值为：" << endl;
	cin >> n;
	int gys = zdgys(m, n);
	cout << "最大公因数为：" << gys << endl;
	cout << "最小公倍数为：" << m * n / gys << endl;
	return 0;
}
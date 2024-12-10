#include<iostream>
#include"mytemperarure1.h"
using namespace std;

int main()
{
	double a;
	cout << "请输入摄氏温度" << endl;
	cin >> a;
	cout <<"对应的华氏温度为："<< celsius_to_fah(a) << endl;
	cout << "请输入华氏温度" << endl;
	double b;
	cin >> b;
	cout << "对应的摄氏温度为：" << fahrenheit_to_cels(b) << endl;



	return 0;
}
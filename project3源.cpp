#include<iostream>
#include"mytemperarure1.h"
using namespace std;

int main()
{
	double a;
	cout << "�����������¶�" << endl;
	cin >> a;
	cout <<"��Ӧ�Ļ����¶�Ϊ��"<< celsius_to_fah(a) << endl;
	cout << "�����뻪���¶�" << endl;
	double b;
	cin >> b;
	cout << "��Ӧ�������¶�Ϊ��" << fahrenheit_to_cels(b) << endl;



	return 0;
}
#include<iostream>
#include<string>
using namespace std;
void parseHex(const string* const hexString)
{
	cout <<stoi(*hexString,0,16) << endl;

}
int main()
{
	string adf[10];
	cout << "Enter the char:";
	getline(cin, adf[0]);
	parseHex(adf);

	return 0;
}
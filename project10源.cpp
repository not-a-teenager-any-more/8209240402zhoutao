#include<iostream>
#include<string>
using namespace std;
int indexof(const string s1, const string s2)
{
	int len1 = s1.length();
	int len2 = s2.length();
	for (int i = 0; i <= len2 - len1; i++)
	{
		int k;
		for (k = 0; k < len1; k++)
		{
			if (s2[i + k] != s1[k])
			{
				break;
			}
			
		}
		if (k == len1)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	string s1;
	cout << "Enter the first string:";
	getline(cin, s1);
	string s2;
	cout << "Enter the second string:";
	getline(cin, s2);
	int zhi = indexof(s1, s2);
	if (zhi == -1)
	{
		cout << "indexof(" << s1 << "," << s2 << ") is" << "\t" << zhi;
		}
	else
	{
		cout<< "indexof(" << s1 << "," << s2 << ") is" << "\t" << zhi;
	}
	return 0;
}
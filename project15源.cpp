#include<iostream>
#include<cstring>
using namespace std;
int indexof(const char* s1,const char* s2)
{
	int len1 = strlen(s1), len2 = strlen(s2);
//len1<len2
	for (int i = 0; i <= len2 - len1; i++)
	{
		int k;
		for (k = 0; k < len1; k++)
		{
			if (s1[k] != s2[i + k])
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
	char s3[100];
	cout << "Please enter the first char:";
	cin.getline(s3,100);
	char s4[100];
	cout << "Please enter the second char:";
	cin.getline(s4,100);
	cout << indexof(s3, s4) << endl;


	system("pause");
	return 0;
}
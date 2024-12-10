#include<iostream>
#include<string>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (isalpha(s[i]))
		{
			char lowerChar = tolower(s[i]);
			counts[lowerChar - 'a']++;
		}
	}
}
int main()
{
	char str[100];
	cout << "Please enter:";
	cin.getline(str, 100);
	int counts[26] = { 0 };
	count(str, counts);
	cout << "times:" << endl;
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			cout << static_cast<char>('a' + i) << ":" << counts[i] <<"times"<< endl;
		}
	}



	return 0;
}
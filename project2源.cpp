#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if(num<2)
	{
		return false;
	}
	else
	{
		for (int i = 2; i * i <= num; i++)
		{
			if (num % i == 0)
			{
				return false;
			}
			
		}
		return true;
	}

}
int main()
{
	int ik=0;
	for (int a = 2; ik<200; a++)
	{
		if (is_prime(a) ==true)
		{
			cout << a << '\t';
			ik++;
			if (ik % 10 == 0 && ik != 0)
			{
				cout << endl;
			}
		}
	
	}





	return 0;
}
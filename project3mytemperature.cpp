#include<iostream>
using namespace std;

double celsius_to_fah(double cel)
{
	return 1.8 * cel + 32;
}
double fahrenheit_to_cels(double fah)
{
	return (fah - 32) / 1.8;
}
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int day=0, sum=2;
	double price;
	for (int i=1; pow(2,i+1)-2 < 100;i++)
	{
		sum = pow(2, i + 1) - 2;
		++day;
	}
	price = ((0.8 * sum) / day);
	cout << price;
}
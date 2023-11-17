#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a, b;
	cout << "»ªÊÏ¶È";
	cin >> a;
	b = (a - 32) / 1.8;
	cout << fixed << setprecision(2) << b;
}
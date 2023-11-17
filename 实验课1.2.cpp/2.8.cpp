#include<iostream>
#include<cmath>
using namespace std;
void fac(double a, double* c)
{
	double t;
	c[0] = a;
	if (a < 0)
	{
		cout << "wrong";
	}
	else
	{
		for (int i = 0; fabs(c[i + 1] - c[i] )> 1e-10; ++i)
		{
			c[i + 1] = (c[i] + a / c[i]) / 2;
			t = c[i + 1];
		}
		cout << t;
	}
}
int main()
{
	double a, c[50];
	cin >> a;
	fac(a, c);
	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;//a,b,c为三角形三边
	cin >> a >> b >> c;
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		int sum;
		sum = a + b + c;
		cout << sum;
		if (a == b || b == c || a == c)
		{
			cout << "等腰三角形";
		}
	}
	else
	{
		cout << "wrong";
	}
	return 0;
}
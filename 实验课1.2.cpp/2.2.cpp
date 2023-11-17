#include<iostream>
using namespace std;
int main()
{
	double x, y;//x为输入的值，y为运算结果
	cin >> x;
	if (0 >= x || x >= 10)
	{
		cout << "x wrong";
	}
	else
	{
		if (x - 1 >= 0)
		{
			if (x - 5 >= 0)
			{
				y = x * x;
				cout << y;
			}
			else
			{
				y = 2 / (4 * x) + 1;
				cout << y;
			}
		}
		else
		{
			y = 3 - 2 * x;
			cout << y;
		}
	}
}
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;//a,b,cΪ����������
	cin >> a >> b >> c;
	if ((a + b > c) && (a + c > b) && (b + c > a))
	{
		int sum;
		sum = a + b + c;
		cout << sum;
		if (a == b || b == c || a == c)
		{
			cout << "����������";
		}
	}
	else
	{
		cout << "wrong";
	}
	return 0;
}
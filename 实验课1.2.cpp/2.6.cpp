#include<iostream>
using namespace std;
int main()
{
	int a, b,max,min;
	cin >> a >> b;
	min = (a > b ? a : b);
	for (int i = (a < b? a:b); ; --i)//三目运算符省时省力
	{
		max = i;
		if (a % max == 0 && b % max == 0)
		{
			cout << "最大公约数"<<max<<endl;
			break;
		}
	}
	while (1)
	{
		if ((min % a) == 0 && (min % b) == 0)
		{
			cout << "最小公倍数" << min;
			break;
		}
		++min;
	}
	return 0;
}
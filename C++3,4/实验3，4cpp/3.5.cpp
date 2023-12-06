#include<iostream>
using namespace std;
void fac(int day,int m)
{
	if (day == 10) { cout << m; }
	else { m = 2 * (m + 1); fac(++day, m); }
}
int main()
{
	int  day=1,m;
	cout << "ÇëÊäÈëÊ£Óà¹ûÊµ£º";
	cin >> m;
	fac(day, m);
}
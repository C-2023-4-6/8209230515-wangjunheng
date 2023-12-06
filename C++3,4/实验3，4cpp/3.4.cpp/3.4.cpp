#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a,b,c)) { cout << area(a, b, c); }
	else { cout << "三角形不合法"; }
}
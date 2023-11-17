#include<iostream>
#include<cmath>
#define pai 3.14 
using namespace std;
int main()
{
	double r, h,V;
	cout << "Բ׶�İ뾶:";
	cin >> r;
	cout << "Բ׶�ĸ�:";
	cin >> h;
	V = (pai * pow(r, 2) * h) / 3;
	cout << V;
}
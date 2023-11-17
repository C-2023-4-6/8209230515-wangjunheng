#include<iostream>
using namespace std;
int main()
{
	char c;
	cin >> c;
	if (c - 97 >= 0)
	{
		cout << (char)(c - 32);
	}
	else
	{
		cout << c + 1;
	}
	return 0;
}
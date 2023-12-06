#include<iostream>
using namespace std;
int main()
{
	bool a[101];
	for (int i = 0; i < 101; ++i) { a[i] = 0; }
	for (int i = 1; i < 101; ++i)
	{
		for (int j = 1; j < 101; ++j)
		{
			if (j % i == 0) { a[j] = !a[j]; }
		}
	}
	for (int i = 1; i < 101; ++i)
	{
		if (a[i] == 1) { cout << i << ' '; }
	}
}
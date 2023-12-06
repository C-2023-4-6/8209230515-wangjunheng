#include<iostream>
using namespace std;
int indexOf(const char *s1, const char *s2, int x, int y)
{
	int t = 0, m;
	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < y; ++j)
		{
			if (s1[i] == s2[j]) { ++t; if (t == 1) { m = i; } }
			else { continue; }
		}
	}
	if (t == x + 1) { return m; }
	else { return -1; }
}
int main()
{
	int m, n;
	cout << "s1的长度：";
	cin >> m;
	cout << "s2的长度：";
	cin >> n;
	char* s1 = new char[m];
	char* s2 = new char[n];
	cout << "请输入s1：";
	for (int i = 0; i < m; ++i)
	{
		cin >> s1[i];
	}
	cout << "请输入s2：";
	for (int i = 0; i < n; ++i)
	{
		cin >> s2[i];
	}
	cout << indexOf(s1, s2, m, n);
	delete[]s1;
	delete[]s2;
}
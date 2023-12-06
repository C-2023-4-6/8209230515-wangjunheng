#include<iostream>
#include<cstring>
using namespace std;
void count(const char s[], int counts[],int n)
{
	int* a = new int[n];
	int b[26],t=0;
	for (int i = 0; i < 26; ++i)
	{
		b[i] = t;
		++t;
	}
	for (int i = 0; i < n; ++i)
	{
		a[i] = (int)s[i];
		if (a[i] >= 90) { a[i] -= 32; }
		a[i] -= 65;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 26; ++j)
		{
			if (a[i] == b[j]) { ++counts[j]; }
		}
	}
	for (int i = 0; i < 26; ++i)
	{
		if (counts[i] > 0) { cout << (char)(b[i]+97)<<':' << counts[i] <<' ' << "times" << endl; }
	}
}
int main()
{
	int n,counts[26];
	cout << "请输入s1的长度：";
	cin >> n;
	char* s = new char[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> s[i];
	}
	for (int i = 0; i < 26; ++i)
	{
		counts[i] = 0;
	}
	count(s, counts,n);
	delete[]s;
}
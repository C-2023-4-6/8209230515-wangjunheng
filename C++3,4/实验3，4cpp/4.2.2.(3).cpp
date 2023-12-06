#include<iostream>
using namespace std;
void fac(int* a,int m)
{
	for (int i = 0; i < m-1; ++i)
	{
		for (int j = i + 1; j < m; ++j)
		{
			if (a[i] > a[j])
			{
				int t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	for (int i = 0; i < m; ++i) { cout << a[i] << ' '; }
}
int main()
{
	int m;
	cout << "请输入数组长度：";
	cin >> m;
	int* a = new int[m];
	for (int i = 0; i < m; ++i) { cin >> a[i]; }
	fac(a,m);
	delete[]a;
}
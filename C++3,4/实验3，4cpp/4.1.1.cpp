#include<iostream>
using namespace std;
int main()
{
	int a[10],b[10];
	cout << "ÇëÊäÈë10¸öÊý×Ö£º";
	for (int i = 0; i < 10; ++i) { cin >> a[i]; }
	memcpy(b, a, 40);
	for (int i = 0; i < 10; ++i)
	{
		for (int j = i+1; j < 10; ++j)
		{
			if (b[i] == a[j])
			{
				b[i] = 0;
			}
		}
	}
	for (int i = 0; i < 10; ++i)
	{
		if (b[i] != 0) { cout << b[i] << ' '; }
	}
}
#include<iostream>
using namespace std;
void merge(const int list1[], const int list2[], int m, int n)
{
	int t = m + n, j = m;
	int* list3 = new int[t];
	for (int i = 0; i < m; ++i) { list3[i] = list1[i]; }
	for (int i = 0; i < n; ++i) { list3[i + j] = list2[i]; }
	for (int i = 0; i < t - 1; ++i)
	{
		for (int k = i + 1; k < t; ++k)
		{
			if (list3[i] > list3[k])
			{
				int x=list3[k];
				list3[k] = list3[i];
				list3[i] = x;
			}
		}
	}
	for (int i = 0; i < t; ++i) { cout << list3[i] << " "; }
	delete[]list3;
}
int main()
{
	int n, m;
	cout << "请输入两个数组的长度：";
	cin >> m >> n;
	int* list1 = new int[m];
	int* list2 = new int[n];
	for (int i = 0; i < m; ++i) { cin >> list1[i]; }
	for (int i = 0; i < n; ++i) { cin >> list2[i]; }
	merge(list1, list2, m, n);
	delete[]list1;
	delete[]list2;
}
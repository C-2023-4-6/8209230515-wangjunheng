#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	for (int i = 1; i < 6; ++i)
	{
		for (int j = 1; j < i + 1; ++j)
		{
			cout << '*';
		}
		cout << endl;
	}
}
/*int main()
{
	int a[5];
	for (int i = 0; i < 5; ++i)
	{
		cin >> a[i];
		if (a[i] < 0)
		{
			break;
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		
	}
	for (int i = 0; i < 4; ++i)
	{
		cout << a[i] << '\t';
	}
}
	/*char a[4][4];
	for (char i=0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			static char t = '\144';
			a[i][j] = t;
			++t;
		}
	}
	for (char i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << sizeof(a);*/
	/* int a[9][9];
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			 static int t=1;
			a[i][j] = t;
			++t;
		}
	}
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 9; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
 int a[50][50];
int main()
{
	int n, m, x, y, i, j;//n,m为行，列数，x，y为马的坐标
	cin >> n >> m >> x >> y;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)a[i][j] = 1;
	}
	a[x][y] = 0;
	if (x - 1 >= 0 && y - 2 >= 0)a[x - 1][y - 2] = 0;
	if (x - 2 >= 0 && y - 1 >= 0)a[x - 2][y - 1] = 0;
	if (x - 2 >= 0 && y + 1 <= m)a[x - 2][y + 1] = 0;
	if (x - 1 >= 0 && y + 2 <= m)a[x - 1][y + 2] = 0;
	if (x + 1 <= n && y + 2 <= m)a[x + 1][y + 2] = 0;
	if (x + 2 <= n && y + 1 <= m)a[x + 2][y + 1] = 0;
	if (x + 2 <= n && y - 1 >= 0)a[x + 2][y - 1] = 0;
	if (x + 1 <= n && y - 2 >= 0)a[x + 1][y - 2] = 0;//将马的控制点设为0
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if (i == 0 && i == j)continue;
			if (a[i][j] == 0)continue;
			if (i == 0)
				a[i][j] = a[i][j - 1];
			if (j == 0)a[i][j] = a[i - 1][j];
			if (i != 0 && j != 0 && a[i][j] != 0)
				a[i][j] = a[i - 1][j] + a[i][j - 1];
		}
	}
	cout << a[n][m] << endl;
	return 0;
}*/
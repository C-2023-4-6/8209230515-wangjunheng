#include<iostream>
using namespace std;
int main()
{
	int num[4] = { 0,0,0,0 };//0为空,1为数,2为字母,3为其他
	char c[11];
	cin.getline(c, 11);
	for (int i = 0; i < 10; ++i)
	{
		cout << c[i] << " ";//检查字符串输出结果是否和输入一致
	}
	for (int i = 0; i < 10; ++i)
	{
		if (c[i] == ' ')
		{
			++num[0];
			continue;
		}
		else
		{
			if ((int)c[i] >= 48 && (int)c[i] <= 57)
			{
				++num[1];
				continue;
			}
			else
			{
				if ((int)c[i] >= 97 && (int)c[i] <= 122)
				{
					++num[2];
					continue;
				}
				else
				{
					if ((int)c[i] >= 65 && (int)c[i] <= 90)
					{
						++num[2];
						continue;
					}
					else
					{
						++num[3];
						continue;
					}
				}
			}
		}
	}
	cout << "空格数"<<num[0]<<endl;
	cout << "数字"<<num[1]<<endl;
	cout << "字母"<<num[2]<<endl;
	cout << "其他"<<num[3]<<endl;
	return 0;
}
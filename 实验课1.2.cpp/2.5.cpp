#include<iostream>
using namespace std;
int main()
{
	int num[4] = { 0,0,0,0 };//0Ϊ��,1Ϊ��,2Ϊ��ĸ,3Ϊ����
	char c[11];
	cin.getline(c, 11);
	for (int i = 0; i < 10; ++i)
	{
		cout << c[i] << " ";//����ַ����������Ƿ������һ��
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
	cout << "�ո���"<<num[0]<<endl;
	cout << "����"<<num[1]<<endl;
	cout << "��ĸ"<<num[2]<<endl;
	cout << "����"<<num[3]<<endl;
	return 0;
}
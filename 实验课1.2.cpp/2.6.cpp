#include<iostream>
using namespace std;
int main()
{
	int a, b,max,min;
	cin >> a >> b;
	min = (a > b ? a : b);
	for (int i = (a < b? a:b); ; --i)//��Ŀ�����ʡʱʡ��
	{
		max = i;
		if (a % max == 0 && b % max == 0)
		{
			cout << "���Լ��"<<max<<endl;
			break;
		}
	}
	while (1)
	{
		if ((min % a) == 0 && (min % b) == 0)
		{
			cout << "��С������" << min;
			break;
		}
		++min;
	}
	return 0;
}
#include<iostream>
using namespace std;
class Time             // ����Time��
{   int hour;
	int minute;
	int sec;
public:
	void settime()
	{
		cin >> hour >> minute >> sec;
	}
	void showtime()
	{
		cout << hour << ":" << minute << ":" << sec;
	}
};
int main()
{
	Time t1;           //����t1ΪTime�����
	t1.settime();
	t1.showtime();
}
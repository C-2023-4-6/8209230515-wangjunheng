#include<iostream>
using namespace std;
class Time             // 定义Time类
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
	Time t1;           //定义t1为Time类对象
	t1.settime();
	t1.showtime();
}
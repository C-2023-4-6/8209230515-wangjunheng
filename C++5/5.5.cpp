#include<iostream>
using namespace std;
class point
{
	int x, y;
public:
	point() { x = 60, y = 80; }
	void setpoint(int i, int j) { x += i, y += j; }
	void display() { cout << '(' << x << ',' << y << ')'; }
};
int main()
{
	point a;
	a.setpoint(10, 20);
	a.display();
}
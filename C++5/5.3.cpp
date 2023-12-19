#include<iostream>
using namespace std;
class chang
{
public:
	int length, width, height;
	void shuru()
	{
		cin >> length >> width >> height;
	}
	void product()
	{
		cout << length * width * height;
	}
};
int main()
{
	chang a;
	a.shuru();
	a.product();
}
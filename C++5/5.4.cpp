#include<iostream>
using namespace std;
class student
{
public:
	int No, grade;
	void show() { cout << No << '\t' << grade; }
	void set(int a, int b) { No = a, grade = b; }
	student() { No = 0, grade = 0; }
	student(student& p)
	{
		No = p.No;
		grade = p.grade;
	}
};
void max(student* s)
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = i+1; j < 5; ++j)
		{
			if (s[i].grade < s[j].grade)
			{
				student t=s[j];
				s[j] = s[i];
				s[i] = t;
			}
		}
	}
	s[0].show();
}
int main()
{
	student* s = new student[5];
	s[0].set(1, 45);
	s[1].set(2, 66);
	s[2].set(3, 38);
	s[3].set(4, 22);
	s[4].set(5, 88);
	max(s);
	delete[]s;
}
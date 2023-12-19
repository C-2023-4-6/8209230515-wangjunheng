#include <iostream> 
using namespace std;
class Student             
{
public:                  
	void display();
	Student(const char *a,const char *b, const char c)
	{
		num = a;
		name = b;
		sex = c;
	}
private:
	const char *num;
	const char *name;
	char sex;
};
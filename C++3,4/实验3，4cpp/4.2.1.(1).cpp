#include<iostream>
using namespace std;
void main()
{
	int i, j, * pi, * pj;//�˴���*��ʾ����ָ����������Ǽ�������       
	pi = &i;
	pj = &j;
	i = 5;
	j = 7;
	cout << i << endl << j << endl << pi << endl << pj<<endl;
	cout << &i << endl << *&i << endl << &j << endl << *&j;
}
#include<iostream>
using namespace std;
int main()
{
	double  a,b,c;//a,b是两个参数，c为结果
	char m;//m为运算符
	cin >> a >> m >> b;
	switch ((int)m)
	{
	     case 43:
		 {
			 c = a + b;
			 cout << c;
			 break;
		 }
		 case 45:
		 {
			 c = a - b;
			 cout << c;
			 break;
		 }
		 case 42:
		 {
			 c = a * b;
			 cout << c;
			 break;
		 }
		 case 47:
		 {
			 if (b == 0)
			 {
				 cout << "wrong";
				 break;
			 }
			 else
			 {
				 c = a / b;
				 cout << c;
				 break;
			 }
		 }
		 case 37:
		 {
			 if ((int)a!=a||(int)b!=b)//对a，b进行类型的强制转换
			 {
				 cout << "wrong";
				 break;
			 }
			 else
			 {
				 
				 c = (int)a % (int)b;//对a，b进行类型的强制转换
				 cout << c;
				 break;
			 }
		 }
		 default:
		 {
			 cout << "未知运算符";
			 break;
		 }
	}
}
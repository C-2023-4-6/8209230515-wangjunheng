#include<iostream>
using namespace std;
int main()
{
	double  a,b,c;//a,b������������cΪ���
	char m;//mΪ�����
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
			 if ((int)a!=a||(int)b!=b)//��a��b�������͵�ǿ��ת��
			 {
				 cout << "wrong";
				 break;
			 }
			 else
			 {
				 
				 c = (int)a % (int)b;//��a��b�������͵�ǿ��ת��
				 cout << c;
				 break;
			 }
		 }
		 default:
		 {
			 cout << "δ֪�����";
			 break;
		 }
	}
}
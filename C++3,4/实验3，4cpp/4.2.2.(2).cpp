#include<iostream>
#include<cmath>
using namespace std;
int fac(char* a,int n)
{
    int t=0;
    int* b = new int[n];
    for (int i = 0; i < n; ++i)
    {
        b[i] = (int)a[i];
        if (b[i] >= 48 && b[i] <= 57){ b[i] -= 48;}
        else { b[i] -= 55; }
    }
    for (int i = 0; i < n; ++i)
    {
        t += b[i] * pow(16, n - i-1);
    }
    return t;
}
int main()
{
    
    int n;//nΪ�����16�������ֳ���
    cout << "�����16�������ֳ���:";
    cin >> n;
    char* a = new char[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    cout << fac(a,n);
    delete[]a;
}
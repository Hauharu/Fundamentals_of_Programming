/*
Viết chương trình tìm số lớn nhất của 2 số nguyên a và b.
*/
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << " Nhap a: "; cin >> a;
	cout << " Nhap b: "; cin >> b;
	if (a >= b)
		cout << " So lon nhat la: " << a << endl;
	else
		cout << " So lon nhat la: " << b << endl;
	return 0;
}
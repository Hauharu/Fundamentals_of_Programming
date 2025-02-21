/*
Viết chương trình nhận vào 1 số nguyên. Xuất ra màn hình số nguyên đó là số
chẵn hay số lẻ.
*/
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "Nhap 1 so nguyen: "; cin >> a;
	if (a % 2 == 0)
		cout << a << " La so chan " << endl;
	else
		cout << a << " La so le " << endl;
	return 0;
}
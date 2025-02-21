/*
Viết chương trình nhận vào 1 số nguyên. Xuất ra màn hình số nguyên đó là số
âm? Số dương hay số 0 ?
*/
#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << " Nhap 1 so nguyen: ";
	cin >> a;
	if (a > 0)
		cout << a << " la so duong " << endl;
	else if (a < 0)
		cout << a << " la so am " << endl;
	else
		cout << a << " la so 0 " << endl;
	return 0;
}
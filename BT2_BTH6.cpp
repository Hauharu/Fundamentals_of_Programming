/*
Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết:
a. Hàm tìm số lớn nhất giữa 2 số nguyên.
b. Hàm tìm số lớn nhất giữa 3 số nguyên.
*/
#include<iostream>
using namespace std;
int soLN2(int a, int b)
{
	int max;
	if (a >= b)
		return max = a;
	else
		return max = b;
}
int soLN3(int a, int b, int c)
{
	int max;
	if (a >= b && a >= c)
		return max = a;
	if (b >= a && b >= c)
		return max = b;
	if (c >= a && c >= b)
		return max = c;
}
int main()
{
	int a, b, c;
	cout << " Nhap so nguyen thu 1: ";
	cin >> a;
	cout << " Nhap so nguyen thu 2: ";
	cin >> b;
	cout << " So lon nhat giua 2 so nguyen: " << soLN2(a, b) << endl;
	cout << " Nhap so nguyen thu 1: ";
	cin >> a;
	cout << " Nhap so nguyen thu 2: ";
	cin >> b;
	cout << " Nhap so nguyen thu 3: ";
	cin >> c;
	cout << " So lon nhat giua 3 so nguyen: " << soLN3(a, b, c) << endl;
	return 0;
}
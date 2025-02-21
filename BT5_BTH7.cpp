/*
Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết:
a. Hàm hoán đổi giá trị 2 số nguyên.
b. Hàm sắp xếp 2 số nguyên tăng dần (sử dụng lại hàm hoán đổi ở câu a)
*/
#include <iostream>
using namespace std;
void hoanDoi(int &a, int &b)
{
	int tam;
	tam = a;
	a = b;
	b = tam;
}
void sxTang(int &a, int &b)
{
	if (a > b)
		hoanDoi(a, b);
}
int main()
{
	int a, b;
	cout << "Nhap so nguyen thu 1: ";
	cin >> a;
	cout << "Nhap so nguyen thu 2: ";
	cin >> b;
	cout << "Hai so sau khi hoan doi: ";
	hoanDoi(a, b);
	cout << a << " " << b << endl;
	cout << "Sap xep tang: ";
	sxTang(a, b);
	cout << a << " " << b << endl;
	return 0;
}
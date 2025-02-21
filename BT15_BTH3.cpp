/*
Viết chương trình nhận vào số đo 3 cạnh của 1 tam giác. Kiểm tra xem 3 cạnh đó
có hợp lệ hay không? Nếu hợp lệ thì tam giác đó là loại tam giác gì (đều, vuông,
cân, vuông cân hay thường) ?
*/
#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "Nhap gia tri ba canh: ";
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a || a <= 0 || b <= 0 || c <= 0)
		cout << "So do 3 canh khong hop le\n";
	else if
		(a == b && b == c)
		cout << "Tam giac do là tam giac deu \n";
	else if
		(a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
		cout << "Tam giac do là tam giac vuong \n";
	else if
		(a == b && b != c || a == c && c != b || b == c && b != a)
		cout << "Tam giac do la tam giac can \n";
	else if
		(c * c == a * a + b * b * b && a == b || b * b == c * c + a * a && a == c || a * a == b * b + c * c && b == c)
		cout << " Tam giac do la tam giac vuong can\n";
	else
		cout << "Tam giac do la tam giac thuong \n";
	return 0;
}
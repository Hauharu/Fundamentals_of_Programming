/*
Viết chương trình yêu cầu nhập vào ba cạnh a,b,c của tam giác, tính và in ra diện tích tam giác.
Diện tích tam giác tính theo công thức Heron =
√(p-a)(p-b)(p-c) , với a,b,c là chiều dài ba cạnh, p=(a+b+c)/2.
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double a, b, c, p, dienTich;
	cout << "Nhap canh a: ";
	cin >> a;
	cout << "Nhap canh b: ";
	cin >> b;
	cout << "Nhap canh c: ";
	cin >> c;
	p = (a + b + c) / 2;
	dienTich = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Dien tich tam giac: " << fixed << setprecision(2) << dienTich << endl;
	return 0;
}
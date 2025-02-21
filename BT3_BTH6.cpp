/*
Viết hàm tính x^y(x là số thực, y là số nguyên) và chương trình kiểm tra hàm.
*/
#include<iostream>
using namespace std;
double tinh_LT(double x, int y)
{
	double luyThua;
	luyThua = pow(x, y);
	return luyThua;
}
int main()
{
	double x;
	int y;
	cout << "Nhap co so: ";
	cin >> x;
	cout << "Nhap so mu: ";
	cin >> y;
	cout << "Ket qua = " << tinh_LT(x, y) << endl;
	return 0;
}
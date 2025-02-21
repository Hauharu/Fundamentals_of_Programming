/*
Viết chương trình yêu cầu nhập vào bán kính r, tính và in ra diện tích (π*r^2) và 
chu vi của hình tròn (2πr). Định nghĩa hằng số PI để lưu giá trị π 3.141593.
*/
#include <iostream>
#define PI 3.14
using namespace std;
int main()
{
	double banKinh, dienTich,chuVi;
	cout << "Nhap ban kinh: ";
	cin >> banKinh;
	dienTich = PI * banKinh * banKinh;
	cout << "Dien tich hinh tron: " << dienTich << endl;
	chuVi = 2 * PI * banKinh;
	cout << "Chu vi hinh tron: " << chuVi << endl;
	return 0;
}
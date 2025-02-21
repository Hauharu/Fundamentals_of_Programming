/*
Viết chương trình yêu cầu nhập tên, số ngày làm việc và tiền công 1 ngày, sau đó in
ra tên và tiền lương nhận được (tiền lương = số ngày làm việc × tiền công 1 ngày).
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name;
	int soNgay;
	double tien1Ngay,tienLuong;
	cout << "Nhap ho va ten: ";
	getline(cin, name);
	cout << "So ngay lam viec: ";
	cin >> soNgay;
	cout << "Tien cong 1 ngay: ";
	cin >> tien1Ngay;
	tienLuong = soNgay * tien1Ngay;
	cout << name << "\n" << "Tien luong: " << tienLuong << endl;
	return 0;
}
/*
Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết:
a. Hàm tính diện tích hình chữ nhật.
b. Hàm tính chu vi hình chữ nhật
*/
#include<iostream>
using namespace std;
double tinh_DT(double chieuDai, double chieuRong)
{
	double dienTich;
	dienTich = chieuDai * chieuRong;
	return dienTich;
}
double tinh_CV(double chieuDai, double chieuRong)
{
	double  chuVi;
	chuVi = (chieuDai + chieuRong) * 2;
	return chuVi;
}
int main()
{
	double chieuDai, chieuRong;
	cout << " Nhap chieu dai va chieu rong: ";
	cin >> chieuDai >> chieuRong;
	cout << "Dien tich hinh chu nhat la: " << tinh_DT(chieuDai, chieuRong) << endl;
	cout << "Chu vi hinh chu nhat la: " << tinh_CV(chieuDai, chieuRong) << endl;
	return 0;
}
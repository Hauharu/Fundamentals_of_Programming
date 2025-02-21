/*
Viết chương trình nhập vào một chuỗi ký tự và in ra chiều dài của chuỗi.
Hướng dẫn: Sử dụng biến s có kiểu string, dùng getline(cin, s) để nhập chuỗi (kể cả
khoảng trắng) và s.length() để tính chiều dài chuỗi.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string chuoi;
	cout << " Nhap vao chuoi ki tu: ";
	getline(cin, chuoi);
	cout << " Chieu dai chuoi vua nhap la: " << chuoi.length() << endl;
	cout << " Chieu dai chuoi vua nhap la: " << chuoi.size() << endl;
	return 0;
}
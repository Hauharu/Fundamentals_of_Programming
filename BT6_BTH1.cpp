/*
Tạo file BTH01_Bai06.cpp. Viết chương trình in ra màn hình dòng chữ Xin chao,
ten toi la Hoa!", sau đó xuống hàng và in ra câu hỏi Ten ban la gi?. Người sử
dụng sẽ nhập vào tên và chương trình in ra dòng chữ "Chao ban, ???!". Thay thế
??? bằng tên do người dùng nhập.
Hướng dẫn:
r Gõ thêm các dòng lệnh sau để nhập tên người dùng:
string username;
cin >> username;
r Chương trình lưu dữ liệu là chuỗi ký tự, vì vậy thêm trước hàm main:
#include <string>
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	cout << "Xin chao, ten toi la Hoa!\n";
	cout << "Ten ban la gi?\n";
	cout << "Ten cua toi la: ";
	getline(cin, str);
	cout << "Chao ban, " << str << endl;
	return 0;
}
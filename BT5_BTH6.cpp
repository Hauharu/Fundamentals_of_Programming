/*
Viết hàm nhận vào số đo cạnh, xuất ra hình vuông gồm các dấu * và chương trình để
kiểm tra hàm.
*/
#include<iostream>
using namespace std;
void hinhVuong(int a, char kytu)
{
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
			cout << kytu;
		cout << endl;
	}
}
int main()
{
	int a;
	char kytu;
	cout << " Nhap vao mot so: ";
	cin >> a;
	cout << " Nhap mot ky tu: ";
	cin >> kytu;
	hinhVuong(a, kytu);
}
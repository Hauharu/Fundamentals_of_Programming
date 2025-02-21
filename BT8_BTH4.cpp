/*
Viết chương trình nhận vào 1 số nguyên n > 0. Tính và xuất tổng các chữ số lẻ
của n.
*/
#include <iostream>
using namespace std;
int main()
{
	int n, chuSo, tong = 0, temp;
	do
	{
		cout << "Nhap 1 so nguyen: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai, nhap lai\n";
	} while (n <= 0);
	temp = n;
	while (temp != 0)
	{
		chuSo = temp % 10;
		if (chuSo % 2 != 0)
			tong += chuSo;
		temp = temp / 10;
	}
	cout << "Tong cac chu so le cua " << n << ": " << tong << endl;
	return 0;
}
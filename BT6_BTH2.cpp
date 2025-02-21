/*
Viết chương trình yêu cầu nhập vào một số nguyên dương gồm 3 chữ số, sau đó in
ra tổng của 3 chữ số và số đảo ngược. Ví dụ:
Nhap 1 so co 3 chu so: 123
Tong 3 chu so la: 6
So dao nguoc la: 321
Hướng dẫn: Dùng toán tử / và % để tách từng chữ số.
*/
#include <iostream>
using namespace std;
int main()
{
	int n, tong = 0, chuSo, temp, daoNguoc=0;
	cout << "Nhap 1 so co 3 chu so: ";
	cin >> n;
	temp = n;
	while (temp>0)
	{
		chuSo = temp % 10;
		tong += chuSo;
		daoNguoc = daoNguoc * 10 + chuSo;
		temp = temp / 10;
	}
	cout << "Tong 3 chu so la: " << tong << endl;
	cout << "So dao nguoc la: " << daoNguoc << endl;
	return 0;
}
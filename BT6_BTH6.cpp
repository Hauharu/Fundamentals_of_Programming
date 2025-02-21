/*
Viết hàm tính số đảo ngược của một số nguyên dương n. Viết chương trình kiểm tra
hàm đã viết.
*/
#include <iostream>
using namespace std;
int daoNguoc(int n)
{
	int temp = n;
	int chuSo, dao = 0;
	while (temp > 0)
	{
		chuSo = temp % 10;
		dao = dao * 10 + chuSo;
		temp = temp / 10;
	}
	return dao;
}
int main()
{
	int n;
	do
	{
		cout << "Nhap so nguyen duong: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai, nhap lai " << endl;
	} while (n <= 0);
	cout << "So dao nguoc cua " << n << " la: " << daoNguoc(n) << endl;
	return 0;
}
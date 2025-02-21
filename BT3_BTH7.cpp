/*
Viết các hàm sau đây và chương trình kiểm tra các hàm đã viết:
a. Hàm tính n! (n là số nguyên không âm).
b. Hàm tính tổ hợp n chập k theo công thức:
C(n,k)=n!/k!*(n-k)!
c. Hàm in tam giác Pascal có chiều cao h.
*/
#include <iostream>
using namespace std;
int giaiThua(int n)
{
	int GT = 1;
	for (int i = 1; i <= n; i++)
		GT = GT * i;
	return GT;
}
int toHop(int n, int k)
{
	return giaiThua(n) / (giaiThua(k) * giaiThua(n - k));
}
void tgPascal(int h)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << toHop(i, j) << " ";
		}
		cout << endl;
	}
}
int main()
{
	int n, k, h;
	do
	{
		cout << "Nhap so nguyen thu 1: ";
		cin >> n;
		cout << "Nhap so nguyen thu 2: ";
		cin >> k;
		if (n < 0 || k < 0)
			cout << "Nhap sai, so nguyen khong duoc < 0\n";
	} while (n < 0 || k < 0);
	cout << "Giai thua cua so thu 1: " << giaiThua(n) << endl;
	cout << "To hop n chap k: " << toHop(n, k) << endl;
	cout << "Nhap chieu cao: ";
	cin >> h;
	tgPascal(h);
	return 0;
}
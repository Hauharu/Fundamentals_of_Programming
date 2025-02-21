/*
Viết chương trình nhận vào 1 số nguyên n ( n > 0 ). Tính và xuất ra màn hình kết
quả tổng các số từ 1 đến n.
*/
#include <iostream>
using namespace std;
int main()
{
	int n, tong = 0, i = 1;
	cout << "Nhap 1 so nguyen: ";
	cin >> n;
	if (n > 0)
	{
		while (i <= n)
		{
			tong += i;
			i++;
		}
	}
	else
		cout << n << "Phai lon hon 0" << endl;
	cout << "Tong cac so tu 1 den " << n << ": " << tong << endl;
	return 0;
}
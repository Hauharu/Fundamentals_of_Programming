/*
Viết chương trình nhận vào 1 số nguyên dương n (n > 0). Tính và xuất tổng các
số lẻ từ 1 đến n. Ví dụ: n = 4 thì kết quả là 4.
*/
#include <iostream>
using namespace std;
int main()
{
	int n, tong = 0;
	cout << "Nhap 1 so nguyen duong: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
			tong += i;
	}
	cout << "Tong cac so le tu 1 den " << n << ": " << tong << endl;
	return 0;
}
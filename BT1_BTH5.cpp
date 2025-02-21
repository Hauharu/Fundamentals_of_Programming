/*
.Viết chương trình nhận vào 1 số nguyên dương n (n > 0). Tính và xuất tổng các
số từ 1 đến n.
Ví dụ: n = 4 thì kết quả là 10.
*/
#include <iostream>
using namespace std;
int main()
{
	int n, tong = 0;
	do {
		cout << "Nhap 1 so nguyen duong: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai, nhap lai" << endl;
	} while (n <= 0);
	for (int i = 1; i <= n; i++)
		tong = tong + i;
	cout << "Tong tu 1 den " << n << ": " << tong << endl;
	return 0;
}
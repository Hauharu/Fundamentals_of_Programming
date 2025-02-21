/*
Viết hàm tính tổng các chữ số của số nguyên n; và chương trình để kiểm tra hàm đã
viết.
*/
#include <iostream>
using namespace std;
int tong(int n)
{
	int sum = 0, chuSo;
	while (n != 0)
	{
		chuSo = n % 10;
		sum += chuSo;
		n = n / 10;
	}
	return sum;
}
int main()
{
	int n;
	cout << "Nhap mot so nguyen: ";
	cin >> n;
	cout << tong(n) << endl;
	return 0;
}
/*
Viết chương trình nhận vào 1 số nguyên n > 0. Tách từng chữ số của n và thể
hiện chúng dưới dạng cách nhau một khoảng cách.
Ví dụ n = 3456 thì kết quả từng chữ số là 3 4 5 6
*/
#include <iostream>
using namespace std;
int main()
{
	int n, chuSo, temp, soDN = 0, chuSo1;
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
		soDN = soDN * 10 + chuSo;
		temp = temp / 10;
	}
	while (soDN != 0)
	{
		chuSo1 = soDN % 10;
		cout<< chuSo1<<" ";
		soDN = soDN / 10;
	}
	return 0;
}

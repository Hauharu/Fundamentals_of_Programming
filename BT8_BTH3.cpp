/*
Viết chương trình nhận vào tháng và năm. Xuất ra màn hình số ngày của tháng
đó.
*/
#include<iostream>
using namespace std;
int main()
{
	int n, m;

	do
	{
		cout << " Nhap thang: ";
		cin >> n;
		if (n < 1 || n>12)
			cout << " Nhap sai. Moi nhap lai" << endl;
	} while (n < 1 || n>12);
	cout << " Nhap nam: ";
	cin >> m;
	switch (n)
	{

	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "Thang co 31 ngay";
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "Thang co 30 ngay";
		break;
	case 2: if (n == 2)
	{
		if (m % 400 == 0 || m % 4 == 0 && m % 100 != 0)
			cout << " Thang 2 co 29 ngay";
		else cout << "Thang 2 co 28 ngay";
	}
	default:
		cout << endl;
	}
	return 0;
}
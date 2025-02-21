/*
Viết chương trình yêu cầu nhập vào góc x theo độ, sau đó in ra sin,cos,tan của x.
Hướng dẫn: Đổi x sang radians (x ∗ π/180), dùng hàm toán học trong thư viện.
*/
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	const double PI = 3.14;
	double x;
	cout << "Nhap mot goc: ";
	cin >> x;
	(x * PI) / 180;
	cout << " Sin cua x la : " << sin(x) << endl;
	cout << " cos cua x la : " << cos(x) << endl;
	cout << " tan cua x la : " << tan(x) << endl;
	return 0;
}
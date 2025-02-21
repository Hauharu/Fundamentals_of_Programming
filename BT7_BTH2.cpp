/*
Khoảng cách d giữa hai điểm (x1,y1) và (x2,y2) được tính bằng công thức sau:
√(x2-x1)^2+(y2-y1)^2
Viết chương trình nhập vào tọa độ hai điểm, tính và in ra khoảng cách giữa hai
điểm.
Ví dụ:
Nhap toa do diem thu 1: 0 1
Nhap toa do diem thu 2: 1 0
Khoang cach giua 2 diem la: 1.4
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int x1, x2, y1, y2;
	double d;
	cout << "Nhap toa do diem thu 1: ";
	cin >> x1 >> x2;
	cout << "Nhap toa do diem thu 2: ";
	cin >> y1 >> y2;
	d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	cout << "Khoang cach giua 2 diem la: " << fixed << setprecision(1) << d << endl;
	return 0;
}
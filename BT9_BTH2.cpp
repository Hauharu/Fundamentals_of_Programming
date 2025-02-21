/*
Thuật giải sau đây mô tả cách tính tổng trị giá một đơn hàng của một cửa hàng bán
sách, dựa trên tổng số tiền mua sách và tổng số sách mua:
Đọc vào tổng số sách và tổng số tiền.
Tính thuế (7.5% của tổng số tiền).
Tính tiền vận chuyển (2000 đ/cuốn).
Tổng trị giá đơn hàng = tổng tiền mua sách + tiền thuế + tiền vận chuyển.
In ra tổng trị giá của đơn hàng.
*/
#include <iostream>
using namespace std;
int main()
{
	int tongsosach;
	double tongsotien, tongdonhang, giatienmotcuon;
	const double THUE = 0.075;
	const int TIENVANCHUYEN = 2000;
	cout << " Tong so sach= "; cin >> tongsosach;
	cout << " Gia tien mot cuon = ";
	cin >> giatienmotcuon;
	tongsotien = giatienmotcuon * tongsosach;
	tongdonhang = tongsotien + THUE + TIENVANCHUYEN;
	cout << " Tong tri gia cua don hang = " << tongdonhang << endl;
	return 0;
} 
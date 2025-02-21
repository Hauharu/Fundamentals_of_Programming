/*
Một cửa hàng bán đồ gỗ tính giá bán của mỗi mặt hàng bằng giá mua vào cộng
thêm 60%. Viết chương trình yêu cầu nhập vào giá mua của một mặt hàng, sau đó
in ra giá bán của mặt hàng đó.
*/
#include <iostream>
using namespace std;
int main()
{
	double giaban, giamua;
	const double phantram = 0.6;
	cout << " Gia mua cua mot mat hang la: "; cin >> giamua;
	giaban = giamua + phantram;
	cout << " Gia ban cua mot mat hang la: " << giaban << endl;
	return 0;
}
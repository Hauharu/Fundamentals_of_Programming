/*
Viết chương trình nhận vào một dãy số nguyên liên tục và kết thúc bằng tổ hợp
phím Ctrl + Z. Sau đó xuất ra màn hình giá trị số lớn nhất, số nhỏ nhất và tổng
của các số vừa nhập.
*/
#include <iostream>
using namespace std;
int main()
{
	int n, max = INT_MIN, min = INT_MAX;
	cout << "Nhap cac so nguyen: \n";
	while (cin >> n)
	{
		if (n > max)
			max = n;
		if (n < min)
			min = n;
	}
	cout << "Gia tri lon nhat: " << max << endl;
	cout << "Gia tri nho nhat: " << min << endl;
	return 0;
}
	
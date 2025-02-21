/*
Viết hàm kiểm tra 1 giá trị năm nhận vào có phải là năm nhuần hay không. Viết
chương trình kiểm tra lại hàm vừa xây dựng. (Xem lại năm nhuần ở bài tập thực hành
3).
*/
#include <iostream>
using namespace std;
bool KT_Nam(int n)
{
	if (n % 4 == 0 || n % 400 == 0 && n % 100 != 0)
		return true;
	return false;
}
int main()
{
	int n;
	cout << "Nhap nam:";
	cin >> n;
	if (KT_Nam(n) == true)
		cout << n << " la nam nhuan\n";
	else
		cout << n << " khong la nam nhuan\n";
	return 0;
}
/*
Viết chương trình nhận vào 1 số nguyên dương n > 1. Tính và xuất ra màn hình
kết quả tổng các số lẻ và tổng các số chẵn trong phạm vi từ 1 đến n.
Lưu ý: thực hiện việc kiểm tra giá trị n ban đầu nhập vào. Nếu n <= 1 thì thông
báo nhập sai và cho phép nhập lại cho đến khi nào n > 1 như đề toán yêu cầu thì
mới dừng việc nhập để tính toán.
*/
#include <iostream>
using namespace std;
int main()
{
	int n, i = 1, tongC = 0, tongL = 0;
	do {
		cout << "Nhap 1 so nguyen duong: ";
		cin >> n;
		if (n <= 1)
			cout << "Nhap sai, nhap lai\n";
	} while (n <= 1);
	while (i <= n)
	{
		if (i % 2 == 0)
			tongC += i;
		else
			tongL += i;
		i++;
	}
	cout << "Tong cac so chan: " << tongC << endl;
	cout << "Tong cac so le: " << tongL << endl;
	return 0;
}
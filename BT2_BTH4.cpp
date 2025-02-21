/*
Viết chương trình nhận vào 1 số nguyên dương n > 1. Tính và xuất tích các số lẻ
trong phạm vi từ 1 đến n.
Lưu ý: thực hiện việc kiểm tra giá trị n ban đầu nhập vào. Nếu n <= 1 thì thông
báo nhập sai và cho phép nhập lại cho đến khi nào n > 1 như đề toán yêu cầu thì
mới dừng việc nhập để tính toán.
*/
#include <iostream>
using namespace std;
int main()
{
	int n, tich = 1, i = 1;
	do 
	{
		cout << "Nhap 1 so nguyen duong: ";
		cin >> n;
		if (n <= 1)
			cout << "Nhap sai. Nhap lai" << endl;
	} while (n <= 1);
	while (i <= n)
	{
		if (i % 2 != 0)
			tich = tich * i;
		i++;
	}
	return 0;
}
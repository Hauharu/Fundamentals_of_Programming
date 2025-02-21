/*
Viết chương trình nhận vào 1 số nguyên dương n. Xuất ra màn hình số chữ số và
tổng các chữ số của n. Ví dụ: n = 3523 thì kết quả là n có 4 chữ số và tổng các
chữ số là 13.
Lưu ý: thực hiện việc kiểm tra giá trị n ban đầu nhập vào. Nếu n <= 0 thì thông
báo nhập sai và cho phép nhập lại cho đến khi nào n > 0 như đề toán yêu cầu thì
mới dừng việc nhập để tính toán.
*/
#include <iostream>
using namespace std;
int main()
{
	int n,chuSo, temp, tong = 0, dem = 0;
	do {
		cout << "Nhap 1 so nguyen duong: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai, nhap lai" << endl;
	} while (n <= 0);
	temp = n;
	while (temp!=0)
	{
		chuSo = temp % 10;
		tong += chuSo;
		dem++;
		temp = temp / 10;
	}
	cout << n << " co " << dem << " chu so\n";
	cout << "Tong cac chu so: " << tong << endl;
	return 0;
}
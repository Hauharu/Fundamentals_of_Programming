/*
Viết chương trình nhận vào 1 số nguyên dương n. Xuất ra màn hình số đảo
ngược của n. Ví dụ n là 352 thì số đảo ngược của nó là 253.
Lưu ý: thực hiện việc kiểm tra giá trị n ban đầu nhập vào. Nếu n <= 0 thì thông
báo nhập sai và cho phép nhập lại cho đến khi nào n > 0 như đề toán yêu cầu thì
mới dừng việc nhập để tính toán.
*/
#include <iostream>
using namespace std;
int main()
{
	int n, chuSo, temp, soDN = 0;
	do {
		cout << "Nhap 1 so nguyen duong: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai, nhap lai" << endl;
	} while (n <= 0);
	temp = n;
	while (temp != 0)
	{
		chuSo = temp % 10;
		soDN = soDN * 10 + chuSo;
		temp = temp / 10;
	}
	cout << "So dao nguoc cua " << n << " la: " << soDN << endl;
	return 0;
}
/*
Viết chương trình nhận vào 2 số nguyên dương n1 và n2 (n1 < n2). Đếm và xuất
kết quả xem từ n1 đến n2 có bao nhiêu số là số nguyên tố? Biết rằng số nguyên
tố là số từ 2 trở lên, chỉ chia hết cho 1 và chính bản thân nó.
*/
#include <iostream>
using namespace std;
int main()
{
	int n1, n2;
	int diemnt = 0;
	int j;
	cout << " Nhap 2 so nguyen duong: ";
	cin >> n1 >> n2;
	for (int i = n1; i <= n2; i++)
	{
		if (i < 2) continue;
		for (j = 2; j <= sqrt(i * 1.0); j++)
			if (i % j == 0)
				break;
		if (j > sqrt(i * 1.0))
			diemnt++;
	}
	cout << " Tu " << n1 << " den " << n2 << " co " << diemnt << " so nguyen to " << endl;
	return 0;
}
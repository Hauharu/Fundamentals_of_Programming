/*
Viết chương trình nhận vào 1 số nguyên n. Xuất ra màn hình thông báo n có phải
là số nguyên tố hay không? Biết rằng số nguyên tố là số từ 2 trở lên, chỉ chia hết
cho 1 và cho chính bản thân nó.
*/
#include <iostream>
using namespace std;
int main()
{
	int n, i = 2;
	bool laSNT = true;
	cout << "Nhap mot so nguyen: ";
	cin >> n;
	while (i < n && laSNT == true)
	{
		if (n % i == 0)
			laSNT = false;
		i++;
	}
	if (laSNT == true)
		cout << n << " la so nguyen to\n";
	else
		cout << n << " khong la so nguyen to\n";
	return 0;
}
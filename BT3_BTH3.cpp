/*
Viết chương trình nhận vào số nguyên n. Xuất ra màn hình kết quả trị tuyệt đối
của số nguyên đó.
*/
#include <iostream>
using namespace std;
int main()
{
	int n, trituyetdoi;
	cout << " Nhap so nguyen: ";
	cin >> n;
	if (n >= 0)
		cout << " Ket qua tri tuyet doi la " << n << endl;
	else
		cout << " Ket qua tri tuyet doi la " << -n << endl;
	return 0;
}
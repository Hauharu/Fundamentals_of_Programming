/*
Viết chương trình nhận vào 1 số nguyên dương n. Tính và xuất kết quả tính n giai
thừa.
*/
#include <iostream>
using namespace std;
int main()
{
	int n, GT = 1;
	cout << "Nhap 1 so nguyen duong: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		GT *=i;
	cout << "Giai thua cua " << n << " la: " << GT << endl;
	return 0;
}
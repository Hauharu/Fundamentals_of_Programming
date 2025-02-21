/*
10.Viết chương trình nhận vào 2 số nguyên dương n1 và n2 (n1 < n2). Đếm xem từ
n1 đến n2 có bao nhiêu số chẵn? bao nhiêu số lẻ? bao nhiêu số là ước của 10?
*/
#include <iostream>
using namespace std;
int main()
{
	int n1, n2, demC = 0, demL = 0, demUoc = 0;
	do {
		cout << "Nhap so nguyen duong n1: ";
		cin >> n1;
		cout << "Nhap so nguyen duong n2: ";
		cin >> n2;
		if (n1 >= n2 || n2 <= n1)
			cout << "Nhap sai, nhap lai\n";
	} while (n1 >= n2 || n2 <= n1);

	for (int i = n1; i <= n2; i++)
	{
		if (i % 2 == 0)
			demC++;
		else
			demL++;
		if (10 % i == 0)
			demUoc++;
	}

	cout << "Tu " << n1 << " den " << n2 << " co " << demC << " so chan\n";
	cout << "Tu " << n1 << " den " << n2 << " co " << demL << " so le\n";
	cout << "Tu " << n1 << " den " << n2 << " co " << demUoc << " so uoc cua 10\n";
	return 0;
}
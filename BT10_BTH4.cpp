/*
Viết chương trình nhận vào 1 số nguyên n > 0. Xuất ra màn hình các giá trị thừa
số nguyên tố của n. Ví dụ n = 126 thì các thừa số nguyên tố là 2, 3, 3, 7.
*/
#include<iostream>
using namespace std;
int main()
{
	int n, temp, i;
	do
	{
		cout << " Nhap so nguyen duong: ";
		cin >> n;
		if (n <= 0)
			cout << " Nhap sai, nhap lai ";
	} while (n <= 0);
	temp = n;
	i = 2;
	while (i <= temp)
	{
		while (temp % i == 0)
		{
			cout << i;
			cout << " ";
			temp = temp / i;
		}
		i++;
	}
}	
/*
Viết hàm kiểm tra 1 số nguyên n có phải là số nguyên tố hay không? Hàm sẽ trả về
true nếu n là số nguyên tố, trả về false nếu n không là số nguyên tố. Viết chương trình
kiểm tra hàm đã viết.
*/
#include <iostream>
using namespace std;
bool tra_SNT(int n)
{
	if (n < 2) return false;
	for (int i = 2; i < (n - 1); i++)
		if (n % i == 0)
			return false;
	return true;
}
int main()
{
	int n;
	do
	{
		cout << "Nhap mot so nguyen: ";
		cin >> n;
		if (n < 2)
			cout << "Nhap sai, nhap lai " << endl;
	} while (n < 2);
	if (tra_SNT(n) == true)
		cout << n << " la so nguyen to " << endl;
	else
		cout << n << " Khong la so nguyen to" << endl;
	return 0;
}
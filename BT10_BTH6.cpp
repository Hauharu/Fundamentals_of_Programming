/*
Viết hàm kiểm tra một số nguyên n có phải là số hoàn thiện hay không? Viết chương
trình kiểm tra hàm vừa viết. Biết rằng số hoàn thiện là số có tổng các ước số (kể cả 1)
bằng chính nó. Ví dụ: 6 là số hoàn thiện vì 6 = 1 + 2 + 3 (1, 2, 3 là các ước của 6).
*/
#include<iostream>
using namespace std;
bool soHoanThien(int n)
{
	int tong = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			tong = tong + i;
	if (tong == n)
		return true;
	return false;
}
int main()
{
	int n;
	do
	{
		cout << "Nhap so nguyen: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap sai, nhap lai " << endl;
	} while (n <= 0);
	if (soHoanThien(n)==true)
		cout << "La so hoan thien " << endl;
	else
		cout << "Khong la so hoan thien " << endl;
}

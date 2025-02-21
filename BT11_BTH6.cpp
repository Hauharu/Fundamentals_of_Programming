/*
Viết hàm kiểm tra một số nguyên n có phải là số đối xứng (Palindrome) hay không?
Viết chương trình kiểm tra hàm vừa viết. Biết rằng số đối xứng là số có số đảo ngược
của nó bằng chính nó.
*/
#include <iostream>
using namespace std;
int daoNguoc(int n)
{
	int chuSo, dao = 0;
	int temp;
	temp = n;
	while (temp > 0)
	{
		chuSo = temp % 10;
		dao = dao * 10 + chuSo;
		temp = temp / 10;
	}
	return dao;
}
int main()
{
	int n;
	cout << "Nhap mot so nguyen: ";
	cin >> n;
	if (daoNguoc(n) == n)
		cout << daoNguoc(n) << " la so doi xung cua " << n << endl;
	else
		cout << daoNguoc(n) << " khong  la so doi xung cua " << n << endl;
}
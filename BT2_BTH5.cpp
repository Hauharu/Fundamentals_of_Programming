﻿/*
Viết chương trình cho người dùng nhập giá trị cho m số nguyên. Tính và xuất
tổng các số vừa nhập. Giao diện chương trình khi thực hiện được mô phỏng ở ví
dụ sau:
Ban can bao nhieu so: 3
Nhap so thu 1: 6
Nhap so thu 2: 4
Nhap so thu 3: 2
Tong 3 so vua nhap la: 12
*/
#include<iostream>
using namespace std;
int main()
{
	int i, m;
	int tong = 0;
	int a;
	cout << " Ban can bao nhieu so: ";
	cin >> m;
	for (i = 1; i <= m; i++)
	{
		cout << " Nhap so thu " << i << " : ";
		cin >> a;
		tong = tong + a;
	}
	cout << " Tong " << m << " so vua nhap la: " << tong << endl;
	return 0;
}
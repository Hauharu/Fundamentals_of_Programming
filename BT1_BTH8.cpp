/*
Viết chương trình thực hiện các công việc sau đây:
a) Khai báo một mảng alpha lưu 50 phần tử kiểu double.
b) Gán giá trị của 25 phần tử đầu tiên là bình phương của chỉ số phần tử, 25 phần
tử còn lại có giá trị là lập phương của chỉ số.
c) In các giá trị trong mảng alpha ra màn hình, mỗi dòng gồm 10 phần tử.
*/
#include <iostream>
using namespace std;
void Nhap(double a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}
void Xuat(double a[], int n)
{
	cout << "Mang dang luu tru:\n";
	for (int i = 0; i < n; i++)
	{
		if (i % 10 == 0)
			cout << endl;
		cout << a[i] << " ";
	}
}
void BP_LP(double a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i < 25)
			a[i] = pow(a[i], 2);
		else
			a[i] = pow(a[i], 3);
	}
}
int main()
{
	double a[50];
	int n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	Nhap(a, n);
	Xuat(a, n);
	cout << endl;
	BP_LP(a, n);
	cout << "25 phan tu dau binh phuong, 25 phan tu sau lap phuong\n";
	Xuat(a, n);
	return 0;
}
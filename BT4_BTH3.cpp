/*
Viết chương trình nhận vào 2 số nguyên. Xuất ra màn hình kết quả so sánh giữa
hai số (số thứ nhất lớn hơn, nhỏ hơn hay hai số bằng nhau).
*/
#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << " Nhap so thu nhat: "; cin >> a;
	cout << " Nhap so thu hai: "; cin >> b;
	if (a > b)
		cout << " So thu nhat lon hon " << endl;
	else if (a < b)
		cout << " So thu hai lon hon " << endl;
	else
		cout << " Hai so bang nhau " << endl;
	return 0;
}
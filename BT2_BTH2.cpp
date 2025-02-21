/*
Viết chương trình yêu cầu nhập vào hai cạnh hình chữ nhật, sau đó tính và in ra
diện tích hình chữ nhật.
*/
#include <iostream>
using namespace std;
int main()
{
	double chieuDai, chieuRong, dienTich;
	cout << "Nhap chieu dai hinh chu nhat: ";
	cin >> chieuDai;
	cout << "Nhap chieu rong hinh chu nhat: ";
	cin >> chieuRong;
	dienTich = chieuDai * chieuRong;
	cout << "Dien tich cua hinh chu nhat: " << dienTich << endl;
	return 0;
}
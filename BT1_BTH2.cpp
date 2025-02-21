/*
Viết chương trình yêu cầu nhập vào cạnh hình vuông, sau đó tính và in ra diện tích
hình vuông.
*/
#include <iostream>
using namespace std;
int main()
{
	double canh,dienTich;
	cout << "Nhap canh hinh vuong: ";
	cin >> canh;
	dienTich = canh * canh;
	cout << "Dien tich cua hinh vuong: " << dienTich << endl;
	return 0;
}
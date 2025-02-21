/*
Viết chương trình nhận vào năm. Xuất ra màn hình thông báo năm đó là năm
nhuần hay năm không nhuần? Biết rằng năm nhuần là năm có 366 ngày. Năm

nhuần còn là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không chia hết cho
100.
*/
#include<iostream>
using namespace std;

int main()
{
    int year;
    cout << " Nhap year: ";
    cin >> year;
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
        cout << year << " La nam nhuan " << endl;
    else
        cout << year << " La nam khong nhuan " << endl;
    return 0;
}
/*
Viết chương trình nhận vào 2 số nguyên dương là chiều dài d và chiều rộng r của
hình chữ nhật. Xuất ra hình chữ nhật dưới dạng các dấu *.

Ví dụ d = 3, r = 5 thì kết quả:

*****
*****
*****
*/
#include<iostream>
using namespace std;
int main()
{
    int i, j, d, r;
    cout << " Ban hay nhap chieu dai : ";
    cin >> d;
    cout << " Ban hay nhap chieu rong : ";
    cin >> r;
    for (i = 1; i <= d; i++)
    {
        for (j = 1; j <= r; j++)
            cout << "*";
        cout << "\n";
    }
    system("pause");
    return 0;

}
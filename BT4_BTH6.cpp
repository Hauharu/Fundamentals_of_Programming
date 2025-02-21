/*
Viết các hàm sau đây và viết chương trình kiểm tra các hàm đã viết:
a. Hàm tính tổng các số từ 1 đến n (n là số nguyên dương).
b. Hàm tính n! (n là số nguyên dương).
*/
#include <iostream>
using namespace std;
int tongSN(int a)
{
    int tong = 0;
    for (int i = 1; i <= a; i++)
        tong = tong + i;
    return tong;
}
int giaiThua(int n)
{
    int giai_thua = 1;
    for (int i = 1; i <= n; i++)
        giai_thua *= i;
    return giai_thua;
}
int main()
{
    int a, n;
    do
    {
        cout << " Nhap so nguyen duong: ";
        cin >> a;
        if (a <= 0)
            cout << " Nhap sai, nhap lai " << endl;
    } while (a <= 0);
    if (a > 0)
        cout << " Tong tu 1 den " << a << " la " << tongSN(a) << endl;
    do
    {
        cout << " Nhap so nguyen duong: ";
        cin >> n;
        if (n <= 0)
            cout << " Nhap sai, nhap lai " << endl;
    } while (n <= 0);
    if (n > 0)
        cout << " Giai thua " << n << " la: " << giaiThua(n);
    return 0;
}
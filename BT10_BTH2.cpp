/*
Viết chương trình yêu cầu:
a) Nhập vào một ký tự, sau đó in ra mã ASCII của ký tự đó.
b) Nhập vào một số nguyên (1..255), sau đó in ra ký tự có mã ASCII tương ứng.
*/
#include <iostream> 
using namespace std;
int main()
{
    int soNguyenDuong;
    char kitu;
    cout << " Nhap mot ki tu: ";
    cin >> kitu;
    int num;
    num = kitu;
    cout << " Ma ASCII cua " << kitu << " la " << num << endl;
    do {
        cout << " Nhap so nguyen duong = ";
        cin >> soNguyenDuong;
        if (soNguyenDuong < 1 || soNguyenDuong > 255)
            cout << " So nguyen duong chi gioi han trong 1 -> 255, vui long nhap lai." << endl;
    } while (soNguyenDuong < 1 || soNguyenDuong > 255);
    if (soNguyenDuong >= 1 & soNguyenDuong <= 255)
        cout << " Ky tu tuong ung cua " << soNguyenDuong << " trong bang ma ASCII la: " << char(soNguyenDuong) << endl;
    return 0;
}
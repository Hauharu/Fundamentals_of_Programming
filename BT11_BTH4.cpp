/*
Viết chương trình nhận vào 1 số ở dạng nhị phân. Xuất ra màn hình kết quả số đó
chuyển qua hệ thập phân.
*/
﻿#include <iostream>
#include <math.h>
using namespace std;
long decimalToBinary(int decimalnum)
{
    long binarynum = 0;
    int rem, temp = 1;

    while (decimalnum != 0)
    {
        rem = decimalnum % 2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem * temp;
        temp = temp * 10;
    }
    return binarynum;
}

int main()
{
    int decimalnum;
    cout << "nhap vao so thap phan can bien doi: ";
    cin >> decimalnum;
    cout << "\n " << decimalToBinary(decimalnum);
}
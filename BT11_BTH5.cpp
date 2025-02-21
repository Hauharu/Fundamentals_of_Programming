/*
10.Viết chương trình nhận vào 2 số nguyên dương n1 và n2 (n1 < n2). Đếm xem từ
n1 đến n2 có bao nhiêu số chẵn? bao nhiêu số lẻ? bao nhiêu số là ước của 10?
*/
#include<iostream>
using namespace std;
int main()
{
    int a, i, j;
    cout << "Ban hay nhap do dai canh : ";
    cin >> a;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a; j++)
            cout << "*";
        cout << "\n";
    }
    cout << endl;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a; j++)
        {
            if (i == 1 || i == a || j == 1 || j == a)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
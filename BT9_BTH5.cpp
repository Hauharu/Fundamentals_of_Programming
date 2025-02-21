/*
Viết chương trình nhận vào 1 số nguyên dương n (n > 0). Xuất ra màn hình bảng
cửu chương ứng với số nguyên n. Ví dụ n = 3 thì kết quả xuất ra màn hình:
3 x 1 = 3
3 x 2 = 6
...
3 x 10 = 30
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "Bang cuu chuong cua " << n << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "   " << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
/*
Viết chương trình nhận vào 2 số nguyên dương n1 và n2 (n1 < n2). Đếm và xuất
ra màn hình kết quả có bao nhiêu số là ước của 10 trong phạm vi từ n1 đến n2.
*/
#include <iostream>
using namespace std;

// ??m s? l??ng “??c s?” c?a s? nguyên d??ng n
// VD :
// 5 = 1 5 ==> dem = 2
// 10 = 1 2 5 10 ==> dem = 4
int Dem_UocSo(int N1, int N2)
{
    int dem = 0;
    for (int i = 1; i <= N1; i++)
    {
        if (N1 % i == 0)
            dem++;
    }
    for (int i = 1; i <= N2; i++)
    {
        if (N2 % i == 0)
            dem++;
    }

    return dem;
}

int main()
{
    int N1, N2;
    cout << "N1 = ";
    cin >> N1;
    cout << "N2 = ";
    cin >> N2;
    cout << "Dem Uoc = " << Dem_UocSo(N1, N2) << endl;
    system("pause");
}
/*
Viết các hàm sau đây và chương trình để kiểm tra các hàm đã viết:
a. Hàm tính chu vi hình vuông.
b. Hàm tính diện tích vuông.
c. Hàm xuất hình vuông rỗng khi nhận vào số đo cạnh và ký tự cần xuất. Ví dụ với
cạnh là 4 và ký tự nhập vào là * thì kết quả:
****
*  *
*  *
****
*/
#include <iostream>

using namespace std;

int tinh_chu_vi_hinh_vuong(int canh) {
    return 4 * canh;
}

int tinh_dien_tich_hinh_vuong(int canh) {
    return canh * canh;
}

void xuat_hinh_vuong_rong(int canh, char ky_tu) {
    for (int i = 0; i < canh; i++) {
        if (i == 0 || i == canh - 1) {
            for (int j = 0; j < canh; j++) {
                cout << ky_tu;
            }
            cout << endl;
        }
        else {
            cout << ky_tu;
            for (int j = 0; j < canh - 2; j++) {
                cout << " ";
            }
            cout << ky_tu << endl;
        }
    }
}

int main() {
    int canh = 4;
    char ky_tu = '*';

    cout << "Chu vi hinh vuong la: " << tinh_chu_vi_hinh_vuong(canh) << endl;
    cout << "Dien tich hinh vuong la: " << tinh_dien_tich_hinh_vuong(canh) << endl;
    xuat_hinh_vuong_rong(canh, ky_tu);

    return 0;
}
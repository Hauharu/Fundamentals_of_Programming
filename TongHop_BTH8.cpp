#include <iostream>
#include <ctime>
using namespace std;
// Hàm nhập mảng sử dụng hàm random
void nhapMang(int arr[], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
}

// Hàm in mảng ra màn hình
void xuatMang(int arr[], int n) {
    cout << "Mang hien tai: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Hàm tìm kiếm một phần tử trong mảng và trả về chỉ số của nó, -1 nếu không tìm thấy
int timKiem(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

// Hàm thêm một phần tử mới vào mảng
void themPhanTu(int arr[], int& n, int x, int vitri) {
    // Đẩy tất cả phần tử từ vị trí vitri về sau một bước
    for (int i = n - 1; i >= vitri; i--) {
        arr[i + 1] = arr[i];
    }

    // Thêm phần tử x vào vị trí vitri
    arr[vitri] = x;

    // Tăng kích thước mảng lên 1
    n++;
}

// Hàm xóa một phần tử khỏi mảng
void xoaPhanTu(int arr[], int& n, int vitri) {
    // Dịch tất cả phần tử từ vị trí vitri về sau một bước
    for (int i = vitri; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Giảm kích thước mảng xuống 1
    n--;
}

// Hàm sắp xếp mảng tăng dần
void sapXep(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Hàm tạo menu
void menu(int arr[], int& n) {
    int luaChon, x, vitri;
    do
    {
        system("cls");
    cout << "=====MENU=====" << endl;
    cout << "1. Nhap mang" << endl;
    cout << "2. Xuat mang" << endl;
    cout << "3. Tim kiem phan tu" << endl;
    cout << "4. Them phan tu" << endl;
    cout << "5. Xoa phan tu" << endl;
    cout << "6. Sap xep mang" << endl;
    cout << "7. Thoat" << endl;

    cout << "Lua chon cua ban: ";
    cin >> luaChon;

    switch (luaChon) {
    case 1:
        cout << "Nhap so phan tu mang: ";
        cin >> n;
        nhapMang(arr, n);
        break;
    case 2:
        xuatMang(arr, n);
        break;
    case 3:
        cout << "Nhap phan tu can tim kiem: ";
        cin >> x;
        vitri = timKiem(arr, n, x);
        if (vitri != -1) {
            cout << "Tim thay phan tu " << x << " tai vi tri " << vitri << endl;
        }
        else {
            cout << "Khong tim thay phan tu " << x << endl;
        }
        break;
    case 4:
        cout << "Nhap phan tu can them: ";
        cin >> x;
        cout << "Nhap vi tri muon them: ";
        cin >> vitri;
        themPhanTu(arr, n, x, vitri);
        break;
    case 5:
        cout << "Nhap vi tri phan tu muon xoa: ";
        cin >> vitri;
        xoaPhanTu(arr, n, vitri);
        break;
    case 6:
        sapXep(arr, n);
        break;
    case 7:
        cout << "Tam biet" << endl;
        return;
    default:
        cout << "Lua chon khong hop le. Vui long chon lai." << endl;
    }
    _getch();
    } while (true);
}

int main() {
    int arr[100];
    int n = 0;

    menu(arr, n);

    return 0;
}

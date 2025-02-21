/*
Viết chương trình có giao diện là một menu lựa chọn 1 trong 4 phép tính (+ - * / )
và lựa chọn thoát. Khi người dùng chọn lựa chọn nào sẽ xử lý tương ứng.
+ Với 4 phép tính thì cho người dùng nhập tiếp 2 số nguyên a và b. Thực hiện
phép tính đã chọn với 2 số đó (lưu ý lỗi chia 0 và kết quả phép chia phải làm tròn
lấy 2 chữ số thập phân).
+ Với lựa chọn thoát thì sẽ kết thúc chương trình.
+ Sau khi lựa chọn và tính 1 kết quả phép tính tương ứng, chương trình thể hiện
lại menu cho người dùng tiếp tục có lựa chọn phép tính hay thoát để kết thúc.
*/
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	int luachon;
	double a, b;
	while (true)
	{
		system("cls");
		cout << "\n\n\t\t\t\t\t\t==========MENU==========";
		cout << "\n\n\t\t\t\t\t\t1. Tinh Tong a+b.";
		cout << "\n\n\t\t\t\t\t\t2. Tinh Hieu a-b.";
		cout << "\n\n\t\t\t\t\t\t3. Tinh Tich a*b.";
		cout << "\n\n\t\t\t\t\t\t4. Tinh Thuong a/b.";
		cout << "\n\n\t\t\t\t\t\t0. Thoat khoi truong trinh! ";
		cout << "\n\n\t\t\t\t\t\t==========END==========";

		do
		{
			cout << "\n\n\nNhap lua chon : ";
			cin >> luachon;
			if (luachon != 0 && luachon != 1 && luachon != 2 && luachon != 3 && luachon != 4)
			{
				cout << "\nLua chon khong hop le. Xin kiem tra lai! " << endl;
				_getch();
			}
		} while (luachon != 0 && luachon != 1 && luachon != 2 && luachon != 3 && luachon != 4);
		if (luachon == 1)
		{
			cout << "\nNhap gia tri a:";
			cin >> a;
			cout << "\nNhap gia tri b:";
			cin >> b;
			cout << "\nTong: " << a + b << endl;
			_getch();
		}
		else if (luachon == 2)
		{
			cout << "\nNhap gia tri a:";
			cin >> a;
			cout << "\nNhap gia tri b:";
			cin >> b;
			cout << "\nHieu: " << a - b << endl;
			_getch();
		}
		else if (luachon == 3)
		{
			cout << "\nNhap gia tri a:";
			cin >> a;
			cout << "\nNhap gia tri b:";
			cin >> b;
			cout << "\nTich: " << a * b << endl;
			_getch();
		}
		else if (luachon == 4)
		{
			cout << "\nNhap gia tri a:";
			cin >> a;

			do
			{
				cout << "\nNhap gia tri b:";
				cin >> b;
				if (b == 0)
					cout << "\nNhap b sai, nhap lai: " << endl;
			} while (b == 0);
			cout << "\nThuong: " << fixed << setprecision(2) << a / b << endl;
			_getch();
		}
		else
			break;
	}
	system("pause");
	return 0;
}

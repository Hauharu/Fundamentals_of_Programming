/*
Viết chương trình nhận vào điểm tích lũy của 1 sinh viên. Xuất ra màn hình kết
quả xếp loại của sinh viên đó dựa trên điểm tích lũy. Biết rằng:
- Điểm tích lũy từ 9 trở lên xếp loại xuất sắc.
- Điểm tích lũy từ 8 đến dưới 9 xếp loại giỏi.
- Điểm tích lũy từ 7 đến dưới 8 xếp loại khá.
- Điểm tích lũy từ 6 đến dưới 7 xếp loại trung bình khá.
- Điểm tích lũy từ 5 đến dưới 6 xếp loại trung bình.
- Điểm tích lũy dưới 5 là yếu.
*/
#include<iostream>
using namespace std;
int main()
{
	double diemtl;
	cout << " Nhap diem tich luy: ";
	cin >> diemtl;
	if (diemtl >= 9)
		cout << " Xuat sac " << endl;
	else if (diemtl >= 8 && diemtl < 9)
		cout << " Gioi " << endl;
	else if (diemtl >= 7 && diemtl < 8)
		cout << " Kha " << endl;
	else if (diemtl >= 6 && diemtl < 7)
		cout << " Trung binh kha " << endl;
	else if (diemtl >= 5 && diemtl < 6)
		cout << " Trung binh " << endl;
	else
		cout << " Yeu " << endl;
	return 0;
}
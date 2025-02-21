/*
Viết chương trình nhận vào chiều cao h của một hình tam giác (h > 0). Xuất ra
màn hình tam giác có chiều cao h dưới dạng các dấu *.
Ví dụ h = 3 thì kết quả:

*
**
***
*/
#include <iostream>
using namespace std;
int main()
{
	int h = 10;
	for (int i = 1; i <= h; i++)
	{
		for (int j = i; j <= h; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
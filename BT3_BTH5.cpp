/*

*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	double s;
	s = 0;
	cout << " Nhap vao so n: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		s = s + 1.0 / (2 * i - 1);
	}
	cout << " Tong 1+1/3...+1/" << 2 * n - 1 << " la " << s << endl;
	return 0;
}
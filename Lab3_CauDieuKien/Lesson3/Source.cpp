#include<iostream>
#include<conio.h>


using namespace std;

// ================================== LỖI  ===================================
int main()
{
	// Viết chương trình cho phép người dùng nhập vào hai số nguyên dương n và b (2 ≤ b ≤ 16). Sau đó, xuất
	// ra màn hình số n ở hệ cơ số b.Trường hợp 10 < b ≤ 16, sử dụng các ký tự A đến F để biểu diễn các số từ 10 tới 15.

	int n, b;
	cout << endl << " Nhap vao so n:  ";
	cin >> n;
	do
	{
		cout << endl << " Nhap vao so b: ";
		cin >> b;
	} while (b >= 2 && b <= 16);

	return 0;
}
void Xuat(int so)
{
	if (so > 9)
	{
		Xuat(so);
	}
}
int TimLuyThua(int b, int n)
{

}
void DoiCoSo(int n, int b)
{
	int v, so;
	v = TimLuyThua(b, n);
	while (v > 0)
	{
		if (n < v)
		{
			Xuat(0);
		}
		else
		{
			so = n / v;
			Xuat(so);
			n = n - so * v;
		}
		v = v / b;
	}
}

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
// nguyên mẫu hàm
double CanBacHai(double a);



int main()
{
	// Viết chương trình tính căn bậc 2 của một số thực dương a mà không dùng hàm sqrt.
	
	cout << endl << "\t\t\ Chuong trinh tinh can bac 2\n";
	double a;	// khai báo biến a kdl double

	// -------nhập-------------------
	cout << endl << " Nhap vao so thuc duong a:  ";
	cin >> a;
	// ------xuất-------------
	double tinhcan = CanBacHai(a);
	cout << endl << " Nhap vao a =  " << a << " tinh can bac hai la:  " << tinhcan;

	_getch();
	return 0;
}
double CanBacHai(double a)
{
	double xo, xn;		// kết quả
	if (a == 0)		// nếu a nhập vào = 0 thì = chính nó là 0
	{
		xn = 0;
	}
	else
	{
		xn = 1;
		do
		{
			xo = xn;
			xn = (a / xo + xo) / 2.0;
		} while (abs(xn - xo) >= 2.72); // abs là trị tuyệt đối |   còn 2.72 là quy ước của số e
	}
	return xn;
}
	

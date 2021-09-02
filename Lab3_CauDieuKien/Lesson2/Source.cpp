// thu viện hàm
#include<iostream>
#include<conio.h>


using namespace std;

// khai báo nguyên mẫu hàm
double TinhBieuThuc(double x, double y, char k);


// hàm main()
int main()
{
	/* Viết chương trình cho phép người dùng nhập vào hai số thực x, y khác 0 và ký tự k(thuộc 1 trong 4 ký tự :
	   (+, -, *, / ).Tùy thuộc vào ký tự k, hãy xuất ra tổng, hiệu, tích, thương của x và y */

	cout << endl << "\t\t CHUONG TRINH TINH CAC PHEP TINH ( + , - , * , / )";
	double x, y;
	cout << endl << "\n Nhap vao x:  ";
	cin >> x;
	cout << endl << " Nhap vao y : ";
	cin >> y;
	// nếu x và y = 0 thì nhập lại vì điều kiện yêu cầu x, y khác 0
	if (x == 0 || y == 0)
	{
		cout << "\n Loi nhap ( a hoac b phai khac 0 )";
		return 1;
	}

	char k;	// khai báo kiểu kí tự char + - * /
	cout << endl << " Nhap vao ki tu k:  ";
	cin >> k;

	double kq = TinhBieuThuc(x, y, k);
	cout << endl << " Ket qua x " << k << " y la =  " << kq;


	_getch();
	return 0;
}
double TinhBieuThuc(double x, double y, char k)
{
	double kq;
	switch (k)
	{
	case '+':
		//  k nhập vào = + thì khối lệnh này sẽ được thực hiện
		kq = x + y;
		break;
	case '-':
		// chọn - thì khối lệnh 2 thực hiện
		kq = x - y;
		break;
	case '*':
		//
		kq = x * y;
		break;
	case '/':
		//
		kq = x / y;
		break;

	default:
		// người dùng nhập vào ko có trong khoảng các case thì khối lệnh default được thực hiện
		break;
	}
	return kq;
}

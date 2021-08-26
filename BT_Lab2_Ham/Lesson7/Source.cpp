// thư viện hàm
#include<iostream>
#include<conio.h>
#include<math.h>


using namespace std;
// khai báo nguyên mẫu hàm
double TinhKhoangCach(double xa, double ya, double xb, double yb);



int main()
{
	// Viết chương trình cho phép người dùng nhập vào tọa độ của 2 điểm A, B trong không gian Euclid.
	// Sau đó, xuất ra màn hình khoảng cách giữa hai điểm đó
	cout << endl << "\t\t\t Tinh Khoang Cach 2 diem A & B \n";
	double xa, ya, xb, yb;
	double tinhkhoangcach;
	cout << endl << " Nhap vao diem Xa:  ";
	cin >> xa;
	cout << " Nhap vao diem Ya:  ";
	cin >> ya;
	cout << " Nhap vao diem Xb:  ";
	cin >> xb;
	cout << " Nhap vao diem Yb:  ";
	cin >> yb;

	tinhkhoangcach = TinhKhoangCach(xa, ya, xb, yb);
	cout << endl << " 2 diem A (" << xa << ";" << ya << ") va diem B (" << xb << ";" << yb << ") co khoang cach la:  " << tinhkhoangcach;


	return 0;
}
// định nghĩa hàm
double TinhKhoangCach(double xa, double ya, double xb, double yb)
{
	return sqrt(xb - xa) * 2 + (yb - ya) * 2;
}
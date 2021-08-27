

// thư viện hàm
#include<iostream>
#include<conio.h>

using namespace std;

// hằng số	viết hoa TEN_HANG
#define PI 3.1415926


// khai báo nguyên mẫu hàm
double TinhChuViHinhTron(double r);
double TinhDienTichHinhTron(double r);


// hàm main	-> hàm chính chương trình
int main()
{
	cout << endl << " Viết chương trình tính chu vi và diện tích hình tròn khi biết bán kính R";



	// khai báo biến
	double r;		// r là bán kính
	double chuVi, dienTich;	
	// Nhập vào từ key
	cout << endl << " Nhap vao ban kinh r:  ";	// lệnh xuất ra màn hình
	cin >> r;	// người dùng nhập vào

	// Xử lý -> gọi hàm
	chuVi = TinhChuViHinhTron(r);
	cout << "\n Chu vi cua hinh tron co ban kinh "<< r << " la:  " << chuVi;
	dienTich = TinhDienTichHinhTron(r);
	cout << "\n Dien tich cua hinh tron co ban kinh " << r << " la:  " << dienTich;

	
	_getch();	// dừng màn hình nhấp phím bất kì để thoát
	return 1;
}
// định nghĩa hàm
// hàm tính chu vi hình tròn
double TinhChuViHinhTron(double r)	// sử dụng kiểu số thực double ( và truyền vào kiểu số thực của bán kính double r)
{
	double cv = 2 * PI * r;			// gán kdl double đặt tên cv = chu vi hình tròn là 2PI x r
	return cv;
}
//hàm tính diện tích hình tròn
double TinhDienTichHinhTron(double r)
{
	double dt = PI * r * r;			// diện tích hình tròn là = PI * r^2
	return dt;
}

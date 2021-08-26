// định nghĩa hằng số
#define PI 3.1415926

// thư viện hàm
#include<iostream>
#include<conio.h>

using namespace std;

// khai báo nguyên mẫu hàm
float ChuViMatDay(int r);
float DienTichMatDay(int r);
float DienTichXungQuanh(int r, int h);
float DienTichToanPhan(int r, int h);
float TheTichHinhTru(int r, int h);



int main()
{
	// Viết chương trình cho phép người dùng nhập vào bán kính mặt đáy (R) và
	// chiều cao(h) của một hình trụ tròn.Sau đó, xuất ra màn hình chu vi và diện tích củamặt đáy, 
	// diện tích xung quanh, diện tích toàn phần và thể tích của hình trụ tròn.Với mỗi yêu cầu, định nghĩa một hàm riêng

	// nhập vào 
	int r, h;	// định nghĩa bán kính và chiều cao
	float cvday, dtday, dtxungquanh, dttoanphan, thetich;	
	cout << endl << " Nhap vap ban kinh r:  ";
	cin >> r;
	cout << endl << " Nhap vao chieu cao h:  ";
	cin >> h;

	// xuất ra màn hình console
	cout << endl << "\t Thuc hien tinh toan cac phep toan \n";
	
	cvday = ChuViMatDay(r);
	cout << "\n Ban kinh r = " << r << " co chu vi 1 mat day = " << cvday;
	
	dtday = DienTichMatDay(r);
	cout << "\n Ban kinh r = " << r << " co dien tich mat day = " << dtday;
	
	dtxungquanh = DienTichXungQuanh(r,h);
	cout << "\n Ban kinh r = " << r << " chieu cao = " << h << " co dien tich xung quanh la =  " << dtxungquanh;
	
	dttoanphan = DienTichToanPhan(r, h);
	cout << "\n Ban kinh r = " << r << " chieu cao = " << h << " co dien tich toan phan la =  " << dttoanphan;
	
	thetich = TheTichHinhTru(r, h);
	cout << "\n Ban kinh r = " << r << " chieu cao = " << h << " co the tich hinh tru la =  " << thetich;

	_getch();
	return 1;
}

//Định nghĩa các hàm hàm
float ChuViMatDay(int r)
{
	return 2 * r * PI;			// là chu vi hình tròn 2PI x r
}
float DienTichMatDay(int r)
{
	return r * r * PI;			// là diện tích hình tròn r^2 x PI
}
float DienTichXungQuanh(int r, int h)
{
	return 2 * PI * r * h;			// diện tích xung quanh = 2*PI*r*h
}
float DienTichToanPhan( int r, int h)
{
	return 2 * PI * r * h + 2 * PI * r * r;	// diện tích toàn phần = 2PI*r*h + 2PI*r^2
}
float TheTichHinhTru(int r, int h)
{
	return 4 * PI * r * r * h;				// thể tích khối trụ = 4*PI*r^2*h
}





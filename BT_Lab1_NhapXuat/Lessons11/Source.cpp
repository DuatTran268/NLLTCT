#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>


using namespace std;

int main()
{
	// Viết chương trình cho phép người dùng nhập vào bán kính mặt đáy (R) và chiều cao
	// (h)của một hình trụ tròn.Sau đó, xuất ra màn hình chu vi và diện tích của mặt đáy,
	// diện tích xung quanh, diện tích toàn phần và thể tích của hình trụ tròn
	cout << "\t\t\t Chuong trinh Hinh Tru";
	int r, h;	// khai báo số nguyên bán kính
	cout << "\n Nhap vao ban kinh R:  ";
	cin >> r;
	cout << " Nhap vao chieu cao h:  ";
	cin >> h;

	// thực hiện tính
	float cvDay = 2 * r * 3.14;		// chu vi đáy hình trụ cũng là chu vi hình tròn = 2r*3,14
	float dtDay = r * r * 3.14;		// diện tích đáy hình trụ cũng là diện tích hình tròn = r^2*2,14
	float dthinhTru = 3.14 * r * r * h;		// PI*r^2*h
	float dtxungQuanh = 2 * 3.14 * r * h;	// 2*PI*r*h
	float dttoanPhan = dtxungQuanh + 2 * 3.14 * r * r;	// diện tích xung quanh + 2 lần diện tích đáy



	cout << endl << " Chu vi day:  " << cvDay;
	cout << endl << " Dien tich day:  " << dtDay;
	cout << endl << " Dien tich hinh tru tron: " << dthinhTru;
	cout << endl << " Dien tich xung quang:  " << dtxungQuanh;
	cout << endl << " Dien tich toan phan:  " << dttoanPhan;

	_getch();
	return 0;



}
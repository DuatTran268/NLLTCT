#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	//Viết chương trình cho phép người dùng nhập vào bán kính hình cầu (R). 
	//Sau đó, xuất ra màn hình diện tích mặt cầu và thể tích khối cầu.
	int r;
	cout << " Nhap vao ban kinh r:  ";
	cin >> r;

	float thetich = (4 / 3) * 3.14 * r * r * r;	// thể tích khối cầu là:  4/3 * PI * R^3
	float dientich = 4 * 3.14 * r * r;			// diện tích mặt cầu là:  4 * PI * R^2 

	cout << endl << " The tich cua khoi cau la:  " << thetich;
	cout << endl << " Dien tich cua mat cau la:  " << dientich;

	_getch();
	return 0;
}

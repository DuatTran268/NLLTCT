// định nghĩa hằng số
#define PI 3.1415926

// thư viện hàm 
#include<iostream>
#include<conio.h>

using namespace std;
// khai báo nguyên mẫu hàm
double TinhDienTichMatCau(int r);
double TinhTheTichKhoiCau(int r);





// hàm main()
int main()
{
	//Viết chương trình cho phép người dùng nhập vào bán kính hình cầu (R). Sau đó, xuất ra màn hình diện tích mặt cầu và thể tích khối cầu.
	cout << endl << "\t\t Chuong trinh Hinh Cau \n";
	int r;
	double theTich, dienTich;
	cout << endl << " Nhap vap ban kinh r:  ";
	cin >> r;

	theTich = TinhTheTichKhoiCau(r);
	cout << endl << " Ban kinh r = " << r << " co the tich khoi cau la:  " << theTich;

	dienTich = TinhDienTichMatCau(r);
	cout << endl << " Ban kinh r = " << r << " co dien tich mat cau la:  " << dienTich;

	return 0;
}
// định nghĩa hàm

double TinhTheTichKhoiCau(int r)
{
	return (4 / 3) * PI * r * r * r;
}
double TinhDienTichMatCau(int r)
{
	return 4 * PI * r * r;
}

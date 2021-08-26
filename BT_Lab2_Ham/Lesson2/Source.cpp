// định nghĩa hằng số 
#define MAX 3600
#define SIXTY 60

// khai báo thư viện hàm
#include<iostream>
#include<conio.h>


using namespace std;
// khai báo nguyên mẫu hàm
void DoiThoiGian(unsigned int n);


int main()
{
	// Viết chương trình cho phép nhập vào số giây (ký hiệu là n) và sau đó quy đổi thời gian giây thành
	//giờ, phút, giây.Xuất kết quả ra màn hình dưới dạng : giờ:phút:giây. Ví dụ : người dùng nhập n = 3770 thìxuất ra màn hình 1 : 2 : 50
	int soGiay;
	double doitime, gio, phut, giay;
	
	cout << endl << " Nhap vao so giay can quy doi:  ";
	cin >> soGiay;

	cout << endl << " So giay nhap vao la:  " << soGiay;
	cout << endl << DoiThoiGian;


	return 1;
}

// định nghĩa hàm ( hàm ko trả về sử dụng kdl void)
void DoiThoiGian(unsigned int n)
{
	double gio;
	gio = n / MAX;
	double phut;
	phut = (n % MAX) / SIXTY;
	double giay;
	giay = (n % MAX) / SIXTY;
	
}
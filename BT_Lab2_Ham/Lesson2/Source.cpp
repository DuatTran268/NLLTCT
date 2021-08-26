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
	cout << endl << "\t CHUONG TRINH QUY DOI TIME";
	// khai báo kiểu dữ liệu
	int soGiay;					// sử dụng kdl gán 
	double gio, phut, giay;
	
	//người dùng thấy và nhập vào
	cout << endl << "\n\t\t\t Nhap vao so giay can quy doi:  ";
	cin >> soGiay;
	
	// gọi hàm
	DoiThoiGian(soGiay);

	_getch();
	return 1;
}

// định nghĩa hàm ( hàm ko trả về sử dụng kdl void)
void DoiThoiGian(unsigned int n)
{
	
	double gio = n / MAX;
	double phut = (n % MAX) / SIXTY;
	double giay = (n % MAX) % SIXTY;

	// xuất
	cout << "\n\t So giay nhap vào n = "<< n << " duoc chuyen doi thanh: " << gio << "g : " << phut << "p : " << giay << "s";
	cout << endl << "\n";


}
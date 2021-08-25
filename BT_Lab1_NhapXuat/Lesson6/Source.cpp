#include<iostream>

using namespace std;

int main()
{
	//Viết chương trình trong đó khai báo hai biến kiểu số nguyên x và y. 
	// Thực hiện tuần tự các lệnh sau và xuất giá trị của các biến này sau mỗi lệnh
	
	int x, y;	// khai báo biến kiểu số nguyên
	cout << " Nhap vao so nguyen X:  ";
	cin >> x;		// người dùng nhập vào
	cout << " Nhap vao so nguyen Y:  ";
	cin >> y;
	// xuất
	cout << endl << " Lenh x++ la:  " << ++x;
	cout << endl << " Lenh x-- la:  " << --x;
	cout << endl << " Lenh x = x / y ( chia het ) la:  " << x / y;		// chia hết
	cout << endl << " Lenh x = x % y ( chia du ) la:  " << x % y;		// chia lấy dư
	cout << endl << " Lenh x * y la:  " << x * y;



}
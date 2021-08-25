// thu vien
#include<iostream>
#include<iomanip>
#include<conio.h>	// sử dụng để _getch() dừng màn hình

using namespace std;


// hàm main
int main()
{
	//	1. Biến
	//	Viết chương trình khai báo 5 biến: k kiểu số nguyên(int), x kiểu số nguyên dài(long), a kiểu số thực(float), 
	//  h kiểu số thực(double), c kiểu ký tự.Sau đó, nhập và xuất giá trị của các biến đó.
	
	// khai báo biến
	int k;
	long x;
	float a;
	double h;
	char c;

	// người dùng nhập vào
	cout << " Nhap vao so nguyen int k:  ";
	cin >> k;
	cout << " Nhap vao so nguyen dai long x: ";
	cin >> x;
	cout << " Nhap vao so thuc float a:  ";
	cin >> a;
	cout << " Nhap vao kieu so thuc double h:  ";
	cin >> h;
	cout << " Nhap vao kieu ki tu char c:  ";
	cin >> c;

	// xuất ra màn hình

	cout << endl << " Gia tri so nguyen k =  " << k;
	cout << endl << " Gia tri so nguyen dai x =  " << x;
	cout << endl << " Gia tri so thuc a =  " << a;
	cout << endl << " Gia tri kieu so thuc h:  " << h;
	cout << endl << " Gia tri kieu ki tu c:  " << c;
	
	_getch();

}
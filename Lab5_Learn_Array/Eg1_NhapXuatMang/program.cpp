// khai báo thư viện hàm
#include<iostream>
#include<conio.h>
#include<stdlib.h>		// sử dụng để hàm nhập tự động



// định nghĩa hằng
#define MAX 100
// định nghĩa kiểu dữ liệu mới
typedef int MANG[MAX];


using namespace std;

// khai báo nguyên mẫu hàm
void NhapMang(MANG a, int& n);
void XuatMang(MANG a, int n);
void NhapTuDong(MANG a, int& n);


// hàm main
int main()
{
	MANG a;
	int n = 0;
	cout << endl << "\n Chuong trinh MANG";
	NhapMang(a, n);
	cout << endl << "\n Mang sau khi nhap vao la:  \n";
	XuatMang(a, n);

	cout << endl << "\n Nhap vao so luong phan tu mang:  ";
	cin >> n;
	NhapTuDong(a, n);
	cout << endl << " Mang vua nhap tu dong vao la:  \n";
	XuatMang(a, n);


	return 0;
}


// các hàm xử lý===================
// nhập từ bàn phím ( Nhập tay ) 

void NhapMang(MANG a, int& n)
{
	// đặt điều kiện nhập vào
	do
	{
		cout << endl << "\n Nhap vao so luong phan tu mang:  ";
		cin >> n;
	} while (n <= 0);		// nếu nhỏ hơn hoặc bằng0 bắt nhập lại mảng
	
	// điều kiện đúng thì chạy vòng for từ i = 0 cho tới i nhỏ hơn n nhập vào
	for (int i = 0; i < n; i++)
	{
		cout << endl << " Nhap vao a[" << i << "] =  ";
		cin >> a[i];
	}
}

// nhập tự động
void NhapTuDong(MANG a, int& n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = (MAX / 2 - rand() % MAX) / 2; //ngau nhien trong khoang [-8, 8]
}

// xuất mảng
void XuatMang(MANG a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}


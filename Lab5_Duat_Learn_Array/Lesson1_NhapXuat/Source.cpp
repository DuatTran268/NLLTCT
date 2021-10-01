#include<iostream>
#include<conio.h>
#include<cstdlib>


using namespace std;

#define MAX 100
typedef int MANG[MAX];

void NhapTuDongMang(MANG a, int& n) {
	do
	{
		cout << endl << "\n Nhap vao so luong phan tu mang:  ";
		cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (10 - -10 + 1) + -10;
			// công thức tính sinh số ngẫu nhiên rand() % (max – min + 1) + min 
	}
}

void NhapTuKey(MANG a, int& n) {
	do
	{
		cout << endl << "\n Nhap vao so luong phan tu mang:  ";
		cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		cout << endl << " Nhap a[" << i << "] =  ";
		cin >> a[i];
	}
}

void XuatMang(MANG a, int& n) {
	cout << endl << "\n Xuat mang:\t";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}




int main() {
	// khai báo hằng số biến số
	MANG a;
	int n;


	cout << endl << "\n--------------- Nhap mang ------------------";
	cout << endl << "\n______ Nhap mang tu dong ______";
	NhapTuDongMang(a, n);
	cout << endl << "\n Xuat mang nhap tu dong";
	XuatMang(a, n);

	cout << endl << "\n_______ Nhap mang tu ban phim _______";
	NhapTuKey(a, n);
	cout << endl << "\n Xuat mang nhap tu ban phim";
	XuatMang(a, n);

	cout << endl << "\n__________ XUAT MANG MOI NHAP ____________";
	XuatMang(a, n);

	system("pause");
	return 1;
}
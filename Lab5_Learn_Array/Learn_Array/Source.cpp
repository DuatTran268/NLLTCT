#include<iostream>
#include<conio.h>
#include<cstdlib>		// thư viện để sử dụng hàm nhập tự động

using namespace std;

#include"2012254_ThuVien.h"
#include"2012254_Menu.h"


void ChayChuongTrinh() {
	int n;
	int menu,
		soMenu = 9;
	MANG a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(a, menu, n);
	} while (menu > 0);

	cout << endl << "\n Cam on ban da su dung chuong trinh :))";


}

int main() {

	ChayChuongTrinh();
	return 0;
}
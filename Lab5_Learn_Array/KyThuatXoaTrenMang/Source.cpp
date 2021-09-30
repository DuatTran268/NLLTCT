#include<iostream>
#include<conio.h>
#include<cstdlib>		// hàm sinh số ngẫu nhiên để nhập tự động


using namespace std;

#include"ThuVien.h"
#include"Menu.h"

void ChayChuongTrinh()
{
	int n = 0;
	int menu,
		soMenu = 11;
	MANG a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(a, n, menu);
	} while (menu>0);

}


int main()
{
	ChayChuongTrinh();
	return 0;
}
#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>


using namespace std;

#include"ThuVien.h"
#include"Menu.h"


void ChayChuongTrinh();




int main()
{

	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	// khai báo biến
	int menu,		// lưu số thứ tự menu
		soMenu = 8;		// lưu số lượng chức năng
	int n = 0;		// kích thước khi dùng của mảng và giá trị khởi tạo
	DaySo a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);

}
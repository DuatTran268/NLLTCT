#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>


using namespace std;

#include"ThuVien.h"
#include"Menu.h"


// khai báo nguyên mẫu hàm
void ChayChuongTrinh();



int main()
{

	ChayChuongTrinh();
	return 0;
}
void ChayChuongTrinh()
{
	// khai báo biến
	int menu,		// lưu số thứ tự menu được chọn 
		soMenu = 7;		// lưu số lượng chức năng
	int n = 0;		// kích thước khii dùng của mảng và giá trị khởi tạo
	DaySo a;

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);

	} while (menu > 0);		// menu == 0 dừng chương trình



}

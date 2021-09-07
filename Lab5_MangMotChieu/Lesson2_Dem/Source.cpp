#include<iostream>
#include<conio.h>


using namespace std;

#include"ThuVien.h"
#include"Menu.h"

// khai báo nguyên mẫu hàm
void ChayChuongTrinh();



// định nghĩa hàm xử lý
int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh() 
{
	int menu, soMenu = 7;
	int n = 0;
	DaySo a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu>0);

}


#include<iostream>
#include<conio.h>



using namespace std;

#include"ThuVien.h"
#include"Menu.h"


void ChayChuongTrinh();


// hàm main()
int main() {

	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int menu, soMenu = 5;
	int n = 0;
	MANG a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(a, menu, n);

	} while (menu > 0);

}



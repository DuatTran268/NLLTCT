#include<iostream>
#include<conio.h>
#include<cstdlib>


using namespace std;

#include"ThuVien.h"
#include"Menu.h"

void ChayChuongTrinh() {
	int n = 0;
	int menu, soMenu = 17;
	MANG a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(a,menu,n);
	} while (menu > 0);
	cout << endl << "\n Cam on ban da su dung chuong trinh\n";

}

int main() {

	ChayChuongTrinh();
	return 1;
}

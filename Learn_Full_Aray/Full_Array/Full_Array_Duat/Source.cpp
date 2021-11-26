#include<iostream>
#include<conio.h>
#include<cstdlib>


using namespace std;


#include"ThuVien.h"
#include"Menu.h"


void ChayChuongTrinh() {
	int n = 0;
	int menu, soMenu = 16;
	Array a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(a, menu, n);
	} while (menu);

}

int main() {
	ChayChuongTrinh();
	return 1;

}
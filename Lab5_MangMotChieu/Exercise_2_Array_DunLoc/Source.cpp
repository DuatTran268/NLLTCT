#include<iostream>
#include<conio.h>
#include<cstdlib>		// thư viện hàm sinh số ngẫu nhiên
#include<ctime>
#include <cmath>


using namespace std;

#include"ThuVien.h"
#include"Menu.h"

// khai báo nguyên mẫu hàm
void ChayChuongTrinh();



// định nghĩa các hàm xử lý
int main()
{

	ChayChuongTrinh();

	return 0;
}

void ChayChuongTrinh()
{

	int menu, soMenu = 17;
	int n = 0;
	Mang a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(a, menu, n);

	} while (menu > 0);

}


// công thức tính nhập tự động
// a[i] = rand() % (10 - -10 + 1) + -10


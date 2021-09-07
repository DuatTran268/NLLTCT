#include<iostream>
#include<conio.h>



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
	int soMenu = 7,		// lưu số các chức năng menu
		menu,			// lưu thứ tự chức năng người dùng chọn
		n = 0;			// kích thước mảng và giá trị khởi tạo
	DaySo a;
	
	cout << endl << " Nhap mot so nguyen duong so luong phan tu mang:  ";	// xuất thông báo lệnh yêu cầu ra màn hình để người dùng nhập vào
	cin >> n;
	// nhập dữ liệu cho mảng a
	NhapMang(a, n);
	// lặp lại việc chọn và xử lý menu cho tới khi người dùng chọn chức năng 0 để thoát chương trình

	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);

	} while (menu>0);	// menu = 0 thì dừng thoát chương trình


}
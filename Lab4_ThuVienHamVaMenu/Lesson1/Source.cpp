#include<iostream>
#include<conio.h>
#include<math.h>	// hàm sử dụng công thức tính toán

using namespace std;

#include"ThuVien.h"
#include"Menu.h"

// khai báo nguyên mẫu hàm 
void ChayChuongTrinh();


// Bài tập: Tính diện tích hình học
int main()
{
	ChayChuongTrinh();
	return 1;
}
// Hàm chạy chương trình ko trả về sử dụng kdl void
void ChayChuongTrinh()
{
	// khai báo biến menu gán cho kdl số nguyên int
	int menu,	// lưu thứ tự menu được chọn
		soMenu = 8;	// biến soMenu được gán = 8 để biết được số lượng menu chức năng
	
	// lặp lại việc chọn và xử lý menu cho tới khi người dùng chọn chức năng 0 thì mới thoát khỏi chuong trình
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);

	} while (menu>0);
}



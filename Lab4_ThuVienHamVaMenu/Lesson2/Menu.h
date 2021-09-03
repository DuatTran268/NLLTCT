#pragma once

// khhai báo nguyên mầu hàm
void XuatMenu(unsigned int n);
int ChonMenu(int soMenu, unsigned int n);
void XuLyMenu(int menu, unsigned int n);





void XuatMenu(unsigned int n)
{
	cout << "\n ------------ MENU --------------";
	cout << "\n 0. Thoat khoi chuong trinh";
	cout << "\n 1. Xuat cac so tu 1 toi n ";
	cout << "\n 2. Dem cac so chia het cho 3 nhung ko chia het cho 4";
	cout << "\n 3. Dem so luong chu so cua n ";
	cout << "\n 4. Dao nguoc chu so";
	cout << "\n 5. Tinh tong cac chu so trong n";
	cout << "\n 6. Cho biet vi tri so dau tien tron n";

}

int ChonMenu(int soMenu, unsigned int n)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu(n);
		cout << endl << " Nhap vao chuc nang menu tu ( 0 -> " << soMenu << " de chon chuc nang menu:  ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
		{
			break;
		}
		return stt;
	}

}

void XuLyMenu(int menu, unsigned int n)
{

	int count;
	switch (menu)
	{
	case 0:
		cout << endl << " Thoat khoi chuong trinh";
		break;

	case 1:
		cout << endl << " Xuat cac so tu 1 toi " << n;
		XuatDaySo(n);
		break;

	case 2: 
		count = DemSoChiaHetCho3vaCho4(n);	// gọi hàm đếm ra truyền vào số nguyên n
		cout << endl << " So luong cac so chia het cho 3 nhung ko chia het cho 4 trong doan [1 ... " << n << "] la: " << count;
		break;

	case 3:
		cout << endl << " Dem so luong chu so";
		count = DemTatCaSoLuongChuSo(n);
		cout << endl << " Co tat ca " << count << " chu so trong khoan tu [1 ... " << n << "]";
		break;

	case 4:
		cout << endl << " Dao nguoc chu so ";
		count = DaoNguocSo(n);
		cout << endl << " Dao nguoc so la " << count;
		break;



	default:
		break;
	}

	system("pause");
}
#pragma once
// khai báo nguyên mẫu hàm
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int n);




void XuatMenu()
{
	cout << endl << "--------------- MENU ---------------";
	cout << endl << " 0. Thoat chuong trinh";
	cout << endl << " 1. Nhap tu dong mang";
	cout << endl << " 2. Xem mang vua nhap";
	cout << endl << " 3. Sap cac so duong tang dan, so khac giu nguyen thu tu";
	cout << endl << " 4. Sap cho so 0 cuoi mang, so khac dau mang tang dan";
	cout << endl << " 5. Sap cac so 0 dau mang, so am ơ giua giam dan, so duong o cuoi tang ";
	cout << endl << " 6. Sap so le dau mang tang dan, so chan cuoi mang giam dan";
	cout << endl << " 7. Sap cac so nguyen to nam dau mang va tang, so con lai o cuoi va giam dan";
	cout << endl << "----------------- END ----------------";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << endl << " Nhap vao chuc nang Menu 0 -> " << soMenu << " de chonn chuc nang Menu:  ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, DaySo a, int n)
{

	switch (menu)
	{
	case 0:
		cout << endl << " 0. Thoat chuong trinh";
		break;

	case 1:
		cout << endl << " 1. Nhap tu dong";
		NhapMangTuDong(a, n);
		cout << endl << "\n Mang sau khi nhap la: \n";
		XuatMang(a, n);
		break;

	case 2:
		cout << endl << " 2. Xuat du lieu vua nhap";
		cout << endl << " Xem mang sau khi vua nhap tu dong la:  \n";
		XuatMang(a, n);

		
		break;



	default:
		break;
	}
	cout << endl << "\n";
	system("pause");
}
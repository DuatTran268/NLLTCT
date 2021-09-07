#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(mang a, int menu, int& n);



void XuatMenu()
{
	cout << endl << "------------ MENU ------------";
	cout << endl << " 0. Thoat";
	cout << endl << " 1. Nhap tu ban phim";
	cout << endl << " 2. Xuat mang vua nhap";
	cout << endl << " 3. Tinh tong cac phan tu cua mang";
	cout << endl << " 4. Tinh tich tat ca cac phan tu cua mang";
	cout << endl << " 5. Xuat tat cac cac phan tu la so chan";
	cout << endl << " 6. Xuat tat ca cac vi tri chi so ma phan tu tai do la so le";
	cout << endl << "--------------- END -------------";

}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << endl << "\n Nhap vao chuc nang menu tu 0 -> " << soMenu << " de chon chuc nang Menu:  ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(mang a, int menu, int& n)
{


	int kq;
	system("cls");

	switch (menu)
	{
	case 0:
		cout << endl << " 0. Thoat";
		break;

	case 1:
		cout << endl << " 1. Nhap tu ban phim\n";

		NhapMang(a, n);
		break;

	case 2:
		cout << endl << " 2. Xem du lieu da nhap";

		cout << endl << "\n Mang sau vua nhap tu ban phim la:  ";
		XuatMang(a, n);

		break;

	case 3:
		cout << endl << " 3. Tinh tong cac phan tu cua mang:  ";
		cout << endl << "\n Xem lai mang ban dau:\t";
		XuatMang(a, n);
		kq = TinhTong(a, n);
		cout << endl << " Tong cua cac phan tu trong mang la:  " << kq;
		break;

	case 4:
		cout << endl << " 4. Tinh tich cac phan tu cua mang:  ";
		cout << endl << "\n Xem lai mang ban dau:\t";
		XuatMang(a, n);
		kq = TinhTich(a, n);
		cout << endl << " Tich cac phan tu trong mang la:  " << kq;
		break;

	case 5:
		cout << endl << " 5. Xuat cac phan tu la so chan:  ";
		cout << endl << "\n Xem lai mang ban dau:\t";
		XuatMang(a, n);
		cout << endl << "\n Xuat cac so chan la:   ";
		XuatCacSoChan(a, n);
		cout << endl << " Xuat cac so le ra la:   ";
		XuatCacSoLe(a, n);
		break;

	case 6:
		cout << endl << " 6. Xuat vi tri cua cac so le:  ";
		cout << endl << "\n Vi tri cua cac so le la:  \n";
		TimViTriCuaSoLe(a, n);
		cout << endl << "\n Xem lai mang ban dau\n";
		XuatMang(a, n);
		break;

	default:
		break;
	}

	cout << endl << "\n";
	system("pause");
}
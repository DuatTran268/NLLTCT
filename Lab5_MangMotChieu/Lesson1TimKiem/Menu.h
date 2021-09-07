#pragma once
// khai báo nguyên mẫu hàm meni=u
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);



// định nghĩa các hàm menu
void XuatMenu()
{
	cout << endl << "------------------ MENU --------------------";
	cout << endl << " 0. Thoat khoi chuong trinh";
	cout << endl << " 1. Nhap tu dong mang";
	cout << endl << " 2. Xem mang vua nhap";
	cout << endl << " 3. Tim vi tri SNT cuoi cung trong mang a";
	cout << endl << " 4. Tim phan tu xuat hien nhieu nhat va so lan xuat hien";
	cout << endl << " 5. Tim phan tu co gia tri nho nhat va vi tri xuat hien";
	cout << endl << " 6. Tim so am lon nhat va vi tri cua no";
	cout << endl << " 7. Tim so duong nho nhat va vi tri cua no";
	cout << endl << "------------------ END -------------------";

}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << endl << "\n Nhap vao tuy chon Menu [0 -> " << soMenu << "] de thuc hien chuc nang Menu:  ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;

}

void XuLyMenu(int menu, DaySo a, int& n)
{
	int kq;

	system("cls");

	switch (menu)
	{
	case 0:
		cout << endl << " 0. Thoat khoi chuong trinh";
		break;

	case 1: 
		cout << endl << " 1. Nhap tu dong mang";
		NhapTuDong(a, n);
		cout << endl << " Mang vua nhap tu dong: \n";
		XuatMang(a, n);
		break;

	case 2:
		cout << endl << " 2. Xuat mang vua nhap";
		cout << endl << " Xem mang vua nhap tu dong: \n";
		XuatMang(a, n);
		break;

	case 3:
		cout << endl << " 3. Tim vi tri so nguyen to cuoi cung trong mang";
		cout << endl << "\n Mang ban dau nhap vao la:  \n";
		XuatMang(a, n);
		kq = SoNguyenToCuoiCung(a, n);
		if (kq == -1)
		{
			cout << endl << " Ko thay so nguyen to";
		}
		else
		{
			cout << endl << " So nguyen to cuoi cung la " << a[kq] << " tai vi tri:  " << kq;
		}
		break;

	case 4:
		cout << endl << " 4. Tim phan tu xuat hien nhieu nhat";
		break;

	case 5:
		cout << endl << " 5. Tim phan tu co gia tri nho nhat";
		kq = ViTriMin(a, n);
		cout << endl << "\n Phan tu nho nhat la:  " << a[kq] << ", vi tri xuat hien dau tien la:  " << kq;
		cout << endl << " Mang ban dau la:  \n";
		XuatMang(a, n);
		break;

	case 6:
		cout << endl << " 6. Tim so am lon nhat";
		cout << endl << " Xem mang ban dau la: \n";
		XuatMang(a, n);
		kq = SoAmLonNhat(a, n);
		if (kq == -1)
			cout << endl << "\n Mang ko chua so am: \n";
		else
			cout << endl << "\n So am lon nhat la:  " << a[kq] << ", tai vi tri:  " << kq;
		break;

	case 7:
		cout << endl << " 7.Tim so duong nho nhat";
		cout << endl << "\n Xem mang ban dau la:  \n";
		XuatMang(a, n);
		kq = SoDuongNhoNhat(a, n);
		if (kq == -1)
			cout << endl << "\n Mang ko chua so duong";
		else
			cout << endl << "\n So duong nho nhat la: " << a[kq] << ", tai vi tri: " << kq;
		

	default:
		break;
	}

	cout << endl << "\n";
	system("pause");

}
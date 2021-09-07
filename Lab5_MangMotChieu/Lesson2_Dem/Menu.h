#pragma once
// khai báo nguyên mẫu hàm 
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);



// định nghĩa các hàm xử lý


void XuatMenu()
{

	cout << endl << "---------------- MENU ------------------";
	cout << endl << " 0. Thoat khoi chuong trinh";
	cout << endl << " 1. Nhap tu dong mang";
	cout << endl << " 2. Xem mang vua nhap";
	cout << endl << " 3. Dem so luong so co 3 chu so";
	cout << endl << " 4. Dem cac so nam ngoai pham vi min max cho truoc";
	cout << endl << " 5. Dem so chinh phuong";
	cout << endl << " 6. Dem so lan xuat hien cua phan tu x ke tu vi tri cho truoc";
	cout << endl << " 7. Dem so duong chay trong day";
	cout << endl << "------------------ END ----------------";

}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << endl << " Nhap vao chuc nang Menu tu 0 -> " << soMenu << " de chon chuc nang Menu:  ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, DaySo a, int& n)
{
	int kq;
	int min, max, vt, x;
	switch (menu)
	{
	case 0:
		cout << endl << " 0. Thoat chuong trinh";
		break;

	case 1: 
		cout << endl << " 1. Nhap tu dong mang";
		NhapMangTuDong(a, n);
		cout << endl << " Mang vua nhap vao :\n";
		XuatMang(a, n);
		break;

	case 2:
		cout << endl << " 2. Mang vua nhap la";
		cout << endl << "\n Xuat mang vua nhap tu dong: \n";
		XuatMang(a, n);
		break;

	case 3:
		cout << endl << " 3. Dem so luong so co 3 chu so ";
		cout << endl << " Xem lai mang ban dau \n";
		XuatMang(a, n);
		kq = DemSoLuongSoCo3ChuSo(a, n);
		cout << endl << " So luong so co 3 chu so trong mang a la:  " << kq;
		break;

	case 4:
		cout << endl << " 4. Dem so nam ngoai pham vi min max nhap vao";
		cout << endl << "\n Nhap vao min:  ";
		cin >> min;
		cout << endl << " Nhap vao max:  ";
		cin >> max;
		kq = DemSoNgoaiMinMax(a, n, min, max);
		cout << endl << " So luong chu so nam ngoai pham vi [" << min << ". . ." << max << "] la:  " << kq;
		break;
		cout << endl << " \n Xem lai mang ban dau: \n";
		break;

	case 5:
		cout << endl << " 5. Dem so chinh phuong";
		cout << endl << " Mang ban dau la:  \n";
		XuatMang(a, n);
		kq = DemSoChinhPhuong(a, n);
		cout << endl << " So chinh phuong trong mang a la:  " << kq;
		break;

	case 6:
		cout << endl << " 6. Dem so lan xuat hien cua phan tu x bat dau tu vi tri cho truoc";
		cout << endl << "\n Nhap vao 1 vi tri bat ki:  ";
		cin >> vt;
		cout << endl << " Nhap vao 1 so x bat ki:  ";
		cin >> x;
		kq = DemSoLanXuatHienX(a, n, x, vt);
		cout << endl << " So lan xuat hien cua x "<< x <<" tu vi tri " << vt << " la:  " << kq;
		cout << endl << " Xem lai mang ban dau:  \n";
		XuatMang(a, n);
		break;


	default:
		break;
	}
	cout << endl << "\n";
	system("pause");
}
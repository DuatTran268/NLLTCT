#pragma once
// khai báo nguyên mẫu các hàm xử lý menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);


// định nghĩa các hàm xử lý menu
void XuatMenu()
{
	cout << endl << "----------------- MENU -----------------";
	cout << endl << " 0. Thoat khoi chuong trinh";
	cout << endl << " 1. Nhap tu dong mang a";
	cout << endl << " 2. Xem du lieu mang a";
	cout << endl << " 3. Dem so lan xuat hien cua x trong a";
	cout << endl << " 4. Dem va xuat cac so nguyen to trong a";
	cout << endl << " 5. Tinh tong cac gia tri trong mang";
	cout << endl << " 6. Tinh tong cac gia tri chi xuat hien 1 lan trong mang";
	cout << endl << " 7. Tinh tong cac gia tri phan biet trong mang";
	cout << endl << "----------------- END ------------------";

}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << endl << " Nhap 1 so trong khoang tu [0 -> " << soMenu << " de chon chuc nang Menu:  ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
		{
			break;
		}
	}
	return stt;
}

void XuLyMenu(int menu, DaySo a, int& n)
{
	// khai bao bien
	int x, kq;
	system("cls");

	switch (menu)
	{
	case 0:
		cout << endl << " 0. Thoat khoi chuong trinh";
		break;

	case 1:
		cout << endl << " 1. Nhap tu dong mang a";
		cout << endl << " Nhap kich thuoc mang n:  ";
		cin >> n;
		NhapTuDong(a, n);	// gọi hàm nhập tự động sang truyền tham số a mảng, n số nguyên nhập vào
		cout << endl << " Day so moi sau khi nhap:   ";
		XuatMang(a, n);
		break;

	case 2:
		cout << endl << " 2. Xem du lieu mang a";
		cout << endl << " Xuat day so trong mang:  ";
		XuatMang(a, n);		// gọi hàm xuất mảng sau đó truyền tham số vài=o
		break;

	case 3:
		cout << endl << " 3. Dem so lan xuat hien cua x trong a";
		cout << endl << " Nhap gia tri can xet: x =  ";
		cin >> x;
		kq = Dem_X(a, n, x);
		cout << endl << " So lan " << x << " xuat hien trong mang a la kq =   " << kq << " lan";
		cout << endl << " Xem lai mang de kiem tra:  ";
		XuatMang(a, n);
		break;

	case 4: 
		cout << endl << "4. Dem va xuat cac so nguyen to trong a";
		kq = DemSoNguyenTo(a, n);
		if (kq)
			cout << "\n So luong cac so nguyen to trong a : kq = " << kq << " so: ";
		else
			cout << "\n Khong co so nguyen to nao trong a.";
			cout << "\n Xem lai mang hien hanh de kiem tra :\n";
		XuatMang(a, n);
		break;

	case 5: 
		cout << endl << " 5. Tinh tong cac phan tu trong mang";
		cout << endl << " Mang ban dau la:  \n";
		XuatMang(a, n);
		cout << endl << " Tong cac phan tu trong mang la:  sum =  " << TinhTong(a,n);
		break;
		
	case 6: 
		cout << endl << " 6. Tinh tong cac phan tu chi xuat hien mot lan trong mang la: sum =  " << TinhTongDuyNhat(a,n);
		cout << endl << " Xem lai mang ban dau la:  \n";
		XuatMang(a, n);
		break;

	case 7: 
		cout << endl << " 7. Tinh tong cac phan tu phan biet trong mang:  ";
		kq = TinhTongPhanBiet(a, n);
		cout << endl << " Tong cac phan tu phan biet trong mang a la : sum =  " << kq;
		cout << endl << " xem lai mang ban dau:  \n";
		XuatMang(a, n);
		break;


	default:
		break;
	}
	_getch();
}



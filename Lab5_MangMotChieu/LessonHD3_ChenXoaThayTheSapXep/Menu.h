#pragma once
// khai báo nguyên mẫu hàm các hàm xử lý trong menu




// định nghĩa hàm
void XuatMenu()
{
	cout << endl << "--------------- MENU ---------------";
	cout << endl << " 0. Thoat khoi chuong trinh";
	cout << endl << " 1. Nhap tu dong day a";
	cout << endl << " 2. Xem du lieu day a";
	cout << endl << " 3. Chen x vao dau day";
	cout << endl << " 4. Xoa phan tu dau day";
	cout << endl << " 5. Cay phan tu dau day roi chen vao cuoi day";
	cout << endl << " 6. Thay the cac gia tri trong a bang gia tri y";
	cout << endl << " 7. Sap day tang dan";
	cout << endl << " 8. Sap day theo yeu cau : Duong Tang - Am Giam-Khong";
	cout << endl << "----------------- END ---------------";

}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << endl << " Nhap vao chuc nang menu tu 0 -> " << soMenu << " de chon chuc nang Menu:  ";
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
	int x,y;
	system("cls");
	switch (menu)
	{
	case 0:
		cout << endl << " 0. Thoat chuong trinh";
		break;

	case 1:
		cout << endl << " 1. Nhap tu dong";
		NhapTuDong(a, n);	// gọi hàm nhập tự động sau đó truyền tham số vào
		cout << endl << " Day so moi nhap:  \n";
		XuatMang(a, n);
		break;

	case 2: 
		cout << endl << " 2. Xem du lieu day a";
		cout << endl << " Xuat day so ra:  \n";
		XuatMang(a, n);
		break;

	case 3: 
		cout << endl << " 3. Chen x vao dau day\n";
		cout << endl << " Kich thuoc mang ban dau sau khi nhap: n =  " << n;
		cout << endl << " Day so cua mang ban dau:  \n";
		XuatMang(a, n);
		cout << endl << "\n Nhap gia tri can chen vao dau mang: x =  ";
		cin >> x;
		ChenDauDay(a, n, x);
		cout << endl << "\n\n Kich thuoc mang sau khi chen them la: n =  " << n;
		cout << endl << " Day so ket qua sau khi chen " << x << " vao dau day la :  \n";
		XuatMang(a, n);
		break;

	case 4:
		cout << endl << " 4. Xoa phan tu cuoi cung cua day";
		cout << endl << "\n Mang ban dau gom " << n << " phan tu: \t";
		XuatMang(a, n);
		XoaDauDay(a, n);
		cout << endl << "\n Mang sau khi xoa con " << n << " phan tu, xuat mang ra la:  \n";
		XuatMang(a, n);
		break;

	case 5:
		cout << endl << " 5. Cat phan tu dau day roi chen vao cuoi day";
		cout << endl << " Xuat mang ban dau co " << n << " phan tu la:  ";
		XuatMang(a, n);
		CatDau_ChenCuoi(a, n);
		cout << endl << "\n Mang sau khi cat gia tri dau roi chen vao gia tri cuoi day la:  \n";
		XuatMang(a, n);
		break;

	case 6:
		cout << endl << " 6. Thay the gia tri x trong a bang gia tri y";
		cout << endl << "\n Mang ban dau co " << n << " phan tu :  ";
		XuatMang(a, n);
		cout << endl << "\n Nhap gia tri thay the tu mang ban dau:  x =  ";
		cin >> x;
		cout << endl << " Nhap gia tri thay the cho mang moi:  y =  ";
		cin >> y;
		Thay_X_Bang_Y(a, n, x, y);
		cout << endl << "\n Day so ket qua say khi thay x = " << x << " bang gia tri y = " << y << " la:  \n";
		XuatMang(a, n);
		break;
		
	case 7:
		cout << endl << " 7. Sap day tang dan";
		cout << endl << " Mang ban dau la \n";
		XuatMang(a, n);
		SappTang(a, n);
		cout << endl << "\n Day so mang sau khi sap xep tang la: \n";
		XuatMang(a, n);
		break;

	default:
		break;
	}
	cout << endl << "\n";
	system("pause");
}
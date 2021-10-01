#pragma once

void XuatMenu() {
	cout << endl << "\n------------ KY THUAT KIEM TRA MANG --------------";
	cout << endl << " 0. Thoat chuong trinh";
	cout << endl << " 1. Nhap tu dong mang";
	cout << endl << " 2. Nhap mang tu ban phim";
	cout << endl << " 3. Xuat mang vua nhap ";
	cout << endl << " 4. Kiem tra gia tri x nhap vao co trong mang";
	cout << endl << " 5. Kiem tra vi tri nhap vao co ton tai trong mang";
	cout << endl << " 6. Kiem tra xem mang co phai la so toan duong";
	cout << endl << " 7. Kiem tra so nguyen to trong mang";
	cout << endl << " 8. Kiem tra so chinh phuong trong mang";
	cout << endl << "------------------------ END ----------------------";
}

int ChonMenu(int soMenu) {
	int stt;
	for (;;) {
		system("cls");
		XuatMenu();
		cout << endl << "\n Nhap vao so tu 0 -> " << soMenu << " de chon chuc nang MENU:  ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(MANG a, int menu, int& n) {
	int x, vt;
	system("cls");
	switch (menu)
	{
	case 0:
		cout << endl << " 0. Thoat chuong trinh";
		return;

	case 1:
		cout << endl << " 1. Nhap tu dong mang";
		NhapMangTuDong(a, n);
		XuatMang(a, n);
		break;

	case 2:
		cout << endl << " 2. Nhap mang bang tay";
		NhapTay(a, n);
		XuatMang(a, n);
		break;

	case 3:
		cout << endl << " 3. Xuat mang";
		cout << endl << "\n Mang moi nhap vao la:";
		XuatMang(a, n);
		break;

	case 4:
		cout << endl << " 4. Kiem tra gia tri x nhap vao co trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao gia tri x =  ";
		cin >> x;
		KiemTraGiaTriXCoTrongMang(a, n, x);
		break;

	case 5:
		cout << endl << " 5. Kiem tra vi tri nhap vao co ton tai trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao vi tri de kiem tra:  ";
		cin >> vt;
		KiemTraMangCoTonTaiViTri(a, n, vt);
		break;

	case 6:
		cout << endl << " 6. Kiem tra mang nhap vao la mang nao";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		KiemTraMangCoPhaiLaSoToanDuong(a, n);
		break;

	case 7:
		cout << endl << " 7. Kiem tra so nguyen to";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Xuat mang cac so nguyen to";
		XuatCacSoNguyenTo(a, n);
		break;

	case 8:
		cout << endl << " 8. Kiem tra cac so chinh phuong";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Xuat mang cac so chinh phuong";
		XuatCacSoChinhPhuong(a, n);
		break;


	default:
		break;
	}
	cout << endl << "\n";
	system("pause");
}
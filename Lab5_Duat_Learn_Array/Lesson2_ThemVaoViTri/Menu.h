#pragma once

void XuatMenu() {
	cout << endl << "\n---------- KY THUAT THEM (chen) VAO VI TRI -------------";
	cout << endl << " 0. Thoat chuong trinh";
	cout << endl << " 1. Nhap tu dong mang";
	cout << endl << " 2. Nhap bang tay";
	cout << endl << " 3. Xuat mang";
	cout << endl << " 4. Them vao vi tri ";
	cout << endl << " 5. Them vao dau mang";
	cout << endl << " 6. Them vao cuoi mang";
	cout << endl << "------------------------ END ----------------------------";

}

int ChonMenu(int soMenu) {
	int stt;
	for (;;)
	{
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
	system("cls");
	int vt,x;
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
		cout << endl << " 2. Nhap bang tay";
		NhapTuBanPhim(a, n);
		XuatMang(a, n);

		break;

	case 3:
		cout << endl << " 3. Xuat mang vua nhap";
		cout << endl << "\n Mang moi nhap gan day nhat la: ";
		XuatMang(a, n);
		break;

	case 4:
		cout << endl << " 4. Them vao vi tri";
		cout << endl << "\n Xem mang ban dau:";
		XuatMang(a, n);
		do
		{
			cout << endl << "\n Nhap vao vi tri can them:  ";
			cin >> vt;
		} while (vt <0 || vt > n);
		cout << endl << "\n Nhap vao gia tri can them:  ";
		cin >> x;
		cout << endl << "\n Mang sau khi nhap gia tri x = " << x << " vao vi tri = " << vt << " la: ";
		ThemVaoViTri(a, n, x, vt);
		XuatMang(a, n);
		break;

	case 5:
		cout << endl << " 5. Them vao dau mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao gia tri x can them vao dau mang:  ";
		cin >> x;
		ThemVaoDauMang(a, n, x);
		cout << endl << " Mang sau khi them x = " << x << " vao vi tri dau mang la:";
		XuatMang(a, n);
		break;

	case 6:
		cout << endl << " 6. Them vao cuoi mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao gia tri x can them vao cuoi mang: ";
		cin >> x;
		ThemVaoCuoiMang(a, n, x);
		cout << endl << " Mang sau khi them x = " << x << " vao vi tri cuoi mang la: ";
		XuatMang(a, n);
		break;

	default:
		break;
	}
	cout << endl << "\n";
	system("pause");
}
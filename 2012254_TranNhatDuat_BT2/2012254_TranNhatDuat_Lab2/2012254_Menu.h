#pragma once
void XuatMenu() {
	cout << endl << "\n ----------- MENU ---------------";
	cout << endl << " 0. Thoat khoi chuong trinh";
	cout << endl << " 1. Tao day so nhap tu dong [-8; 8]";
	cout << endl << " 2. Xuat day so ra man hinh";
	cout << endl << " 3. Tinh tich cac phan tu trong day so";
	cout << endl << " 4. Tinh gia tri lon nhat cua day so";
	cout << endl << " 5. Dem so lan gia tri lon nhay cua day so a xuat hien trong a";
	cout << endl << "\n----------------- END -------------";

}

int ChonMenu(int soMenu) {
	int stt;
	for (;;) {
		system("cls");
		XuatMenu();
		cout << endl << "\n Nhap vao so tu 0 -> " << soMenu << " de chon chuc nang Menu:  ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu) {
			break;
		}
	}
	return stt;
}

void XuLyMenu(DaySo a, int menu, int& n) {
	system("cls");
	int kq;
	int count = 0;
	switch (menu)
	{
	case 0:
		cout << endl << " 0. Thoat chuong trinh";
		return;

	case 1:
		cout << endl << " 1. Nhap mang tu dong";
		NhapDaySoTuDong(a, n);
		XuatDaySo(a, n);
		break;

	case 2:
		cout << endl << " 2. Xuat day so ra man hinh ";
		XuatDaySo(a, n);
		break;

	case 3:
		cout << endl << " 3. Tinh tich cac phan tu trong day so ";
		cout << endl << "\n Xem lai day so ban dau nhap vao";
		XuatDaySo(a, n);
		kq = TinhTichCacPhanTuTrongDaySo(a, n);
		cout << endl << "\n Tich cac phan tu trong day so la:  " << kq;
		break;

	case 4:
		cout << endl << " 4. Tinh gia tri lon nhat cua day so";
		cout << endl << "\n Xem lai day so ban dau nhap vao";
		XuatDaySo(a, n);
		kq = TinhGiaTriLonNhatCuaDaySo(a, n);
		cout << endl << "\n Gia tri lon nhat cua day so la:  " << kq;
		break;

	case 5:
		cout << endl << " 5. Dem so lan gia tri lon nhat cua day so a xuat hien trong a";
		count = DemSoLanXuatHienCuaGiaTriLonNhat(a, n);
		cout << endl << "\n So lan xuat hien cua gia tri max trong mang la:  " << count << " lan .";

		break;
	default:
		cout << endl << "\n Khong ton tai chuc nang da chon, vui long thu nhap lai !";
		break;
	}
	cout << endl << "\n";
	system("pause");
}
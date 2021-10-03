#pragma once
void XuatMenu() {
	cout << endl << "\n---------- CAC KY THUAT XU LY MANG ----------";
	cout << endl << " 0. Thoat chuong trinh";
	cout << endl << " 1. Nhap tu dong mang";
	cout << endl << " 2. Nhap mang bang tay";
	cout << endl << " 3. Xuat mang da nhap";
	cout << endl << " 4. Sap xep mang tang dan";
	cout << endl << " 5. Sap xep mang giam dan";
	cout << endl << " 6. Tinh tong cac so duong";
	cout << endl << " 7. Tinh tong cac so am";
	cout << endl << " 8. Tinh tong cac so chan";
	cout << endl << " 9. Tinh tong cac so le";
	cout << endl << " 10. Tinh tich cac so duong";
	cout << endl << " 11. Tinh tich cac so am";
	cout << endl << " 12. Tinh tich cac so chan";
	cout << endl << " 13. Tinh tich cac so le";
	cout << endl << " 14. Tinh tong cac so nguyen to";
	cout << endl << " 15. Tinh tich cac so nguyen to";
	cout << endl << " 16. Tinh tong cac so chinh phuong";
	cout << endl << " 17. Tinh tich cac so chinh phuong";

	cout << endl << "------------------ END ---------------------";
}

int ChonMenu(int soMenu) {
	int stt;
	for (;;) {
		system("cls");
		XuatMenu();
		cout << endl << "\n Nhap so tu 0 -> " << soMenu << " de chon chuc nang MENU:  ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;

	}
	return stt;
}

void XuLyMenu(MANG a, int menu, int& n) {
	system("cls");
	int kq;
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
		NhapMangBangTay(a, n);
		XuatMang(a, n);
		break;

	case 3:
		cout << endl << " 3. Xuat mang da nhap";
		XuatMang(a, n);
		break;

	case 4:
		cout << endl << " 4. Sap xep mang tang dan";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		SapXepMangTangDan(a, n);
		cout << endl << "\n Mang sau khi sap xep tang dan";
		XuatMang(a, n);
		break;

	case 5:
		cout << endl << " 5. Sap xep mang giam dan";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Mang sau khi sap xep giam dan la";
		SapXepMangGiamDan(a, n);
		XuatMang(a, n);
		break;

	case 6:
		cout << endl << " 6. Tinh tong cac so duong";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		kq = TinhTongCacSoDuong(a, n);
		cout << endl << "\n Tong cua cac so duong la:  " << kq;
		break;
		
	case 7:
		cout << endl << " 7. Tinh tong cac so am";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		kq = TinhTongCacSoAm(a, n);
		cout << endl << "\n Tong cua cac so am la:  " << kq;
		break;

	case 8:
		cout << endl << " 8. Tinh tong cac so le";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		kq = TinhTongCacSoLe(a, n);
		cout << endl << "\n Tong cua cac so le la:  " << kq;
		break;

	case 9:
		cout << endl << " 9. Tinh tong cac so chan";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		kq = TinhTongCacSoChan(a, n);
		cout << endl << "\n Tong cac so chan la:  " << kq;
		break;

	case 10:
		cout << endl << " 10. Tinh tich cac so duong";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		kq = TinhTichCacSoDuong(a, n);
		cout << endl << "\n Tich cac so duong trong mang la:  " << kq;
		break;

	case 11:
		cout << endl << " 11. Tinh tich cac so am";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		kq = TinhTichCacSoAm(a, n);
		cout << endl << "\n Tich cac so am trong mang la:  " << kq;
		break;

	case 12:
		cout << endl << " 12. Tinh tich cac so chan";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		kq = TinhTichCacSoChan(a, n);
		cout << endl << "\n Tich cac so chan trong mang la:  " << kq;
		break;

	case 13:
		cout << endl << " 13. Tinh tich cac so le";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		kq = TinhTichCacSoLe(a, n);
		cout << endl << "\n Tich cac so le trong mang la:  " << kq;
		break;

	case 14:
		cout << endl << " 14. Tinh tong cac so nguyen to";
		cout << endl << "\n Xem lai mang ban dau:";
		XuatMang(a, n);
		kq = TinhTongCacSoNguyenTo(a, n);
		cout << endl << "\n Tong cua cac so nguyen to trong mang la:  " << kq;
		break;

	case 15:
		cout << endl << " 15. Tinh tich cac so nguyen to";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		kq = TinhTichCuaCacSoNguyenToTrongMang(a, n);
		cout << endl << "\n Tich cua cac so nguyen to trong mang la:  " << kq;
		break;

	case 16:
		cout << endl << " 16. Tinh tong cac so chinh phuong";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		kq = TinhTongSoChinhPhuong(a, n);
		cout << endl << "\n Tong cua cac co chinh phuong la:  " << kq;
		break;

	case 17:
		cout << endl << " 17. Tinh tich cac so chinh phuong";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		kq = TinhTichSoChinhPhuong(a, n);
		cout << endl << "\n Tich cua cac so chinh phuong trong mang la:  " << kq;
		break;


	default:
		break;
	}
	cout << endl << "\n";
	system("pause");
}
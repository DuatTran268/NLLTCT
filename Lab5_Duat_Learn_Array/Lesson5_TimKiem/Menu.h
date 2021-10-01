#pragma once
void XuatMenu() {
	cout << endl << "\n------------ KY THUAT TIM KIEM -------------";
	cout << endl << " 0. Thoat chuong trinh";
	cout << endl << " 1. Nhap tu dong mang";
	cout << endl << " 2. Nhap mang bang tay";
	cout << endl << " 3. Xuat mang vua nhap";
	cout << endl << " 4. Tim vi tri cua phan tu x nhap vao";
	cout << endl << " 5. Tim gia tri x trong mang ";
	cout << endl << " 6. Tim gia tri lon nhat trong mang";
	cout << endl << " 7. Tim gia tri nho nat trong mang";
	cout << endl << " 8. Tim cac so le trong mang";
	cout << endl << " 9. Tim cac so chan trong mang";
	cout << endl << " 10. Tim cac so nguyen to trong mang";
	cout << endl << " 11. Tim cac so chinh phuong trong mang";
	cout << endl << "-------------------- END ----------------------";
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
	int x;
	int kq;
	system("cls");
	switch (menu)
	{
	case 0:
		cout << endl << " 0. Thoat chuong trinh";
		return;

	case 1:
		cout << endl << " 1. Nhap tu dong mang";
		NhapTuDong(a, n);
		XuatMang(a, n);
		break;

	case 2:
		cout << endl << " 2. Nhap mang bang tay";
		NhapMangBangTay(a, n);
		XuatMang(a, n);
		break;

	case 3:
		cout << endl << " 3. Xuat mang vua nhap";
		XuatMang(a, n);
		break;

	case 4:
		cout << endl << " 4. Tim vi tri trong mang co ton tai ";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao vi tri can kiem tra:  ";
		cin >> x;
		TimViTriCuaPhanTuXNhapVao(a, n, x);
		break;

	case 5:
		cout << endl << " 5. Tim gia tri x nhap vao trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao gia tri x can tim:  ";
		cin >> x;
		TimGiaTriXTrongMang(a, n, x);
		break;
	
	case 6:
		cout << endl << " 6. Tim gia tri lon nhat trong mang";
		cout << endl << "\n Xem mang ban dau:";
		XuatMang(a, n);
		kq = TimGiaTriLonNhatTrongMang(a, n);
		cout << endl << "\n Gia tri lon nhat trong mang la:  " << kq;
		break;

	case 7:
		cout << endl << " 7. Tim gia tri nho nhat trong mang";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		kq = TimGiaTriNhoNhatTrongMang(a, n);
		cout << endl << "\n Gia tri nho nhat trong mang la:  " << kq;
		break;

	case 8:
		cout << endl << " 8. Tim cac so le trong mang";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		TimCacSoLeTrongMang(a, n);
		break;

	case 9:
		cout << endl << " 9. Tim cac so chan trong mang";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		TimCacSoChanTrongMang(a, n);
		break;

	case 10:
		cout << endl << " 10. Tim cac so nguyen to trong mang";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		XuatCacSoNguyenTo(a, n);
		break;

	case 11:
		cout << endl << " 11. Tim cac so chinh phuong trong mang";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		XuatSoChinhPhuong(a, n);
		break;

	default:
		break;
	}
	cout << endl << "\n";
	system("pause");
}
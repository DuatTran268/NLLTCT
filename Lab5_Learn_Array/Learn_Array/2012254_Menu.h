#pragma once

void XuatMenu() {
	cout << endl << "\n-------------- CAC KY THUAT TREN MANG --------------";
	cout << endl << " 0. Thoat chuong trinh";
	cout << endl << " 1. Nhap tu dong ";
	cout << endl << " 2. Nhap tu ban phim";
	cout << endl << " 3. Xem mang vua nhap";
	cout << endl << " 4. Kiem tra mang co phai so toan duong ko";
	cout << endl << " 5. Tim gia tri lon nhat, nho nhat cua mang";
	cout << endl << " 6. Xuat ra mang cac so duong, so am trong mang";
	cout << endl << " 7. Sap xep mang tang dan, giam dan";
	cout << endl << " 8. Tim kiem phan tu trong mang";
	cout << endl << " 9. Them mot phan tu vao mang";
	cout << endl << " 10. Xoa phan tu khoi mang";
	cout << endl << "------------------------- END ------------------------";
}

int ChonMenu(int soMenu) {
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << endl << "\n Nhap vao so tu 0 -> " << soMenu << " chon chuc nang Menu:  ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(MANG a, int menu, int& n) {
	int kq,x,vt;
	system("cls");
	switch (menu)
	{
	case 0:
		cout << endl << " 0. Thoat chuong trinh";
		return;
	case 1:
		cout << endl << " 1. Nhap tu dong ";
		NhapTuDong(a, n);
		cout << endl << " Xem mang vua nhap:";
		XuatMangVuaNhap(a, n);
		break;

	case 2:
		cout << endl << " 2. Nhap tu ban phim";
		NhapTuKey(a, n);
		cout << endl << " Xem mang vua nhap: ";
		XuatMangVuaNhap(a, n);
		break;

	case 3:
		cout << endl << " 3. Xem mang vua nhap";
		cout << endl << "\n Xem mang vua nhap moi nhat";
		XuatMangVuaNhap(a, n);
		break;

	case 4:
		cout << endl << " 4. Kiem tra mang co phai so toan duong";
		cout << endl << "\n Mang ban dau:";
		XuatMangVuaNhap(a, n);
		cout << endl << "\n Kiem tra mang:";
		KiemTraMangCoPhaiMangDuong(a, n);
		break;

	case 5:
		cout << endl << " 5. Tim gia tri lon nhat, nho nhat cua mang";
		cout << endl << "\n Xem mang ban dau:";
		XuatMangVuaNhap(a, n);
		kq = TimGiaTriLonNhatCuaMang(a, n);
		cout << endl << "\n Mang co gia tri lon nhat la:  " << kq;
		kq = TimGiaTriNhoNhatCuaMang(a, n);
		cout << endl << "\n Mang co gia tri nho nhat la:  " << kq;
		break;

	case 6: 
		cout << endl << " 6. Xuat ra mang cac so duong, so am trong mang";
		cout << endl << "\n Xem mang ban dau:";
		XuatMangVuaNhap(a, n);
		cout << endl << "\n Xem mang cac so duong:\t";
		XuatRaSoDuongTrongMang(a, n);
		cout << endl << "\n Xem mang cac so am:\t";
		XuatRaSoAmTrongMang(a, n);
		break;

	case 7:
		cout << endl << " 6. Sap xep mang tang dan, giam dan";
		cout << endl << "\n Mang ban dau";
		XuatMangVuaNhap(a, n);
		cout << endl << "\n Mang sau khi sap xep tang dan la:";
		SapXepMangTangDan(a, n);
		XuatMangVuaNhap(a, n);
		cout << endl << "\n Mang sau khi sap xep giam dan la:";
		SapXepMangGiamDan(a, n);
		XuatMangVuaNhap(a, n);
		break;

	case 8:
		cout << endl << " 7. Tim kiem phan tu trong mang";
		XuatMangVuaNhap(a, n);
		cout << endl << "\n Nhap vao gia tri x can tim: x =  ";
		cin >> x;
		TimKiemPhanTuTrongMang(a, n, x);
		break;

	case 9:
		cout << endl << " 8. Them phan tu vao vi tri";
		cout << endl << "\n Mang ban dau";
		XuatMangVuaNhap(a, n);
		cout << endl << "\n Nhap vao vi tri can them:  ";
		cin >> vt;
		cout << endl << "\n Nhap vao gia tri can them:  ";
		cin >> x;
		ThemPhanTuVaoMang(a, n, x, vt);
		cout << endl << " Mang sau khi them vao gia tri x = " << x << " vao vi tri xt = " << vt <<" la:  ";
		XuatMangVuaNhap(a, n);

		ThemVaoDauMang(a, n, x);
		cout << endl << "\n Mang sau khi them vao dau mang:";
		XuatMangVuaNhap(a, n);

		ThemVaoCuoiMang(a, n, x);
		cout << endl << "\n Mang sau khi them vao cuoi mang";
		XuatMangVuaNhap(a, n);
		break;

	case 10:
		cout << endl << " 9. Xoa tai vi tri";
		cout << endl << "\n Mang ban dau la:";
		XuatMangVuaNhap(a, n);
		cout << endl << "\n Nhap vao vi tri can xoa:  ";
		cin >> vt;
		cout << endl << "\n Mang sau khi xoa phan tu tai vi tri = " << vt << " la:";
		XoaTaiViTri(a, n, vt);
		XuatMangVuaNhap(a, n);
		break;

	default:
		break;
	}
	cout << endl << "\n";
	system("pause");		// dừng màn hình chờ nhấn phím bất kì
}
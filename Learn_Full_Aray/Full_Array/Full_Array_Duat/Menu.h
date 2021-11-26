#pragma once
void XuatMenu() {
	cout << endl << "\n --------- CAC KY THUAT XU LY MANG ------------";
	cout << endl << " 0. Thoat chuong trinh";
	cout << endl << " 1. Nhap mang tu dong";
	cout << endl << " 2. Nhap mang bang tay";
	cout << endl << " 3. Xuat mang da nhap";
	// search array element
	cout << endl << " 4. Tim vi tri cua phan tu x trong mang nhap vao";
	cout << endl << " 5. Tim gia tri x trong mang";
	cout << endl << " 6. Tim gia tri nho nhat trong mang";
	cout << endl << " 7. Tim gia tri lon nhat trong mang";
	cout << endl << " 8. Tim so le trong mang";
	cout << endl << " 9. Tim so chan trong mang";
	cout << endl << " 10. Tim so am trong mang";
	cout << endl << " 11. Tim so duong trong mang";
	cout << endl << " 12. Tim tat ca cac so nguyen to trong mang";
	cout << endl << " 13. Tim tat ca cac so chinh phuong trong mang";
	// thêm vào vị trí
	cout << endl << " 14. Them gia tri x vao vi tri i";
	cout << endl << " 15. Them gia tri vao dau mang";
	cout << endl << " 16. Them gia tri vao cuoi mang";

	cout << endl << "\n-------------------- END ------------------";


}

int ChonMenu(int soMenu) {
	int stt;
	for (;;) {
		system("cls");
		XuatMenu();
		cout << endl << "\n Nhap vao so tu 0 -> " << soMenu << " de chon chuc nang Menu:  ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(Array a, int menu, int& n) {
	system("cls");
	int x = 0;
	int kq, vt;
	int i = 0;
	switch (menu)
	{
	case 0:
		cout << endl << " 0. Thoat chuong trinh";
		return;

	case 1: 
		cout << endl << " 1. Nhap mang tu dong";
		NhapMangTuDong(a, n);
		XuatMang(a, n);
		break;
		
	case 2:
		cout << endl << " 2. Nhap mang tu ban phim";
		NhapMangTuKey(a, n);
		XuatMang(a, n);
		break;

	case 3:
		cout << endl << " 3. Xuat mang da nhap";
		XuatMang(a, n);
		break;

	case 4:
		cout << endl << " 4. Tim vi tri cua phan tu x nhap vao";
		cout << endl << "\n Mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao gia tri cua mang:  ";
		cin >> x;
		TimViTriCuaPhanTuXNhapVao(a, n, x);
		break;

	case 5:
		cout << endl << "5. Tim nhap vao vi tri i xuat ra gia tri x trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		/*do
		{

		} while (i <= 0);*/
		cout << endl << "\n Nhap vao vi tri i trong mang";
		cin >> i;
		NhapVaoViTriIXuatRaGiaTriX(a, n, x);
		break;

	case 6:
		cout << endl << " 6. Tim gia tri nho nhat trong mang";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		kq = TimGiaTriNhoNhatTrongMang(a, n);
		cout << endl << "\n Gia tri nho nhat trong mang la: " << kq;
		break;

	case 7:
		cout << endl << " 7. Tim gia tri lon nhat trong mang";
		cout << endl << "\n Xem laii mang ban dau";
		XuatMang(a, n);
		kq = TimGiaTriLonNhatTrongMang(a, n);
		cout << endl << "\n Gia tri lon nhat trong mang la: " << kq;
		break;

	case 8:
		cout << endl << " 8. Tim cac so le trong mang";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		TimSoLeTrongMang(a, n);
		break;

	case 9: 
		cout << endl << "9. Tim cac chan trong mang";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		TimSoChanTrongMang(a, n);
		break;

	case 10:
		cout << endl << " 10. Tim cac so am trong mang";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		TimSoAmTrongMang(a, n);
		break;

	case 11:
		cout << endl << " 11. Tim cac so duong trong mang";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		TimSoDuongTrongMang(a, n);
		break;

	case 12:
		cout << endl << " 12. Tim cac so nguyen to trong mang";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		XuatCacSoNguyenTo(a, n);
		break;

	case 13:
		cout << endl << " 13. Tim cac so chinh phuong trong mang";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		XuatSoChinhPhuong(a, n);
		break;

	case 14:
		cout << endl << " 14. Them gia tri x vao vi tri i";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		do
		{
			cout << endl << "\n Nhap vao vi tri can them: i =  ";
			cin >> vt;
		} while (vt <= 0 || vt > n);
		cout << endl << "\n Nhap vao gia tri can them:  ";
		cin >> x;
		cout << endl << "\n Mang say khi nhap vao gia tri x = " << x << " vao vi tri i = " << i << " la:  ";
		ThemGiaTriVaoViTri(a, n, x, vt);
		XuatMang(a, n);
		break;

	case 15:
		cout << endl << " 15. Them gia tri vao dau mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao gia tri x = " << x << " can them vao dau mang la: ";
		cin >> x;
		ThemGiaTriVaoDauMang(a, n, x);
		cout << endl << "\n Mang sau khi them x = " << x << " cann them vao dau mang la: ";
		XuatMang(a, n);
		break;

	case 16:
		cout << endl << " 16. Them gia tri vao cuoi mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao gia tri x = " << x << " can them vao cuoi mang la: ";
		cin >> x;
		ThemGiaTriVaoCuoiMang(a, n, x);
		cout << endl << "\n Mang sau khi them x = " << x << " vao vi tri cuoi mang la: ";
		XuatMang(a, n);
		break;

	default:
		break;
	}
	cout << endl << "\n";
	system("pause");
}
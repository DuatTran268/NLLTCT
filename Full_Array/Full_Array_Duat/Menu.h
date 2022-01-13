#pragma once
void XuatMenu() {
	cout << endl << "\n --------- CAC KY THUAT XU LY MANG ------------";
	cout << endl << " 0.  Thoat chuong trinh";
	cout << endl << " 1.  Nhap mang tu dong";
	cout << endl << " 2.  Nhap mang bang tay";
	cout << endl << " 3.  Xuat mang da nhap";
	// tìm kiếm  (search array element)
	cout << endl << " 4.  Tim vi tri cua phan tu x trong mang nhap vao";
	cout << endl << " 5.  Tim gia tri x trong mang";
	cout << endl << " 6.  Tim gia tri nho nhat trong mang";
	cout << endl << " 7.  Tim gia tri lon nhat trong mang";
	cout << endl << " 8.  Tim so le trong mang";
	cout << endl << " 9.  Tim so chan trong mang";
	cout << endl << " 10. Tim so am trong mang";
	cout << endl << " 11. Tim so duong trong mang";
	cout << endl << " 12. Tim tat ca cac so nguyen to trong mang";
	cout << endl << " 13. Tim tat ca cac so chinh phuong trong mang";
	// thêm vào vị trí  (add to position)
	cout << endl << " 14. Them gia tri x vao vi tri i";
	cout << endl << " 15. Them gia tri vao dau mang";
	cout << endl << " 16. Them gia tri vao cuoi mang";
	// Kiểm tra (check)
	cout << endl << " 17. Kiem tra gia tri x nhap vao co ton tai trong mang";
	cout << endl << " 18. Kiem tra vi tri nhap vao co ton tai trong mang";
	cout << endl << " 19. Kiem tra mang co phai la mang toan duong";
	cout << endl << " 20. Kiem tra cac so nguyen to trong mang";
	cout << endl << " 21. Kiem tra so chinh phuong trong mang";
	// sắp xếp sort
	cout << endl << " 22. Sap xep mang tang dan";
	cout << endl << " 23. Sap xep mang giam dan";
	// Tính tổng sum 
	cout << endl << " 24. Tinh tong cac so duong";
	cout << endl << " 25. Tinh tong cac so am";
	cout << endl << " 26. Tinh tong cac so chan";
	cout << endl << " 27. Tinh tong cac so le";
	cout << endl << " 28. Tinh tong cac so nguyen to";
	cout << endl << " 29. Tinh tong cac so chinh phuong";
	// tính tích
	cout << endl << " 30. Tinh tich cac so duong";
	cout << endl << " 31. Tinh tich cac so am";
	cout << endl << " 32. Tinh tich cac so chan";
	cout << endl << " 33. Tinh tich cac so le";
	cout << endl << " 34. Tinh tich cac so nguyen to";
	cout << endl << " 35. Tinh tich cac so chinh phuong";
	
	// xóa delete
	cout << endl << " 36. Xoa phan tu co chi so k (xoa vt) trong mang";
	cout << endl << " 37. Xoa so co gia tri x nhap vao trong mang";
	cout << endl << " 38. Xoa so gia tri x nhap vao trong mang";
	cout << endl << " 39. Xoa phan tu dau mang va cuoi mang";
	cout << endl << " 40. Xoa so lon nhat trong mang";
	cout << endl << " 41. Xoa so nho nhat trong mang";
	cout << endl << " 42. Xoa cac so am trong mang";
	cout << endl << " 43. Xoa cac so duong trong mang";
	cout << endl << " 44. Xoa cac so chan trong mang";
	cout << endl << " 45. Xoa cac so le trong mang";
	cout << endl << " 46. Xoa cac so chinh phuong trong mang";
	cout << endl << " 47. Xoa cac so nguyen to trong mang";
	cout << endl << " 48. Xoa phan tu trung voi x nhap vao";
	cout << endl << " 49. Xoa cac so trung nhau va chi lay so xuat hien 1 lan";
	cout << endl << " 50. Xoa tat ca cac phan tu xuat hien nhieu hon 1 lan";


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
	int x;
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
	case 17:
		cout << endl << " 17. Kiem tra gia tri x nhap vao co ton tai";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao gia tri x = ";
		cin >> x;
		KiemTraGiaTriXTrongMang(a, n, x);
		break;
	case 18:
		cout << endl << " 18. Kiem tra vi tri nhap vao co ton tai trong mang";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao vi tri kiem tra:  ";
		cin >> vt;
		KiemTraViTriCoTonTaiTrongMang(a, n, vt);
		break;
	case 19:
		cout << endl << " 19. Kiem tra mang co phai so toan duong";
		cout << endl << "\n Xem lai mang ban dau";
		XuatMang(a, n);
		KiemTraMangCoToanSoDuong(a, n);
		break;
	case 20:
		cout << endl << " 20. Kiem tra cac so nguyen to trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Xuat mang cac so nguyen to";
		XuatCacSoNguyenTo(a, n);
		break;
	case 21:
		cout << endl << " 21. Kiem tra cac so chinh phuong trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Xuat mang cac so chinh phuong";
		XuatSoChinhPhuong(a, n);
		break;
	case 22:
		cout << endl << " 22. Sap xep mang tang dan";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		SapXepMangTangDan(a, n);
		cout << endl << "\n Mang sau khi sap xep tang dan la:";
		XuatMang(a, n);
		break;
	case 23:
		cout << endl << " 23. Sap xep mang giam dan";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		SapXepMangGiamDan(a, n);
		cout << endl << "\n Mang sau khi sap xep giam dan la:";
		XuatMang(a, n);
		break;
	case 24: 
		cout << endl << " 24. Tinh tong cac so duong";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		kq = TinhTongCacSoDuong(a, n);
		cout << endl << "\n Tong cua cac so duong trong mang la:  " << kq;
		break;
	case 25:
		cout << endl << " 25. Tinh tong cac so am";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		kq = TinhTongCacSoAm(a, n);
		cout << endl << "\n Tong cua cac so am trong mang la: " << kq;
		break;
	case 26:
		cout << endl << " 26. Tinh tong cac so chan";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		kq = TinhTongCacSoChan(a, n);
		cout << endl << "\n Tong cua cac so chan trong mang la:  " << kq;
		break;
	case 27:
		cout << endl << " 27. Tinh tong cac so le";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		kq = TinhTongCacSoLe(a, n);
		cout << endl << "\n Tong cua cac so le trong mang la: " << kq;
		break;
	case 28:
		cout << endl << " 28. Tinh tong cac so nguyen to";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		kq = TinhTongCacSoNguyenTo(a, n);
		cout << endl << "\n Tong cua cac so nguyen to trong mang la:  " << kq;
		break;
	case 29:
		cout << endl << " 29. Tinh tong cac so chinh phuong";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		kq = TinhTongCacSoChinhPhuong(a, n);
		cout << endl << "\n Tong cua cac so chinh phuong trong mang la:  " << kq;
		break;
	case 30:
		cout << endl << "30. Tinh tich cac so duong";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		kq = TinhTichCacSoDuong(a, n);
		cout << endl << "\n Tich cac so duong trong mang la: " << kq;
		break;
	case 31: 
		cout << endl << " 31. Tinh tich cac so am";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		kq = TinhTichCacSoAm(a, n);
		cout << endl << "\n Tich cac so am trong mang la:  " << kq;
		break;
	case 32:
		cout << endl << " 32. Tinh tich cac so chan";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		kq = TinhTichCacSoChan(a, n);
		cout << endl << "\n Tich cac so chan trong mang la: " << kq;
		break;
	case 33:
		cout << endl << " 33. TInh tich cac so le";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		kq = TinhTichCacSoLe(a, n);
		cout << endl << "\n Tich cac so le trong mang la: " << kq;
		break;
	case 34: 
		cout << endl << " 34. Tinh tich cac so nguyen to";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		kq = TinhTichCacSoNguyenTo(a, n);
		cout << endl << "\n Tich cac so nguyen to trong mang la: " << kq;
		break;
	case 35:
		cout << endl << " 35. Tinh tich cac so chinh phuong";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		kq = TinhTichCacSoChinhPhuong(a, n);
		cout << endl << "\n Tich cac so chinh phuong trong mang la: " << kq;
		break;
	case 36: 
		cout << endl << " 36. Xoa phan tu co chi so k (xoa vt) trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		do
		{
			cout << endl << "\n Nhap vao vi tri can xoa trong mang:  ";
			cin >> vt;
		} while (vt <= 0 || vt > n);
		XoaTaiViTri(a, n, vt);
		cout << endl << " Mang sau khi xoa tai vi tri = " << vt << " la: ";
		XuatMang(a, n);
		break;
	case 37: 
		cout << endl << " 37. Xoa so co gia tri x nhap vao trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Nhap vap gia tri x trong mang can xoa: x = ";
		cin >> x;
		XoaGiaTriXTrongMangNhapVao(a, n, x);
		cout << endl << " Mang sau khi xoa vi tri x = " << x << " ra khoi mang la: ";
		XuatMang(a, n);
		break;
	case 38:
		cout << endl << " 38. Xoa so co gia tri x nhap vao trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao gia tri x trong mang can xoa:  ";
		cin >> x;
		XoaGiaTriXTrongMangNhapVao(a, n, x);
		cout << endl << "\n Mang sau khi xoa vi tri x = " << x << " ra khoi mang la:";
		XuatMang(a, n);
		break;
	case 39:
		cout << endl << " 39. Xoa phan tu dau mang va cuoi mang";
		cout << endl << "\n Xem mang ban dau ";
		XuatMang(a, n);
		cout << endl << "\n Xoa phan tu dau mang";
		XoaDauMang(a, n);
		XuatMang(a, n);
		cout << endl << "\n Xoa phan tu cuoi mang";
		XoaCuoiMang(a, n);
		XuatMang(a, n);
		break;
	case 40:
		cout << endl << " 40. Xoa so lon nhat trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Xoa so lon nhat trong mang";
		XoaSoLonNhatTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa so lon nhat trong mang";
		XuatMang(a, n);
		break;
	case 41:
		cout << endl << " 41. Xoa so nho nhat trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Xoa so nho nhat trong mang";
		XoaSoNhoNhatTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa so nho nhat trong mang";
		XuatMang(a, n);
		break;
	case 42:
		cout << endl << " 42. Xoa cac so am trong mang";
		cout << endl << "\n Xem mang ban dau ";
		XuatMang(a, n);
		cout << endl << "\n Xoa so am trong mang";
		XoaCacSoAmTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa cac so am trong mang";
		XuatMang(a, n);
		break;
	case 43:
		cout << endl << " 43. Xoa cac so duong trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		XoaCacSoDuongTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa so duong trong mang la";
		XuatMang(a, n);
		break;
	case 44:
		cout << endl << " 44. Xoa cac so chan trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		XoaCacSoChanTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa cac so chan trong mang la";
		XuatMang(a, n);
		break;
	case 45:
		cout << endl << " 45. Xoa cac so le trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		XoaCacSoLeTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa cac so le trong mang la";
		XuatMang(a, n);
		break;
	case 46:
		cout << endl << " 46. Xoa cac so chinh phuong trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		XoaCacSoLaSoChinhPhuong(a, n);
		cout << endl << "\n Mang sau khi xoa cac so chinh phuong trong mang la";
		XuatMang(a, n);
		break;
	case 47:
		cout << endl << " 47. Xoa cac so nguyen to trong mang";
		cout << endl << "\n Xem mang ban dau ";
		XuatMang(a, n);
		XoaCacSoLaSoNguyenTo(a, n);
		cout << endl << "\n Mang sau khi xoa cac so nguyen to trong mang la";
		XuatMang(a, n);
		break;
	case 48:
		cout << endl << " 48. Xoa phan tu trung voi x nhap vao";
		cout << endl << "\n Xem mang ban dau ";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao gia tri x trong mang can xoa x =  ";
		cin >> x;
		XoaPhanTuTrungVoiXNhapVao(a, n, x);
		cout << endl << "\n Mang sau khi xoa cac so trung voi x la";
		XuatMang(a, n);
		break;
	case 49:
		cout << endl << " 49. Xoa cac so trung nhau va chi lay so xuat hien 1 lan";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		XoaCacSoTrungNhauTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa cac so trung nhau trong mang";
		XuatMang(a, n);
		break;
	case 50:
		cout << endl << " 50. Xoa tat ca cac phan tu xuat hien nhieu hon 1 lan";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		break;
	default:
		break;
	}
	cout << endl << "\n";
	system("pause");
}
#pragma once

/*
Bài 1: Xóa các phần tử có chỉ số k trong mảng
Bài 2: Hãy xóa tất cả số lớn nhất trong mảng (Ví dụ trong mảng có số 10 là lớn nhất, thì xoá sạch những số 10 trong mảng)
Bài 3: Xóa tất cả các số âm trong mảng
Bài 4: Xóa tất cả các số chẵn trong mảng
Bài 5: Xóa tất cả các số chính phương trong mảng
Bài 6: Xóa tất cả các phần tử trùng với x
Bài 7: Xóa tất cả các số nguyên tố trong mảng
Bài 8: Xóa tất cả các phần tử trùng nhau trong mảng và chỉ giữ lại duy nhất 1 phần tử
Bài 9: Xóa tất cả các phần tử xuất hiện nhiều hơn 1 lần trong mảng
*/


void XuatMenu() {
	cout << endl << "\n--------------- CAC KY THUAT XOA TREN MANG --------------";
	cout << endl << " 0.  Thoat chuong trinh";
	cout << endl << " 1.  Nhap tu dong mang";
	cout << endl << " 2.  Nhap bang tay";
	cout << endl << " 3.  Xuat mang vua nhap";
	cout << endl << " 4.  Xoa phan tu co chi so k (xoa vt) trong mang";
	cout << endl << " 5.  Xoa so co gia tri x nhap vao trong mang";
	cout << endl << " 6.  Xoa phan tu dau mang, va cuoi mang";
	cout << endl << " 7.  Xoa so lon nhat trong mang";
	cout << endl << " 8.  Xoa so nho nhat trong mang";
	cout << endl << " 9.  Xoa cac so am trong mang";
	cout << endl << " 10. Xoa cac so duong trong mang";
	cout << endl << " 11. Xoa cac so chan trong mang";
	cout << endl << " 12. Xoa cac so le trong mang";
	cout << endl << " 13. Xoa cac so chinh phuong trong mang";
	cout << endl << " 14. Xoa phan tu trung voi x nhap vao";
	cout << endl << " 15. Xoa tat ca cac so nguyen to trong mang";
	cout << endl << " 16. Xoa cac so trung nhau va chi lay so xuat hien 1 lan duy nhat";
	cout << endl << " 17. Xoa tat ca cac phan tu xuat hien nhieu hon 1 lan";
	cout << endl << "\n------------------------ END ------------------------";

}

int ChonMenu(int soMenu) {
	int stt;
	for (;;) {
		system("cls");		// xóa màn hình sau mỗi lần thực hiện 
		XuatMenu();
		cout << endl << "\n Nhap vao so tu 0 -> " << soMenu << " de chon chuc nang MENU:  ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(MANG a, int menu, int& n) {
	system("cls");	// xóa màn hình chức năng menu sau mỗi lần thực hiện case
	int vt, x, kq;
	switch (menu)
	{
	case 0:
		cout << endl << " 0. Thoat chuong trinh";
		return;

	case 1:
		cout << endl << " 1. Nhap tu dong mang";
		NhapTuDongMang(a, n);
		XuatMang(a, n);
		break;

	case 2:
		cout << endl << " 2. Nhap mang bang tay";
		NhapTuBanPhim(a, n);
		XuatMang(a, n);
		break;

	case 3:
		cout << endl << " 3. Xuat mang vua nhap";
		cout << endl << "\n Xuat mang:";
		XuatMang(a, n);
		break;

	case 4:
		cout << endl << " 4. Xoa tai vi tri";
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

	case 5:
		cout << endl << " 5. Xoa so co gia tri x nhap vao trong mang ";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao gia tri x trong mang can xoa: x =  ";
		cin >> x;
		XoaGiaTriXTrongMangNhapVao(a, n, x);
		cout << endl << " Mang sau khi xoa vi tri x = " << x << " ra khoi mang la:";
		XuatMang(a, n);
		break;

	case 6:
		cout << endl << " 6. Xoa dau mang va xoa cuoi mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Xoa dau mang:";
		XoaDauMang(a, n);
		XuatMang(a, n);
		cout << endl << "\n Xoa cuoi mang:";
		XoaCuoiMang(a, n);
		XuatMang(a, n);
		break;

	case 7:
		cout << endl << " 7. Xoa so lon nhat trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Xoa so lon nhat trong mang";
		XoaSoLonNhatTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa so lon nhat la:";
		XuatMang(a, n);
		break;

	case 8:
		cout << endl << " 8. Xoa so nho nhat trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Xoa so nho nhat trong mang";
		XoaSoNhoNhatTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa so nho nhat la:";
		XuatMang(a, n);
		break;

	case 9:
		cout << endl << " 9. Xoa cac so am trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		XoaCacSoAmTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa cac so am trong mang";
		XuatMang(a, n);
		break;

	case 10:
		cout << endl << " 10. Xoa cac so duong trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		XoaCacSoDuongTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa cac so duong trong mang";
		XuatMang(a, n);
		break;

	case 11:
		cout << endl << " 11. Xoa cac so chan trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		XoaCacSoChanTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa cac so chan trong mang";
		XuatMang(a, n);
		break;

	case 12:
		cout << endl << " 12. Xoa cac so le trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		XoaCacSoLeTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa cac so le trong mang";
		XuatMang(a, n);
		break;

	case 13:
		cout << endl << " 13. Xoa cac so la so chinh phuong";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		XoaCacSoLaSoChinhPhuong(a, n);
		cout << endl << "\n Mang sau khi xoa cac so chinh phuong ra khoi mang la:";
		XuatMang(a, n);
		break;

	case 14:
		cout << endl << " 14. Xoa phan tu trung voi x nhap vao";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao gia tri x trong mang can xoa:  x =  ";
		cin >> x;
		XoaPhanTuTrungVoiXNhapVao(a, n, x);
		cout << endl << "\n Mang sau khi xoa cac so trung voi x = " << x << " nhap vao la:";
		XuatMang(a, n);
		break;

	case 15:
		cout << endl << " 15. Xoa so nguyen to trong mang";
		cout << endl << "\n Xem mang ban dau";
		XuatMang(a, n);
		XoaSoNguyenToTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa so nguyen to la";
		XuatMang(a, n);
		break;

	case 16:
		cout << endl << " 16. Xoa cac so trung nhau trong mang";
		cout << endl << "\n Mang ban dau la";
		XuatMang(a, n);
		XoaCacSoTrungNhauTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa cac so trung nhau trong mang la";
		XuatMang(a, n);
		break;



	default:
		break;
	}
	cout << endl << "\n";
	system("pause");		// dừng màn hình đợi nhấn phím tiếp tục
}
#pragma once

// khai báo nguyên mẫu hàm
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(Mang a, int menu, int& n);


// định nghĩa các hàm xử lý
void XuatMenu()
{
	cout << endl << "\n--------------- MENU --------------";
	cout << endl << " 0. Thoat chuong trinh";
	cout << endl << " 1. Nhap mang tu dong";
	cout << endl << " 2. Xem mang vua nhap";
	cout << endl << " 3. Tinh tong cac phan tu la so nguyen to";
	cout << endl << " 4. Xuat tat ca cac phan tu la so chinh phuong";
	cout << endl << " 5. Tinh tong tat ca cac phan tu trong mang";
	cout << endl << " 6. Tim gia tri lon nhat trong mang";
	cout << endl << " 7. Tim gia tri nho nhat trong mang";
	cout << endl << " 8. Tim cac so duong trong mang";
	cout << endl << " 9. Tim cac so am trong mang";
	cout << endl << " 10. Tinh tong cac so duong trong mang";
	cout << endl << " 11. Tinh tong cac so am trong mang";
	cout << endl << " 12. Tinh tich cac so le";
	cout << endl << " 13. Tinh tong cac so chan";
	cout << endl << " 14. Tim vi tri so nguyen to trong mang";
	cout << endl << " 15. Dem xem trong mang co bao nhieu so nguyen to";
	cout << endl << " 16. Dem xem trong mang co bao nhieu so le";
	cout << endl << " 17. Dem xem trong mang co bao nhieu so duong";
	cout << endl << "\n------------------- END ------------------";
}


int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << endl << "\n Nhap vao chuc nang menu tu 0 -> " << soMenu << " de chon chuc nang Menu:  ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(Mang a, int menu, int& n)
{
	system("cls");
	int kq;

	switch (menu)
	{

	case 0:
		cout << endl << " 0. Thoat chuong trinh";
		break;

	case 1:
		cout << endl << " 1. Nhap tu dong mang";
		NhapTuDong(a, n);
		cout << endl << " Mang nhap:\t";
		XuatMang(a, n);
		break;

	case 2:
		cout << endl << " 2. Xem mang vua nhap vao";
		cout << endl << "\n Xuat mang vua nhap la:  \n";
		XuatMang(a, n);
		break;

	case 3:
		// số nguyên tố là số chỉ chia hết cho 1 và chính nó
		cout << endl << " 3. Tinh tong phan tu la so nguyen to";
		cout << endl << "\n Mang ban dau la: \t";
		XuatMang(a, n);
		cout << endl << "\n Cac so nguyen to trong mang la:  \t";
		XuatSoNguyenTo(a, n);
		kq = TinhTongCacPhanTuLaSoNguyenTo(a, n);
		cout << endl << "\n Tong cac phan tu so nguyen to la: sum =  " << kq;
		break;

	case 4:
		cout << endl << " 4. Xuat cac phan tu la so chinh phuong";
		cout << endl << " So chinh phuong la:  ";
		XuatSoChinhPhuong(a, n);
		break;

	case 5:
		cout << endl << " 5. Tinh tong cac phan tu trong mang";
		cout << endl << "\n Xem lai mang ban dau:\t";
		XuatMang(a, n);
		kq = TinhTongCacPhanTuTrongMang(a, n);
		cout << endl << "\n Tong cac phan tu trong mang la:  " << kq;
		break;

	case 6:
		cout << endl << " 6. Tim gia tri lon nhat trong mang:  ";
		cout << endl << "\n Xem lai mang ban dau:\t";
		XuatMang(a, n);
		kq = TimMax(a, n);
		cout << endl << "\n Gia tri lon nhat trong mang la max =   " << kq;
		break;

	case 7:
		cout << endl << " 7. Tim gia tri nho nhat cua mang:   ";
		cout << endl << "\n Xem lai mang ban dau:\t";
		XuatMang(a, n);
		kq = TimMin(a, n);
		cout << endl << "\n Gia tri nho nhat trong mang la min =   " << kq;
		break;

	case 8:
		cout << endl << " 8. Tim cac so duong trong mang ";
		cout << endl << "\n Xem lai mang ban dau:\t";
		XuatMang(a, n);
		cout << endl << "\n Cac so duong trong mang la: \t";
		TimSoDuong(a, n);
		break;

	case 9:
		cout << endl << " 9. Tim cac so am trong mang";
		cout << endl << "\n Xem lai mang ban dau:\t";
		XuatMang(a, n);
		cout << endl << "\n Cac so am trong mang la:  \t";
		TimSoAm(a, n);
		break;

	case 10:
		cout << endl << " 10. Tinh tong cac so duong trong mang";
		cout << endl << "\n Xem lai mang ban dau:  \t";
		XuatMang(a, n);
		cout << endl << "\n Xuat danh sach so duong:  \t";
		TimSoDuong(a, n);
		kq = TinhTongCacSoDuong(a, n);
		cout << endl << "\n Tong cac so duong trong mang la:  sum = " << kq;
		break;

	case 11:
		cout << endl << " 11. Tinh tong cac so am trong mang";
		cout << endl << "\n Xem lai mang ban dau:  \t";
		XuatMang(a, n);
		cout << endl << "\n Xuat danh sach cac so am:  \t";
		TimSoAm(a, n);
		kq = TinhTongCacSoAm(a, n);
		cout << endl << "\n Tong cac so am trong mang la:  sum =  " << kq;
		break;

	case 12:
		cout << endl << " 12. Tinh tich cac so le";
		cout << endl << "\n Mang nhap vao ban dau la:  \t ";
		XuatMang(a, n);
		kq = TinhTichCacSoLe(a, n);
		cout << endl << "\n Tich cac so le la:  =   " << kq;
		break;

	case 13:
		cout << endl << " 13. Tinh tong cac so chan";
		cout << endl << "\n Mang nhap vao tu ban dau la:  \t";
		XuatMang(a, n);
		kq = TinhTongCuaCacSoChan(a, n);
		cout << endl << "\n Tong cac so chan la:  =   " << kq;
		break;

	case 14:
		cout << endl << " 14. Tim vi tri so nguyen to ";
		// 
		cout << endl << "\n Mang ban dau la:  \t";
		XuatMang(a, n);
		cout << endl << "\n Vi tri cua so nguyen to la vi tri : \t";
		TimViTriCuaSoNguyenTo(a, n);
		break;

	case 15:
		cout << endl << " 15. Dem trong mang co bao nhieu so nguyen to";
		cout << endl << "\n Xem mang ban dau:  \t";
		XuatMang(a, n);
		cout << endl << "\n Cac so nguyen to la:  \t";
		XuatSoNguyenTo(a, n);
		kq = DemSoDuongTrongMang(a, n);
		cout << endl << "\n Trong mang co tat ca " << kq << " so nguyen to";
		break;

	case 16:
		cout << endl << " 16. Dem trong mang co bao nhieu so le";
		cout << endl << "\n Xem lai mang ban dau:  \t";
		XuatMang(a, n);
		kq = DemSoLeTrongMang(a, n);
		cout << endl << "\n Trong mang co:  " << kq << " so le";
		break;

	case 17:
		cout << endl << " 17. Dem trong mang co bao nhieu so duong";
		cout << endl << "\n Xem lai mang ban dau:   \t";
		XuatMang(a, n);
		kq = DemSoDuongTrongMang(a, n);
		cout << endl << "\n Trong mang co:  " << kq << " so duong";
		break;


	default:
		break;
	}
	cout << endl << "\n";
	system("pause");
}
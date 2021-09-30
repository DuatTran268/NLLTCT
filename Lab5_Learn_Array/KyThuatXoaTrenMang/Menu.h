#pragma once
// khai báo nguyên mẫu hàm
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(MANG a, int& n, int menu);


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


// định nghĩa các hàm xử lý
void XuatMenu()
{
	cout << endl << "\n----------- CAC KY THUAT XOA TREN MANG ----------------";
	cout << endl << " 0. Thoat chuong trinh";
	cout << endl << " 1. Nhap tu dong mang";
	cout << endl << " 2. Xem mang vua nhap";
	cout << endl << " 3. Xoa cac phan tu co chi so k trong mang";
	cout << endl << " 4. Xoa so lon nhat trong mang";
	cout << endl << " 5. Xoa tat ca so am trong mang";
	cout << endl << " 6. Xoa tat ca so chan trong mang";
	cout << endl << " 7. Xoa tat ca so chinh phuong trong mang";
	cout << endl << " 8. Xoa cac phan tu trung voi x";
	cout << endl << " 9. Xoa tat ca so nguyen to trong mang";
	cout << endl << " 10. Xoa tat ca cac phan tu trung nhau trong mang";
	cout << endl << " 11. Xoa tat ca cac phan tu xuat hien nhieu hon 1 lan trong mang";
	cout << endl << "\n----------------------- END -------------------------";
}


int ChonMenu(int soMenu) {
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << endl << "\n Nhap vao so Menu tu 0 -> " << soMenu << " de chọn chuc nang MENU:  ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;

	}
	return stt;
}

void XuLyMenu(MANG a,int& n, int menu)
{
	int x = 0;
	int vt;
	int kq = 0;
	system("cls");
	switch (menu)
	{
	case 0:
		cout << endl << " 0. Thoat chuong trinh";
		break;
		
	case 1:
		cout << endl << " 1. Nhap tu dong mang";
		NhapTuDong(a, n);
		cout << endl << "\n Mang vua nhap: \t";
		XuatMang(a, n);
		break;
		
	case 2:
		cout << endl << " 2. Xem mang vua nhap";
		cout << endl << "\n Xuat mang vua nhap tu dong: \n";
		XuatMang(a, n);
		break;

	case 3:
		cout << endl << " 3. Xoa phan tu co chi so k trong mang";
		cout << endl << "\n Xem mang ban dau:\t";
		XuatMang(a, n);
		do
		{
			cout << endl << "\n Nhap vao vi tri can xoa k =  ";
			cin >> vt;
			if (vt < 0 || vt >= n)
			{
				cout << endl << "\n Vi tri xoa ko hop le";
			}
		} while (vt<0 || vt >= n);
		XoaPhanTuTaiViTriK(a, n, vt);
		cout << endl << "\n Mang sau khi xoa phan tu tai vi tri k =  " << vt << " la: \n";
		XuatMang(a, n);
		break;

	case 4:
		cout << endl << " 4. Xoa tat ca so lon nhat trong mang";
		cout << endl << " Mang ban dau:\t";
		XuatMang(a, n);
		XoaPhanTuLonNhatTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa phan tu lon nhat la:\n";
		XuatMang(a, n);
		break;

	case 5:
		cout << endl << " 5. Xoa tat ca cac so am trong mang";
		cout << endl << " Mang ban dau:\t";
		XuatMang(a, n);
		XoaTatCaCacSoAmTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa cac so am trong mang la:\n";
		XuatMang(a, n);
		break;

	case 6:
		cout << endl << " 6. Xoa tat ca cac so chan trong mang";
		cout << endl << " Mang ban dau:\t";
		XuatMang(a, n);
		XoaTatCaCacSoChanTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa cac so chan trong mang la:\n";
		XuatMang(a, n);
		break;

	case 7:
		cout << endl << " 7. Xoa tat ca cac so chinh phuong trong mang";
		cout << endl << "\n Mang ban dau:\t";
		XuatMang(a, n);
		XoaCacSoLaSoChinhPhuong(a, n);
		cout << endl << "\n Mang sau khi xoa so chinh phuong la:\n";
		XuatMang(a, n);
		break;

	case 8:
		cout << endl << " 8. Xoa tat ca cac phan tu trung voi x";
		cout << endl << " Mang ban dau:\t";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao gia tri x trong mang can xoa x =  ";
		cin >> x;
		XoaCacPhanTuTrungNhauX(a, n, x);
		cout << endl << " Mang sau khi xoa cac phan tu trung nhau la: \n";
		XuatMang(a, n);
		break;

	case 9:
		cout << endl << " 9. Xoa tat ca cac so nguyen to trong mang";
		cout << endl << "\n Mang ban dau la:\t";
		XuatMang(a, n);
		XoaTatCaCacSoNguyenTo(a, n);
		cout << endl << "\n Mang sau khi xoa cac so nguyen to la:\n";
		XuatMang(a, n);
		break;

	case 10:
		cout << endl << " 10. Xoa tat ca cac phan tu trung nhau trong mang va chi giu lai duy nhat 1 phan tu";
		cout << endl << "\n Mang ban dau:\t";
		XuatMang(a, n);
		XoaPhanTuTrungChiGiuLai1PhanTu(a, n);
		cout << endl << " Mang sau khi xoa:\n";
		XuatMang(a, n);
		break;

	case 11:
		cout << endl << " 11. Xoa tat ca cac phan tu xuat hien nhieu hon 1 lan trong mang";
		cout << endl << "\n Mang ban dau la:\t";
		XuatMang(a, n);
		XoaCacPhanTuXuatHienNhieuHon1LanTrongMang(a, n);
		cout << endl << "\n Mang sau khi xoa la:\n";
		XuatMang(a, n);
		break;

	default:
		break;
	}
	cout << endl << "\n";
	system("pause");
}
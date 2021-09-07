#pragma once
// khai báo nguyên mẫu hàm các hàm trong menu
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int n);




// định nghĩa các hàm xử lý menu
// hàm xuất menu
void XuatMenu()
{
	cout << endl << "-------------- MENU -----------------";
	cout << endl << " 0. Thoat khoi chuong trinh";
	cout << endl << " 1. Kiem tra x co nam trong mang a";
	cout << endl << " 2. Tim vi tri dau tien x xuat hien trong mang a";
	cout << endl << " 3. Kiem tra mang a la day tang";
	cout << endl << " 4. Tim phan tu lon nhat MAX";
	cout << endl << " 5. Tim vi tri cuoi cung gia tri lon nhat xuat hien";
	cout << endl << " 6. Neu a chua x thi cung chua -x";
	cout << endl << " 7. Xem du lieu day so";
	cout << endl << "---------------- END ----------------";
}

// hàm chọn menu
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");
		XuatMenu();
		cout << endl << " Nhap vao chuc nang menu tu ( 0 -> " << soMenu << ") de chon chuc nang menu:  ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
		{
			break;
		}
	}
	return stt;
}

// định nghĩa hàm xử lý menu
void XuLyMenu(int menu, DaySo a, int n)
{

	// khai báo biến
	int x, kq;


	switch (menu)
	{
	case 0:
		system("cls");		// system("cls") xóa màn hình menu chọn chuyển sang màn hình xuất ra giá trị
		cout << endl << " 0. Thoat khoi chuong trinh";


		break;

	case 1: 
		cout << endl << " 1. Kiem tra x nam trong mang a";
		cout << endl << " Nhap vao gia tri x:  ";
		cin >> x;
		kq = ChuaPhanTuX(a, n, x);	// gọi hàm chứa phần tử x truyền tham số a,n,x vào gán = biến kq đã khai báo ở trên
		cout << endl << " Xuat mang ra man hinh:  ";
		XuatMang(a, n);
		if (kq)
		{
			cout << endl << " Mang co chua:  " << x;
		}
		else
		{
			cout << endl << " Mang ko chua:  " << x;
		}


		break;
	case 2:
		cout << endl << " 2. Tim vi tri dau tien x xuat hien trong a";
		cout << endl << " Nhap gia tri x:  ";
		cin >> x;
		kq = TimViTriDauTien_X(a, n, x);	// gọi hàm sau đó truyền tham số vào gán = biến kq
		// xuất thông báo
		cout << endl << " Xuat mang:  ";
		XuatMang(a, n);
		if (kq == -1)
		{
			cout << endl << " Mang khong chua:  " << x;
		}
		else
		{
			cout << endl << " Tai gia tri x = " << x << " thi xuat hien tai vi tri a[" << kq << "]: ";
		}
		break;

	case 3:
		cout << endl << " 3. Kiem tra mang a tang";
		kq = KiemTraMangTang(a, n);
		cout << endl << " Xuat mang a la:  ";
		XuatMang(a, n);
		if (kq)
		{
			cout << endl << " a la mang tang ";
		}
		else
		{
			cout << endl << " a ko phai la mang tang";
		}
		break;

	case 4: 
		cout << endl << " 4. Tim phan tu lon nhat ";
		kq = TinhMax(a, n);
		cout << endl << " Xuat mang:  ";
		XuatMang(a, n);
		cout << endl << " Max trong mảng nhập vào là " << n << "] =  " << kq;
		break;

	case 5: 
		cout << endl << " 5. Tim vi tri cuoi cung lon nhat";
		kq = TimViTriMaxCuoiCung(a, n);
		cout << endl << " Mang xuat ra:  ";
		XuatMang(a,n);
		cout << endl << " Tim vi tri xuat hien cuoi cung co gia tri lon nhat la:  " << kq;
		break;



	case 7: 
		cout << endl << " 7. Xem du lieu day so ";
		cout << "\n Xuat day so ra:  ";
		XuatMang(a, n);		// gọi hàm xuất mảng
		break;


	default:

		break;
	}
	_getch();

}
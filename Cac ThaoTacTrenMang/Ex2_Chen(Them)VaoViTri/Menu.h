#pragma once
// khai báo nguyên mẫu hàm
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(MANG a, int menu, int& n);




// định nghĩa hàm
void XuatMenu()
{
	cout << endl << "\n----------- MENU -------------";
	cout << endl << " 0. Thoat chuong trinh";
	cout << endl << " 1. Nhap mang tu ban phim";
	cout << endl << " 2. Xuat mang vua nhap";
	cout << endl << " 3. Chen gia tri vao vi tri nhap";
	cout << endl << " 4. Chen vao dau mang";
	cout << endl << " 5. Chen vao cuoi mang";
	cout << endl << "------------- END --------------";
}


int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("cls");		// xóa màn hình mỗi lần thực hiện lệnh
		XuatMenu();
		cout << endl << "\n Nhap vao vi tri tu 0 -> " << soMenu << " de chon chuc nang MENU:  ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(MANG a, int menu, int& n)
{
	int  vt, x = 0;
	system("cls");
	switch (menu)
	{
	case 0:
		cout << endl << "\n Thoat khoi chuong trinh";
		break;

	case 1:
		cout << endl << " 1. Nhap mang tu ban phim";
		NhapMang(a, n);

		//

		break;

	case 2:
		cout << endl << " 2. Xuat mang vua nhap";
		cout << endl << "\n Mang vua nhap tu ban phim la: ";
		XuatMang(a, n);

		//
		break;
		
	case 3:
		cout << endl << " 3. Them gia tri tai vi tri nhap vao";
		cout << endl << "\n Mang ban dau";
		cout << endl << " Nhap vao vi tri can them:  ";
		cin >> vt;
		cout << endl << " Nhap vao gia tri can them:  ";
		cin >> x;
		ThemTaiViTri(a, n, x, vt);
		cout << endl << " Mang sau khi them gia tri " << x << " vao vi tri " << vt << " la:\n";
		XuatMang(a, n);
		break;
	case 4:
		cout << endl << " 4. Them vao dau mang";
		cout << endl << "\n Mang ban dau la:\t";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao gia tri can them:  ";
		cin >> x;
		cout << endl << "\n Mang sau khi them gia tri " << x << " vao dau mang la:  ";
		ThemVaoDauMang(a, n,x);
		XuatMang(a, n);
		break;
		
	case 5:
		cout << endl << " 5. Them vao cuoi mang";
		cout << endl << "\n Mang ban dau la:\n";
		XuatMang(a, n);
		cout << endl << "\n Nhap vao gia tri can them:  ";
		cin >> x;
		cout << endl << "\n Mang sau khi them gia tri " << x << " vao dau mang la:  ";
		ThemVaoCuoiMang(a, n,x);
		XuatMang(a, n);
		break;

	default:
		break;
	}
	system("pause");
	cout << endl << "\n";
}


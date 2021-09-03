#pragma once


// khai báo nguyên mẫu các hàm trong hệ thống menu
void XuatMenu();
int ChonMenu( int soMenu);
void XuLyMenu(int menu);


void XuatMenu()
{
	cout << "\n-------------- TINH DIEN TICH CAC HINH ---------------";
	cout << "\n 0. Thoat khoi chuong trình";
	cout << "\n 1. Tinh dien tich hinh vuong";
	cout << "\n 2. Tinh chu vi hinh vuong";
	cout << "\n 3. Tinh dien tich hinh chu nhat";
	cout << "\n 4. Tinh chu vi hinh chu nhat";
	cout << "\n 5. Tinh dien tich hinh tam giac";
	cout << "\n 6. Tinh chu vi hinh tam giac";
	cout << "\n 7. Tinh dien tich hinh tron";
	cout << "\n 8. Tinh chu vi hinh tron";
	cout << "\n----------------------- END --------------------------";
}

int ChonMenu(int soMenu)
{
	int stt;		// khai báo biến số nguyên để người dùng nhập vào 
	for (;;)
	{
		system("cls");
		XuatMenu();		// gọi hàm xuất menu ra màn hình
		cout << endl << "\n Nhap 1 so trong khoang ( 0 -> " << soMenu << ") de chon chuc nang:  ";
		cin >> stt;		// cin cho người dùng nhập số vào từ bàn phím để thực hiện chức năng menu
		// nếu stt nhập vào lớn hơn hoặc bằng 0 và nhỏ hơn hoặc bằng số menu thì thực hiện lệnh break nhảy ra khỏi vòng lặp
		if (0 <= stt && stt <= soMenu)
		{
			break;
		}
		return stt;
	}

}

// hàm xử lý menu
void XuLyMenu(int menu)
{
	double a, b, c,	r,	// sử dụng kiểu dữ liệu số thực double và gán cho abc lần lượt là độ dài các canh, và r cho bán kính hình tròn;
		dienTich, chuVi;
	switch (menu)	// sử dụng vòng lặp switch
	{
	case 0:	// chức năng 0
		cout << endl << " Thoat khoi chuong trinh";
		break;	// sau khi chọn 0 thực hiện lệnh xuất ra màn hình sau đó gặp câu lệnh break thoát ra khỏi vòng lặp

	case 1:
		cout << endl << "  Tinh dien tich hinh vuong";
		// xuất ra cho người dùng biết và nhập vào
		cout << endl << " Nhap vao do dai canh hinh vuong:  ";
		cin >> a;
		// gọi hàm tính diện tích hình vuông bên thư viện sang và gán a vào hàm
		dienTich = DienTichHinhVuong(a);
		cout << endl << " Dien tich hinh vuong co do dai canh a = " << a << " la:  " << dienTich;
		break;	// sau khi thực hiện xong gặp lệnh break thoát ra khỏi vòng lặp

	case 2:
		cout << endl << "  Tinh chu vi hinh vuong";
		cout << endl << " Nhap vao do dai canh hinh vuong:  ";
		cin >> a;
		chuVi = ChuViHinhVuong(a);
		cout << endl << " Hinh vuong co canh a = " << a << " co chu vi la:  " << chuVi;
		break;

	case 3:
		cout << endl << " Tinh dien tich hinh chu nhat";
		cout << endl << " Nhap vao chieu dai a =  ";
		cin >> a;
		cout << endl << " Nhap vao chieu rong b =  ";
		cin >> b;
		dienTich = DienTichHinhChuNhat(a, b);
		cout << endl << " Hinh chu nhat co canh a = " << a << " va b = " << b << " co dien tich la:  " << dienTich;
		break;

	case 4: 
		cout << endl << " Tinh chu vi hinh chu nhat ";
		cout << endl << " Nhap vao chieu dai a =  ";
		cin >> a;
		cout << endl << " Nhap vao chieu rong b =  ";
		cin >> b;
		chuVi = ChuViHinhChuNhat(a, b);
		cout << endl << " Hinh chu nhat co canh a = " << a << " va b = " << b << " co chu vi la: " << chuVi;
		break;
	case 5: 
		cout << endl << " Tinh dien tich hinh tam giac";
		cout << endl << " Nhap vao do dai canh a:  ";
		cin >> a;
		cout << endl << " Nhap vao do dai canh b:  ";
		cin >> b;
		cout << endl << " Nhap vao do dai canh c:  ";
		cin >> c;
		dienTich = DienTichHinhTamGiac(a, b, c);	// gọi hàm  tính diện tích tam giác bên thư viện và truyền tham số abc 3 cạnh vào
		cout << endl << " Hinh tam giac co do dai 3 canh a = " << a << ", b = " << b << ", c = " << c << " co dien tich la:  " << dienTich;
		break;

	case 6: 
		cout << endl << " Tinh chu vi hinh tam giac";
		cout << endl << " Nhap vao do dai canh a:  ";
		cin >> a;
		cout << endl << " Nhap vao do dai canh b:  ";
		cin >> b;
		cout << endl << " Nhap vao do dai canh c:  ";
		cin >> c;
		chuVi = ChuViHinhTamGiac(a, b, c);
		cout << endl << " Hinh tam giac co do dai 3 canh a = " << a << ", b = " << b << ", c =  " << " co chu vi la:  " << chuVi;
		break;

	case 7: 
		cout << endl << " Tinh dien tich hinh tron";
		cout << endl << " Nhap vao ban kinh hinh tron r:  ";
		cin >> r;
		dienTich = DienTichHinhTron(r);
		cout << endl << " Hinh tron co ban kinh r = " << r << " co dien tich la:  " << dienTich;
		break;

	case 8:
		cout << endl << " Tinh chu vi hinh tron ";
		cout << endl << " Nhap vao ban kinh hinh tron r:  ";
		cin >> r;
		chuVi = ChuViHinhTron(r);
		cout << endl << " Hinh tron co ban kinh r = " << r << " co chu vi la:  " << chuVi;
		break;


	default:
		cout << endl << "\t Ko ton tai chuc nang ban vua nhap vao. \n\t Vui long nhap lai !";
		break;
	}
	_getch();		// dừng màn hình để xem kết quả

}
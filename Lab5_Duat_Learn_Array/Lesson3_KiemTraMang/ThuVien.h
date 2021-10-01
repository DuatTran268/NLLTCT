#pragma once

#define MAX 100
typedef int MANG[MAX];



void NhapMangTuDong(MANG a, int& n) {
	do
	{
		cout << endl << "\n Nhap vao so luong phan tu mang:  ";
		cin >> n;
	} while (n <= 0 || n > MAX);
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (10 - -10 + 1) + -10;
	}
}

void NhapTay(MANG a, int& n) {
	do
	{
		cout << endl << "\n Nhap vao so luong phan tu mang:  ";
		cin >> n;
	} while (n <= 0 || n > MAX);
	for (int i = 0; i < n; i++)
	{
		cout << endl << " Nhap vao a[" << i << "] =  ";
		cin >> a[i];
	}
}

void XuatMang(MANG a, int n) {
	cout << endl << " Xuat mang:\t";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

bool KiemTraGiaTriXCoTrongMang(MANG a, int n, int x) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			cout << endl << " Gia tri nhap vao x = " << x << " nam trong mang";
			return true;
		}
	}
	cout << endl << " Gia tri nhap vao x = " << x << " khong nam trong mang";
	return false;
}

bool KiemTraMangCoTonTaiViTri(MANG a, int n, int vt) {
	if ( vt <= 0 || vt >n)
	{
		cout << endl << " Vi tri = " << vt << " vua nhap vao khong ton tai";
		return false;
	}
	cout << endl << " Vi tri = " << vt << " ton tai trong mang";
	return true;
}

bool KiemTraMangCoPhaiLaSoToanDuong(MANG a, int n) {
	for (int i = 0; i < n; i++)		// duyệt mảng kiểm tra lần lượt các phần tử i trong mảng từ i = 0 tới i = n nhập vào
	{
		if (a[i] < 0)		// nếu giá trị i trong mảng a mà nhỏ hơn 0 => có số âm
		{
			cout << endl << "\n Mang vua nhap vao khong phai la mang toan so duong";
			return false;		// số âm trả về kết quả sai ( vì yêu cầu xem số toàn dương)
		}
	}
	cout << endl << "\n Mang vua nhap vao la mang toan so duong";
	return true;		// trả về kết quả đúng
}

bool KiemTraSoNguyenTo(int n) {
	if (n < 2)
		return false;
	for (int i = 2; i < sqrt(n); i++)
		if (n % 2 == 0)
			return false;
	return true;
}

void XuatCacSoNguyenTo(MANG a, int n) {
	cout << endl << "\ Xuat so nguyen to:\t";
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(a[i])) {
			cout << a[i] << "\t";
		}

	}
}

bool KiemTraSoChinhPhuong(int n) {
	if (n < 1)
		return false;
	int i = sqrt(n);
	if (i * i == n)
		return true;
	return false;

	/*
	int i = sqrt(n);
	if (i * i == n)
	{
		return true;
	}
	return false;
	*/
}

void XuatCacSoChinhPhuong(MANG a, int n) {
	cout << endl << " Xuat so chinh phuong:\t";
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoChinhPhuong(a[i])) {
			cout << a[i] << "\t";
		}
	}
}

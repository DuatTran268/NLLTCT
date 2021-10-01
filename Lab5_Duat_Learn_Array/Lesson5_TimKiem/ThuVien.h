#pragma once
#define MAX 100

typedef int MANG[MAX];


void NhapTuDong(MANG a, int& n) {
	do
	{
		cout << endl << "\n Nhap vao so luong phan tu mang:  ";
		cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (10 - -10 + 1) + -10;
	}
}

void NhapMangBangTay(MANG a, int& n) {
	do
	{
		cout << endl << "\n Nhap vao so luong phan tu mang:  ";
		cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		cout << endl << " Nhap vao a[" << i << "] =  ";
		cin >> a[i];
	}
}

void XuatMang(MANG a, int& n) {
	cout << endl << " Xuat mang:\t";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

void TimViTriCuaPhanTuXNhapVao(MANG a, int n, int x) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			cout << endl << "\n Phan tu nhap vao x = " << x << " nam vi tri " << i  << " trong mang";
		}
	}
}

void TimGiaTriXTrongMang(MANG a, int n, int x) {
	cout << endl << "\n Xuat ra gia tri x:\t ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			cout << a[i] << "\t";
		}
	}
}

int TimGiaTriLonNhatTrongMang(MANG a, int n) {
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}

int TimGiaTriNhoNhatTrongMang(MANG a, int n) {
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	return min;
}

void TimCacSoLeTrongMang(MANG a, int n) {
	cout << endl << "\n Xuat cac so le:\t";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			cout << a[i] << "\t";
		}
	}
}

void TimCacSoChanTrongMang(MANG a, int n) {
	cout << endl << "\n Xuat ra cac so chan:\t";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << "\t";
		}
	}
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
	int i = sqrt(n);
	if (i*i == n)
	{
		return true;
	}
	return false;
}

void XuatSoChinhPhuong(MANG a, int n) {
	cout << endl << "\n Xuat ra cac so chinh phuong:\t";
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoChinhPhuong(a[i]) == true)
		{
			cout << a[i] << "\t";
		}
	}
}
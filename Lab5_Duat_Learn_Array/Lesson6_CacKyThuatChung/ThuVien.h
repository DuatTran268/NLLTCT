#pragma once
#define MAX 100

typedef int MANG[MAX];


void NhapMangTuDong(MANG a, int& n) {
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
	} while (n <=0);
	for (int i = 0; i < n; i++)
	{
		cout << endl << " Nhap a[" << i << "] =  ";
		cin >> a[i];
	}
}

void XuatMang(MANG a, int n) {
	cout << endl << "\n Xuat mang: \t";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

//Đổi chỗ trực tiếp(Interchange Sort)
void HoanVi( int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

void SapXepMangTangDan(MANG a, int n) {
	for (int i = 0; i < n ; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				/*int temp = a[i];
				a[i] = a[j];
				a[j] = temp;*/
				HoanVi(a[i], a[j]);  
			}
		}
	}
}

void SapXepMangGiamDan(MANG a, int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				HoanVi(a[i], a[j]);

			}
		}
	}
}

int TinhTongCacSoDuong(MANG a, int n) {
	int sum = 0;
	cout << endl << "\n Xem cac so duong:\t";
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			cout << a[i] << "\t";
			sum += a[i];
		}
	}
	return sum;
}

int TinhTongCacSoAm(MANG a, int n) {
	int sum = 0;
	cout << endl << "\n Xem cac so am:\t";
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			cout << a[i] << "\t";
			sum += a[i];		//tương đương với sum = sum + a[i]
		}
	}
	return sum;
}

int TinhTongCacSoLe(MANG a, int n) {
	int sum = 0;
	cout << endl << "\n Xem cac so le:\t ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			cout << a[i] << "\t";
			sum += a[i];
		}
	}
	return sum;
}

int TinhTongCacSoChan(MANG a, int n) {
	int sum = 0;
	cout << endl << "\n Xem cac so chan:\t";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			cout << "\t" << a[i];
			sum += a[i];
		}
	}
	return sum;
}

int TinhTichCacSoDuong(MANG a, int n) {
	int tich = 1;		// gán tích kết quả ban đầu =1 vì nếu gán bằng 0 thì 0 nhân số nào cũng bằng chính nó
	cout << endl << "\n Xem cac so duong:\t";
	for (int i = 0; i < n; i++)
	{
		if ( a[i] > 0)
		{
			cout << "\t" << a[i];
			tich *= a[i];		// tương đương với tich = tich * a[i]
		}
	}
	return tich;
}

int TinhTichCacSoAm(MANG a, int n) {
	int tich = 1;
	cout << endl << "\n Xem cac so am:\t";
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			cout << "\t" << a[i];
			tich *= a[i];
		}
	}
	return tich;
}

int TinhTichCacSoChan(MANG a, int n) {
	int tich = 1;
	cout << endl << "\n Xem cac so chan:\t";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			cout << "\t" << a[i];
			tich *= a[i];
		}
	}
	return tich;
}

int TinhTichCacSoLe(MANG a, int n) {
	int tich = 1;
	cout << endl << "\n Xem cac so le:\t";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			cout << "\t" << a[i];
			tich *= a[i];
		}
	}
	return tich;
}

bool KiemTraSoNguyenTo(int n) {		// kiểm tra chỉ cần biến số nguyên int n
	if (n < 2)
		return false;
	for (int i = 2; i < sqrt(n); i++)
		if (n % 2 == 0)
			return false;
	return true;
}

int TinhTongCacSoNguyenTo(MANG a, int n) {
	int sum = 0;
	cout << endl << "\n Xem so nguyen to :\t";
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(a[i]))
		{
			cout << a[i] << "\t";
			sum += a[i];
		}
	}
	return sum;
}

int TinhTichCuaCacSoNguyenToTrongMang(MANG a, int n) {
	int tich = 1;		// tích phải gán cho kết quả ban đầu = 1 vì nếu gán = 0 thì tích của số 0 bằng chính nó
	cout << endl << "\n Xem so nguyen to :\t";
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(a[i]))
		{
			cout << "\t" << a[i];
			tich *= a[i];
		}
	}
	return  tich;
}

bool KiemTraSoChinhPhuong(int n) {
	int ktra = sqrt(n);
	if (ktra * ktra == n)
	{
		return true;
	}
	return false;
}

int TinhTongSoChinhPhuong(MANG a, int n) {
	int sum = 0;
	cout << endl << "\n Xem so chinh phuong:\t";
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoChinhPhuong(a[i]) == true)
		{
			cout << "\t" << a[i];
			sum += a[i];
		}
	}
	return sum;
}


int TinhTichSoChinhPhuong(MANG a, int n) {
	int tich = 1;
	cout << endl << "\n Xem so chinh phuong:\t";
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoChinhPhuong(a[i]) == true)
		{
			cout << "\t" << a[i];
			tich *= a[i];
		}
	}
	return tich;
}
#pragma once
#define MAX 100

typedef int Array[MAX];


void NhapMangTuDong(Array a, int& n) {
	do
	{
		cout << endl << "\n Nhap vao so luong phan tu mang:  ";
		cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		// công thức tính sinh số ngẫu nhiên
		a[i] = rand() % (10 - -10 + 1) + -10;
	}
}

void NhapMangTuKey(Array a, int& n) {
	do
	{
		cout << endl << "\n Nhap vao so luong phan tu mang:  ";
		cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		cout << endl << " Nhap a[" << i << "] =  ";
		cin >> a[i];
	}
}

void XuatMang(Array a, int n) {
	cout << endl << "\n Xuat Mang:\t";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

void TimViTriCuaPhanTuXNhapVao(Array a, int n, int x) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			cout << endl << "\n Phan tu nhap vao x = " << x << " nam o vi tri i = " << i << " trong mang";
		}
	}
}

void NhapVaoViTriIXuatRaGiaTriX(Array a, int n, int x) {
	for (int i = 0; i < n; i++)
	{
		if (i == x)
		{
			cout << endl << "\n Vi tri nhap vao i = " << i << " co gia tri x = " << x;
		}
	}
}

int TimGiaTriNhoNhatTrongMang(Array a, int n) {
	// gán giả sử ban đầu biến min = vị trí 0 trong mảng a
	int min = a[0];
	// duyệt vòng lặp kiểm tra các phần tử trong mảng
	for (int i = 0; i < n; i++)
	{
		// nếu tại vị trí min a[0] mà nhỏ hơn vị trí i trong mảng a
		if (min > a[i]) {
			min = a[i];		// thì min = chính vị trí i trong mảng a đó
		}
	}
	// sau khi tìm xong trả về kết quả min nhỏ nhất
	return min;
}

int TimGiaTriLonNhatTrongMang(Array a, int n) {
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

void TimSoLeTrongMang(Array a, int n) {
	cout << endl << "\n Xem so le:\t";
	for (int i = 0; i < n; i++){
		if (a[i] % 2 != 0) {
			cout << a[i] << "\t";
		}
	}
}

void TimSoChanTrongMang(Array a, int n) {
	cout << endl << "\n Xem so chan:\t";
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << "\t";
		}
	}
}

void TimSoAmTrongMang(Array a, int n) {
	cout << endl << "\n Xem so am:\t";
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			cout << a[i] << "\t";
		}
	}
}

void TimSoDuongTrongMang(Array a, int n) {
	cout << endl << "\n Xem so duong:\t";
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			cout << a[i] << "\t";
		}
	}
}

// case 12: Tìm các số nguyên trong mảng
bool KiemTraSoNguyenTo(int n) {
	if (n < 2)
		return false;
	for (int i = 0; i < sqrt(n); i++)
		if (n % 2 == 0)
			return false;
	return true;
}

void XuatCacSoNguyenTo(Array a, int n) {
	cout << endl << "\n Xuat cac so nguyen to:\t";
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(a[i])) {
			cout << a[i] << "\t";
		}
	}
}

// case 13: Tìm các số chính phương trong mảng
bool KiemTraSoChinhPhuong(int n) {
	int i = sqrt(n);
	if (i * i == n)
	{
		return true;
	}
	return false;
}

void XuatSoChinhPhuong(Array a, int n) {
	cout << endl << "\n Xuat ra cac so chinh phuong:\t";
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoChinhPhuong(a[i]) == true)
		{
			cout << a[i] << "\t";
		}
	}
}

void ThemGiaTriVaoViTri(Array a, int& n, int x, int vt) {
	for (int i = n; i > vt; i--)
	{
		a[i] = a[i - 1];
	}
	a[vt] = x;
	n++;
}

void ThemGiaTriVaoDauMang(Array a, int& n, int x) {
	ThemGiaTriVaoViTri(a, n, x, 0);
}

void ThemGiaTriVaoCuoiMang(Array a, int& n, int x) {
	ThemGiaTriVaoViTri(a, n, x, n);
}

bool KiemTraGiaTriXTrongMang(Array a, int n, int x) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x) {
			cout << endl << " Gia tri nhap vao x = " << x << " nam trong mang";
			return true;
		}
	}
	cout << endl << " Gia tri nhap vao x = " << x << " khong nam trong mang";
	return false;
}

bool KiemTraViTriCoTonTaiTrongMang(Array a, int n, int vt) {
	if (vt <= 0 || vt > n) {
		cout << endl << " Vi tri = " << vt << " vua nhap vao khong ton tai trong mang";
		return false;
	}
	cout << endl << " Vi tri = " << vt << " ton tai trong mang";
	return false;
}

bool KiemTraMangCoToanSoDuong(Array a, int n) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			cout << endl << "\n Mang vua nhap vao ko phia la mang toan so duong";
			return false;
		}
	}
	cout << endl << "\n Mang vua nhap vao la mang toan so duong";
	return true;
}

// sắp xếp đổi chỗ trực tiếp Interchange sort
void HoanVi(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

void SapXepMangTangDan(Array a, int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j]) {
				HoanVi(a[i], a[j]);
			}
		}
	}
}

void SapXepMangGiamDan(Array a, int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}

int TinhTongCacSoDuong(Array a, int n) {
	int sum = 0;
	cout << endl << "\n Xem cac so duong:\t";
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0) {
			cout << a[i] << "\t";
			sum += a[i];
		}
	}
	return sum;
}

int TinhTongCacSoAm(Array a, int n) {
	int sum = 0;
	cout << endl << "\n Xem cac so am:\t";
	for (int i = 0; i < n; i++)
	{// nếu phần tử i trong mảng a nhỏ hơn 0 thực hiện xuất các số âm ra và thực hiện tính tổng các số âm đó
		if (a[i] < 0) {
			cout << a[i] << "\t";
			sum += a[i];
		}
	}
	return sum;
}

int TinhTongCacSoChan(Array a, int n) {
	int sum = 0;
	cout << endl << "\n Xem cac so chan:\t";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0) {
			cout << "\t" << a[i];
			sum += a[i];
		}
	}
	return sum;
}

int TinhTongCacSoLe(Array a, int n) {
	int sum = 0;
	cout << endl << "\n Xem cac so le:\t";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0) {
			cout << a[i] << "\t";
			sum += a[i];
		}
	}
	return sum;
}

int TinhTongCacSoNguyenTo(Array a, int n) {
	int sum = 0;
	cout << endl << "\n Xem so nguyen to:\t";
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(a[i])) {
			cout << a[i] << "\t";
			sum += a[i];
		}
	}
	return sum;
}

int TinhTongCacSoChinhPhuong(Array a, int n) {
	int sum = 0;
	cout << endl << "\n Xem so chinh phuong:\t";
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoChinhPhuong(a[i]) == true) {
			cout << a[i] << "\t";
			sum += a[i];
		}
	}
	return sum;
}

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

// case 4: tìm vị trí của phần tử x trong mảng nhập vào
void TimViTriCuaPhanTuXNhapVao(Array a, int n, int x) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			cout << endl << "\n Phan tu nhap vao x = " << x << " nam o vi tri i = " << i << " trong mang";
		}
	}
}

// case 5: tìm giá trị x trong mảng
void NhapVaoViTriIXuatRaGiaTriX(Array a, int n, int x) {
	for (int i = 0; i < n; i++)
	{
		if (i == x)
		{
			cout << endl << "\n Vi tri nhap vao i = " << i << " co gia tri x = " << x;
		}
	}
}

// case 6: Tìm giá trị nhỏ nhất trong mảng
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

// case 7: Tìm giá trị lớn nhất trong mảng
int TimGiaTriLonNhatTrongMang(Array a, int n) {
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

// case 8: Tìm số lẻ trong mảng
void TimSoLeTrongMang(Array a, int n) {
	cout << endl << "\n Xem so le:\t";
	for (int i = 0; i < n; i++){
		if (a[i] % 2 != 0) {
			cout << a[i] << "\t";
		}
	}
}

// case 9: Tìm các số chẵn trong mảng
void TimSoChanTrongMang(Array a, int n) {
	cout << endl << "\n Xem so chan:\t";
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << "\t";
		}
	}
}


// case 10: Tìm số âm trong mảng
void TimSoAmTrongMang(Array a, int n) {
	cout << endl << "\n Xem so am:\t";
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			cout << a[i] << "\t";
		}
	}
}

// case 11: Tìm số dương trong mảng
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

// case 14: Thêm giá trị x vào vị trí i 
void ThemGiaTriVaoViTri(Array a, int& n, int x, int vt) {
	for (int i = n; i > vt; i--)
	{
		a[i] = a[i - 1];
	}
	a[vt] = x;
	n++;
}

// case 15: Thêm giá trị vào đầu mảng
void ThemGiaTriVaoDauMang(Array a, int& n, int x) {
	ThemGiaTriVaoViTri(a, n, x, 0);
}

// case 16: Thêm giá trị vào cuối mảmg
void ThemGiaTriVaoCuoiMang(Array a, int& n, int x) {
	ThemGiaTriVaoViTri(a, n, x, n);
}

// case 17: Kiểm tra giá trị x nhập vào có trong mảng
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

// case 18 Kiểm tra vị trí nhập vào có tồn tại trong mảng
bool KiemTraViTriCoTonTaiTrongMang(Array a, int n, int vt) {
	if (vt <= 0 || vt > n) {
		cout << endl << " Vi tri = " << vt << " vua nhap vao khong ton tai trong mang";
		return false;
	}
	cout << endl << " Vi tri = " << vt << " ton tai trong mang";
	return false;
}

// case 19 kiểm tra mảng có phải là số toàn dương ko
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
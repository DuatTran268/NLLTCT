#pragma once
// khai báo biến số
#define MAX 100
typedef int MANG[MAX];

// định nghĩa hàm xử lý
void NhapTuDongMang(MANG a, int& n) {
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

void NhapTuBanPhim(MANG a, int& n) {
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

void XuatMang(MANG a, int& n) {
	cout << endl << "\n Xuat mang:\t";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

void XoaTaiViTri(MANG a, int& n, int vt) {
	for (int i = vt + 1; i < n; i++)
	{
		a[i - 1] = a[i];
	}
	n--;
}

void XoaGiaTriXTrongMangNhapVao(MANG a, int& n, int x) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			XoaTaiViTri(a, n, i);
			i--;	// xóa là bớt đi nên i lùi 1 đơn vị

		}
	}
}

void XoaDauMang(MANG a, int& n) {
	XoaTaiViTri(a, n, 0);
}

void XoaCuoiMang(MANG a, int& n) {
	XoaTaiViTri(a, n, n);
}

// xóa số lớn nhất trong mảng
int TimMaxTrongMang(MANG a, int n) {
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
void XoaSoLonNhatTrongMang(MANG a, int& n) {
	cout << endl << "\n So max:\t";
	int x = TimMaxTrongMang(a, n);
	for (int i = 0; i < n; i++)		// duyệt lần lượt các phần tử trong mảng từ vt 0 -> đến n nhập vào
	{
		if (a[i] == x)
		{
			cout << a[i] << "\t";
			XoaTaiViTri(a, n, i);
			i--;
		}
	}
}

// xóa số nhỏ nhất trong mảng
int TimMinTrongMang(MANG a, int n) {		// tìm ra số nhỏ nhất trong mảng
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

void XoaSoNhoNhatTrongMang(MANG a, int& n) {		// gọi hàm tìm số nhỏ nhất ra rồi thực hiện xóa
	cout << endl << "\n So min:\t";
	int x = TimMinTrongMang(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)		// nếu giá trị i trong mảng a == giá trị nhỏ nhất của mảng đã gán vị trí ban đầu
		{
			cout << a[i] << "\t";		// xuất ra số nhỏ nhất
			XoaTaiViTri(a, n, i);		// thì thực hiện xóa
			i--;
		}
	}
}


void XoaCacSoAmTrongMang(MANG a, int& n) {
	cout << endl << "\n So am:\t";
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			cout << a[i] << "\t";
			XoaTaiViTri(a, n, i);
			i--;
		}
	}
}

void XoaCacSoDuongTrongMang(MANG a, int& n) {
	cout << endl << "\n So duong:\t";
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			cout << a[i] << "\t";
			XoaTaiViTri(a, n, i);
			i--;
		}
	}
}

void XoaCacSoChanTrongMang(MANG a, int& n) {
	cout << endl << "\n So chan:\t";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)		// chia hết cho 2 thì là số chẵn
		{
			cout << a[i] << "\t";
			XoaTaiViTri(a, n, i);
			i--;
		}
	}
}

void XoaCacSoLeTrongMang(MANG a, int& n) {
	cout << endl << "\n So le:\t";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			cout << a[i] << "\t";
			XoaTaiViTri(a, n, i);
			i--;
		}
	}
}

bool KiemTraSoChinhPhuong(int n) {
	int i = sqrt(n);
	if (i * i == n)
	{
		return true;
	}
	return false;
}

void XoaCacSoLaSoChinhPhuong(MANG a, int& n) {
	cout << endl << "\n Xem so chinh phuong:\t";
	for (int i = 0; i < n; i++)			// duyệt vòng lặp kiểm tra các phần tử trong mảng
	{
		if (KiemTraSoChinhPhuong(a[i]) == true)	// kiểm tra nếu số chính phương == 1 ( là biến đúng true)
		{
			cout << a[i] << "\t";
			XoaTaiViTri(a, n, i);			// thì thực hiện xóa tại vị trí số chính phương đó, truyền vào vị trí i
			i--;			// giá trị i thay đổi sau mỗi lần xóa nên phải lùi lại
		}
	}
}

void XoaPhanTuTrungVoiXNhapVao(MANG a, int& n, int x) {//int& n: chiều dài mảng thay đổi sau mỗi lần xóa nên cần tham chiếu n
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)		// nếu giá trị i trong mảng a mà = với giá trị x nhập vào
		{
			XoaTaiViTri(a, n, i);		// thì thực hiện việc xóa tại vị trí i trong mảng đó
			i--;
		}
	}
}


bool KiemTraSoNguyenTo(int n) {
	if (n < 2)
		return false;
	// vì nếu gtri i nhỏ hơn 2 là sai
	for (int i = 2; i <= sqrt(n); i++)	// nên gt i bắt đầu từ 2 -> căn bậc 2 của n nhập vào		
		if (n % i == 0)
			return false;
	return true;
}

void XoaSoNguyenToTrongMang(MANG a, int& n) {
	cout << endl << "\n Xuat mang so nguyen to:\t";
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(a[i]))
		{
			cout << a[i] << "\t";
			XoaTaiViTri(a, n, i);
			i--;
		}
	}
}

void XoaCacSoTrungNhauTrongMang(MANG a, int& n) {
	cout << endl << "\n So trung nhau la:\t";
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				cout << a[i] << "\t";		// xuất ra giá trị các số trùng nhau  (*)
				XoaTaiViTri(a, n, i);
				i--;
			}
		}
	}
}
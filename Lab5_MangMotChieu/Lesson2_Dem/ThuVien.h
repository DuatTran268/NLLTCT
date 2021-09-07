#pragma once
// khai báo hằng
#define MAX 100
#define TAB '\t'

// định nghĩa kiểu dữ liệu mới
typedef int DaySo[MAX];

// khai báo nguyên mẫu hàm
void NhapMangTuDong(DaySo a, int& n);
void XuatMang(DaySo a, int& n);
int KiemTraSoCo3ChuSo(int n);
int DemSoLuongSoCo3ChuSo(DaySo a, int n);
int DemSoNgoaiMinMax(DaySo a, int n, int min, int max);
int KiemTraSoChinhPhuong(int n);
int DemSoChinhPhuong(DaySo a, int n);
int DemSoLanXuatHienX(DaySo a, int n, int x, int vt);




// định nghĩa các hàm

void NhapMangTuDong(DaySo a, int& n)
{
	cout << endl << " Nhap vao kich thuoc mang n:  ";
	cin >> n;
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		//a[i] = (MAX / 2 - rand() % MAX) / 6;
		a[i] = rand() % 300;			// mảng a[i]	= nhập tự động chia ngẫu nhiên random() cho 300 là 3 chữ số | mục đích làm câu 3
	}
}

void XuatMang(DaySo a, int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
}

// 3. kiểm tra số có 3 chữ số
int KiemTraSoCo3ChuSo(int n)
{
	int kq = 0;
	int count = 0;		// giả sử ban đầu biến đếm = 0
	while (n > 0)	// khi n lón hơn 0 
	{
		count++;	// thực hiện đếm 
		n /= 10;		// toán tử /= :   n = n / 10
	}
	if (count == 3)
	{
		kq = 1;
	}
	return kq;
}
int DemSoLuongSoCo3ChuSo(DaySo a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (KiemTraSoCo3ChuSo(a[i]))
			count++;
	return count;
}
// 4. đếm số ngoài phạm vi min max 
int DemSoNgoaiMinMax(DaySo a, int n, int min, int max)
{
	int count = 0;		// gán biến đếm ban đầu = 0
	for (int i = 0; i < n; i++)		// duyệt mảng
		if (a[i] < min || a[i] > max)	// a[i] lớn hơn max hoặc a[i] nhỏ hơn min
			count++;	// thực hiện đếm
	return count;
}

// 5. Số chính phương
int KiemTraSoChinhPhuong( int n)
{
	int so;
	so = (int)sqrt((double)n);
	return (so * so == n);
}

int DemSoChinhPhuong(DaySo a, int n)
{
	int count = 0;		// gán ban đầu biến đếm = 0
	for (int i = 0; i < n; i++)		// sử dụng vòng lặp duyệt mảng
		if (KiemTraSoChinhPhuong(a[i]))	// nếu kiểm tra số chính phương có giá trị i trong mảng a
			count++;	// thực hiện đếm
	return count;		// trả về kết quả
}

int DemSoLanXuatHienX(DaySo a, int n, int x, int vt)
{
	if (vt >= n)		// nếu vị trí nhập vào lớn hơn n
		return 0;		// trả về 0
	int count = 0;	
	for (int i = 0; i < n; i++)
		if (a[i] == x)		// nếu trong mảng a giá trị i = x
			count++;	// thực hiện đếm
	return count;		// trả về kết quả đếm được
}

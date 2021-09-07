#pragma once
// định nghĩa hằng
#define MAX 100
#define TAB '\t'

// định nghĩa kiểu dữ liệu mới
typedef int DaySo [MAX];


// khai báo nguyên mẫu hàm
void NhapTuDong(DaySo a, int& n);
void XuatMang(DaySo a, int n);
int SoNguyenTo(int n);
int SoNguyenToCuoiCung(DaySo a, int n);
int ViTriMax(DaySo a, int n);
int DemSoLanXuatHien(DaySo a, int n, int x);
int ViTriMin(DaySo a, int n);
int SoAmLonNhat(DaySo a, int n);
int SoDuongNhoNhat(DaySo a, int n);






// định nghĩa các hàm
void NhapTuDong(DaySo a, int& n)
{
	do
	{
		cout << endl << "\n Nhap vao so phan tu cua mang:  ";
		cin >> n;
	} while (n<0);
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = (MAX / 2 - rand() % MAX) / 6;
	}
}

void XuatMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
}

// hàm số nguyên tố
// số nguyên tố là số tự nhiên lớn hơn 1 có 2 ước là 1 và chính nó
int SoNguyenTo(int n)
{
	if (n<2)	// nếu n nhỏ hơn 2 thì trả về kết quả false vì ko phải số nguyên tố
	{
		return false;
	}
	int kq = 1;		// gán giả sử ban đầu biến kq = 1
	for (int i = 2; i <= sqrt(n); i++)		// sử dụng vòng lặp for duyệt mảng
		if (n % i == 0)			// nếu n chia hết cho giá trị i
		{
			kq = 0;				// gán kết quả = 0
			break;			// kết thúc ko kiểm tra số nguyên tố nữa
		}
	return kq;		// trả về kết quả
}
// hàm số nguyên tố cuối cùng
int SoNguyenToCuoiCung(DaySo a, int n)
{
	int kq = -1;			// gán biến kq giả sử = -1
	for (int i = 0; i < n; i++)		// sử dụng vòng lặp duyệt mảng
		if (SoNguyenTo(a[i]))		// nếu mảng a giá trị i là số nguyên tố
			kq = i;					// gán kết quả bằng giá trị i đó
	return kq;		// trả về kết quả
}

// hàm tìm max số nguyên tố
int ViTriMax(DaySo a, int n)
{
	int vt = 0;
	int max = a[0];		// giả sử max là vị trí đầu tiên
	for (int i = 0; i < n; i++)		// duyệt mảng
		if (a[i] > max)		// vị trí thứ i trong mảng lớn hơn max là vị trí a[0]
		{
			max = a[i];			// thì max sẽ được gán vào mảng a[i]
			vt = i;				// vị trí max là vị trí của giá trị i trong mảng
		}
	return vt;				// trả về vị trí
}

//Đếm số lần xuất hiện
int DemSoLanXuatHien(DaySo a, int n, int x)
{
	int count = 0;		// gán biến đếm ban đầu là ko
	for (int i = 0; i < n; i++)	// duyệt mảng
		if (a[i] == x)	// nếu giá trị i của mảng == x
			count++;		// thực hiện đếm
	return count;	// trả về kết quả đếm
}

// tìm vị trí min
int ViTriMin(DaySo a, int n)
{
	int vt = 0;
	int min = a[0];
	for (int i = 0; i < n; i++)
		if (a[i] < min)
		{
			min = a[i];
			vt = i;
		}
	return vt;
}
int SoAmLonNhat(DaySo a, int n)
{
	int kq = INT_MIN, vt = -1, i;

	for (i = 0; i < n; i++)
		if (a[i] < 0)
		{
			kq = a[i];
			vt = i;
			break;
		}

	if (vt == -1)
		return vt;

	for (i; i < n; i++)
	{
		if (a[i] < 0 && a[i] > kq)
		{
			kq = a[i];
			vt = i;
		}
	}

	return vt;
}

int SoDuongNhoNhat(DaySo a, int n)
{
	int kq = INT_MAX, vt = -1, i;
	for (i = 0; i < n; i++)
		if (a[i] > 0)
		{
			kq = a[i];
			vt = i;
			break;
		}

	if (vt == -1)
		return vt;

	for (i; i < n; i++)
		if (a[i] > 0 && (a[i] < kq))
		{
			kq = a[i];
			vt = i;
		}
	return vt;
}

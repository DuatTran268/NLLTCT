#pragma once

// định nghĩa hằng
#define MAX 100


typedef int Mang[MAX];

// khai báo nguyên mẫu hàm
void NhapTuDong(Mang a, int& n);
void XuatMang(Mang a, int& n);
bool KiemTraSoNguyenTo(int n);
void XuatSoNguyenTo(Mang a, int n);
int TinhTongCacPhanTuLaSoNguyenTo(Mang a, int n);
void XuatSoChinhPhuong(Mang a, int n);
int TinhTongCacPhanTuTrongMang(Mang a, int n);
int TimMax(Mang a, int n);
int TimMin(Mang a, int n);
void TimSoDuong(Mang a, int n);
void TimSoAm(Mang a, int n);
int TinhTongCacSoDuong(Mang a, int n);
int TinhTongCacSoAm(Mang a, int n);
int TinhTichCacSoLe(Mang a, int n);
int TinhTongCuaCacSoChan(Mang a, int n);
void TimViTriCuaSoNguyenTo(Mang a, int n);
int DemSoNguyenToTrongMang(Mang a, int n);
int DemSoLeTrongMang(Mang a, int n);
int DemSoDuongTrongMang(Mang a, int n);




// định nghĩa các hàm
void NhapTuDong(Mang a, int& n)
{
	do
	{
		cout << endl << "\n Nhap vao so luong phan tu cua mang:  ";
		cin >> n;
	} while (0 >= n || n > MAX);

	for (int i = 0; i < n; i++)
	{

		a[i] = rand() % (10 - -10 + 1) + -10;	// công thức tính sinh số ngẫu nhiên rand() % (max – min + 1) + min 
	}
}


void XuatMang(Mang a, int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";		// xuất ra giá trị vừa nhập vào mảng a[i]
	}
}


bool KiemTraSoNguyenTo(int n)
{
	// số nguyên tố là số chia hết cho 1 và chính nó

	if (n < 2)		// vì số nguyên tố lớn hơn 1 nên sử dụng đk n < 2 thì là sai
		return false;
	for (int i = 2; i <= sqrt(n); i++)	// n < 2 là sai nên chạy vòng lặp giá trị i = 2 đến căn bậc 2 của n (hoặc; n/2)
		if (n % i == 0)
			return false;
	return true;
}

void XuatSoNguyenTo(Mang a, int n)
{
	for (int i = 0; i < n; i++)	// duyệt mảng
	{
		if (KiemTraSoNguyenTo(a[i]))	// nếu là số nguyên tố 
		{
			cout << a[i] << "\t";	// thực hiện xuất ra màn hình
		}
	}
}

int TinhTongCacPhanTuLaSoNguyenTo(Mang a, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		if (KiemTraSoNguyenTo(a[i]))
			sum += a[i];
	return sum;
}


// ============= ERROR ============================
bool KiemTraSoChinhPhuong(int n)
{
	if (n < 1)
		return false;
	int i = sqrt(n);
	if (i * i == n)
		return true;

	return false;
}

void XuatSoChinhPhuong(Mang a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoChinhPhuong(a[i]))
			cout << KiemTraSoChinhPhuong(a[i]) << "\t";
	}
}
// ============= ERROR ============================




int TinhTongCacPhanTuTrongMang(Mang a, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
	}
	return sum;
}

int TimMax(Mang a, int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}

int TimMin(Mang a, int n)
{
	int min = 0;
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	return min;
}

void TimSoDuong(Mang a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)			// nếu giá trị i mảng a lớn hơn 0 xuất ra màn hình các giá trị dương
		{
			cout << a[i] << "\t"; // xuất ra màn hình các số dương
		}
	}
}

void TimSoAm(Mang a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			cout << a[i] << "\t";
		}
	}
}

int TinhTongCacSoDuong(Mang a, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)		// nếu giá trị i của mảng a lớn hơn 0 là số dương
		{
			sum += a[i];		// thực hiện tính tổng sum = sum + a[i]
		}
	}
	return sum;
}

int TinhTongCacSoAm(Mang a, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)	// nếu giá trị i của mảng a nhỏ hơn 0 là số âm
		{
			sum += a[i];	// thực hiện tính tổng
		}
	}
	return sum;
}

int TinhTichCacSoLe(Mang a, int n)
{
	int tich = 1;		// tích luôn = 1 vì một số tích nhân 0 = 0
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)		// nếu giá trị i của mảng a ko chia hết cho 2 là số lẻ
		{
			tich *= a[i];		// thì thực hiện tính tích là:  tích = tích * a[i]
		}
	}
	return tich;
}

int TinhTongCuaCacSoChan(Mang a, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			sum += a[i];
		}
	}
	return sum;
}


void TimViTriCuaSoNguyenTo(Mang a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(a[i]))	// nếu là số nguyên tố
		{
			cout << i << "\t";	// thực hiện xuất vị trí i ( xuất giá trị là a[i]
		}
	}
}

int DemSoNguyenToTrongMang(Mang a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(a[i]))	// nếu là số nguyên tố
		{
			count++;	// thực hiện + dần lên
		}
	}
	return count;
}



int DemSoLeTrongMang(Mang a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			count++;
		}
	}
	return count;
}

int DemSoDuongTrongMang(Mang a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			count++;
		}
	}
	return count;
}
#pragma once
#pragma once

#define MAX 100

typedef int mang[MAX];

//khai báo nguyên mẫu hàm
void NhapMang(mang a, int& n);
void XuatMang(mang a, int& n);






void NhapMang(mang a, int& n)
{
	/*cout << endl << " Nhap vao chieu dai mang:  ";
	cin >> n;*/

	do
	{
		cout << endl << " Nhap so luong phan tu mang:  ";	// xuất thông báo lệnh yêu cầu ra màn hình để người dùng nhập vào
		cin >> n;
	} while (0 >= n || n > MAX);

	for (int i = 0; i < n; i++)
	{
		cout << " Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatMang(mang a, int& n)
{
	// số lượng phần tử trong mảng là từ 0 đến n nhập vào 
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";	// các giá trị cách nhau bởi dấu tab
	}
}

int TinhTong(mang a, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];

	}
	return sum;
}
int TinhTich(mang a, int n)
{
	int kq = 1;		// tích phải = 1
	for (int i = 0; i < n; i++)
	{
		kq *= a[i];		// <->  kq = kq*a[i]
	}
	return kq;
}


void XuatCacSoChan(mang a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)		// số chẵn là các số chia hết cho 2
		{
			cout << a[i] << "\t";
		}
	}
}


void XuatCacSoLe(mang a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)		// so lẻ ko chia hết cho 2
		{
			cout << a[i] << "\t";
		}
	}
}


void TimViTriCuaSoLe(mang a, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			cout << i << "\t";
		}
	}
}
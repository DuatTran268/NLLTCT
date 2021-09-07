#pragma once
// định nghĩa hằng
#define MAX 100
#define TAB '\t'

// 
typedef int DaySo [MAX];

// khai báo nguyên mẫu hàm
void NhapMangTuDong(DaySo a, int& n);
void XuatMang(DaySo a, int& n);



// định nghĩa hàm
void NhapMangTuDong(DaySo a, int& n)
{
	cout << endl << " Nhap vao so phan tu mang:  ";
	cin >> n;
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = (MAX / 2 - rand() % MAX) / 6;
	}
}

void XuatMang(DaySo a, int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;
	}
}

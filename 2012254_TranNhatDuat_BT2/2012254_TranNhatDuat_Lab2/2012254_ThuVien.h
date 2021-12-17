#pragma once
#define MAX 100

typedef int DaySo[MAX];

void NhapDaySoTuDong(DaySo a, int& n);
void XuatDaySo(DaySo a, int n);
int TinhTichCacPhanTuTrongDaySo(DaySo a, int n);
int TinhGiaTriLonNhatCuaDaySo(DaySo a, int n);
int DemSoLanXuatHienCuaGiaTriLonNhat(DaySo a, int n);

void NhapDaySoTuDong(DaySo a, int& n) {
	do
	{
		cout << endl << "\n Nhap vao so luong phan tu cua mang:  ";
		cin >> n;
	} while (n <= 0);
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (8 - -8 + 1) + -8;
	}
}

void XuatDaySo(DaySo a, int n) {
	cout << endl << "\n Xuat mang:\t";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

int TinhTichCacPhanTuTrongDaySo(DaySo a, int n) {
	int tich = 1;
	for (int i = 0; i < n; i++)
	{
		tich *= a[i];
	}
	return tich;
}

int TinhGiaTriLonNhatCuaDaySo(DaySo a, int n) {
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}

int DemSoLanXuatHienCuaGiaTriLonNhat(DaySo a, int n) {
	int count = 0;
	int max = TinhGiaTriLonNhatCuaDaySo(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == max)
			count++;
	}
	return count;
}


#pragma once
void XuatDaySo(int n);
int DemSoChiaHetCho3vaCho4(int n);


int DemTatCaSoLuongChuSo(int n);


void XuatDaySo(int n)
{
	cout << endl;
	for (int i = 0; i <= n; i++)
	{
		cout << i << "\t";
		if (i % 10 == 0)	//điều kiện để mỗi dòng chứa 10 số
		{
			cout << "\n";
		}
	}
}
// hàm đếm số chia hết cho 3 chia hết cho 4
int DemSoChiaHetCho3vaCho4(int n)
{
	int count = 0;
	for (int i = 1; i <= n; i++)	// sử dụng vòng lặp for chô i chạy từ 1 đến  n nhập vào
		if (i % 3 == 0 && i % 4 != 0)	// nếu i chia hết cho 3 và ko chia hết cho 4 
			count++;		// thì thực hiện đếm từ 0 đếm đi
			return count;	// trả về kết quả đếm 
}

int DemTatCaSoLuongChuSo(int n)
{
	int count = 0;

	while (n % 10 != 0)
	{
		count++;
		n /= 10;
	}

	return count;
}
int DaoNguocSo(int n)
{
	int daoNguocSo = 0;
	int tmp;
	while (n>0)
	{
		tmp = n % 10;
		daoNguocSo = daoNguocSo * 10 + tmp;
		n /= 10;
	}
	return daoNguocSo;


}


int TongCacChuSo(int n)
{
	int sum = 0;

	while (n % 10 > 0)
	{
		sum += (n % 10);
		n /= 10;
	}

	return sum;
}

int TimChuSoDauTien(int n)
{
	int first;

	while (n % 10 > 0)
	{
		first = n % 10;
		n /= 10;
	}

	return first;
}

bool laSoHoanChinh(int n)
{
	int sum = 0;

	for (int i = 1; i <= n / 2; i++)
		if (n % i == 0)
			sum += i;

	return sum == n;
}

void XuatSoHoanChinh(int n)
{
	cout << "\nCac so hoan chinh tu 1 .. " << n << " la: ";
	for (int i = 1; i <= n; i++)
		if (laSoHoanChinh(i))
			cout << i << ", ";
}


int TimSoNguyenThoaDieuKien(int n)
{
	int m = 1;
	int sum = 0;

	while (sum + m <= n)
	{
		sum += m;
		m++;
	}

	m--;
	return m;
}
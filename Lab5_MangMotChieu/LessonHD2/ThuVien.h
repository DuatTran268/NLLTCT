#define	MAX	100
#define	TAB	'\t'

typedef	int	DaySo[MAX];


// khai báo nguyên mẫu hàm
void NhapTuDong(DaySo a, int n);
void XuatMang(DaySo a, int n);
int  Dem_X(DaySo a, int n, int x);
int DemSoNguyenTo(DaySo a, int n);
int KiemTraSoNguyenTo(int x);
int TinhTong(DaySo a, int n);
int TinhTongDuyNhat(DaySo a, int n);
int TinhTongPhanBiet(DaySo a, int n);



// đinh nghĩa các hàm xử lý
void NhapTuDong(DaySo a, int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = (MAX / 2 - rand() % MAX) / 2; //ngau nhien trong khoang [-8, 8]
}

void XuatMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << TAB;
}


int Dem_X(DaySo a, int n, int x)
{
	int i, dem = 0;
	for (i = 0; i < n; i++)
		if (a[i] == x)
			dem++;
	return dem;
}

// hàm kiểm tra xem 1 số có phải số nguyên tố
/*Intput : x; //số nguyên
Output :
1; néu x nguyen tố
0; ngược lại*/

int KiemTraSoNguyenTo(int x)
{
	int m, kq;
	if (x < 2)	
	{
		kq = 0;
	}
	else
	{
		m = (int)sqrt((double)x);
		kq = 1;
		for (int i = 2; i <= m; i++)
		{
			if (x % i == 0)
			{
				kq = 0;
				break;
			}
		}
	}
	return kq;
}

// định nghĩa hàm đếm và xuất các số nguyên tố trong a
/*Intput a,//day so
N; //so nguyen
Output : dem //so cac so nguyen to trong a*/
int DemSoNguyenTo(DaySo a, int n)
{
	int count = 0;
	cout << endl << " Cac so nguyen to trong a:  ";
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(a[i]))
		{
			count++;
			cout << a[i] << TAB;
		}
	}
	return count;
}

// hàm tính tổng các số nguyên tố
// Input: a,n
// Output: sum = tổng giá trị các phần tử trong mảng
int TinhTong(DaySo a, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];	//
	}
	return sum;
}

// 6. Tính tổng các giá trị chỉ xuất hiện 1 lần duy nhất
/*Input: a,n
Output: sum = tổng các giá trị chỉ xuất hiện 1 lần*/
int TinhTongDuyNhat(DaySo a, int n)
{
	int sum = 0;	// gán giả sử ban đầu tổng = 0
	for (int i = 0; i < n; i++)	// sủ dụng vòng lặp for duyệt các phần tử trong mảng
	{
		if (Dem_X(a,n,a[i]) == 1)	// nếu đếm các phần tử trong mảng == xuất hiện 1 lần duy nhất trong mảng
		{
			sum += a[i];	// thực hiện tính tổng các giá trị trong mảng
		}
	}
	return sum;	// trả về kết quả là tổng
}

// 7. Tính tổng phân biệt
/*Input: a,n
Output: sum = tổng các giá trị phân biệt
*/

int TinhTongPhanBiet(DaySo a, int n)
{
	DaySo b;	// DaySo b dùng để lưu trữ các giá trị phân biệt của a
	int m,	// kích thước của mảng b
		j,	// duyet b
		dau,	// danh sách dấu để nhận biết dạng a[i] đã xuất hiện trong b
		sum = 0;
	m = 0;
	for (int i = 0; i < n; i++)
	{
		dau = 1;		// a[i] có chứa dấu trong b
		for (int j = 0; j < m && dau; j++)
		{
			dau = dau && (a[i] != b[j]);
		}
		if (dau)	// a[i] chua co trong b
		{
			b[m++] = a[i];
			sum += a[i];
		}
	}
	return sum;
}
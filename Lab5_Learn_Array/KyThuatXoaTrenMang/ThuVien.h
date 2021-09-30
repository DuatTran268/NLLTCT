#pragma once
// định nghĩa hằng số
#define MAX 100

typedef int MANG[MAX];



// khai báo nguyên mẫu hàm
void NhapTuDong(MANG a, int& n);
void XuatMang(MANG a, int& n);
void XoaPhanTuTaiViTri(MANG a, int& n, int vt);




// định nghĩa các hàm xử lý
void NhapTuDong(MANG a, int& n)
{
	do
	{	// nhập vào trước mới kiểm tra điều kiện
		cout << endl << "\n Nhap vao so luong phan tu cua mang:  ";
		cin >> n;
	} while (0>=n || n > MAX);	// nhập xong kiểm tra điều kiện đúng thực hiện tiếp chương trình , sai thì bắt nhập lại
	// điều kiện đúng thực hiện
	for (int i = 0; i < n; i++)		// sử dụng vòng lặp for duyệt các phần tử trong mảng từ vt i = 0 đến vt n nhập vào
	{
		a[i] = rand() % (10 - -10 + 1) + -10;
		// công thức tính sinh số ngẫu nhiên rand() % (max – min + 1) + min 
	}
}

void XuatMang(MANG a, int& n)
{
	for (int i = 0; i < n; i++)		// dùng for kiểm tra các phần tử giá trị trong mảng
	{
		cout << a[i] << "\t";	// xuất giá trị ra
	}

}
// hàm xóa phần tử tại vị trí
void XoaPhanTuTaiViTri(MANG a, int& n, int vt)
{
	// vòng lặp dịch từng phần tử từ vị trí về cuối mảng , dịch sang trái 1 đơn vị
	for (int i = vt + 1; i < n; i++)
	{
		a[i-1] = a[i];			// vd	a[3-1] = a[3]	=> vt a[2] được vt[3] dịch chuyển lên sau khi xóa
	}
	n--;		// sau khi xóa thì mảng giảm 1 phần tử, số lượng phần tử mảng giảm đi 1 đơn vị
}

// Tìm phần tử lớn nhất trong mảng 
int TimMaxTrongMang(MANG a, int n)		//sử dụng kdl int vì có kiểu trả về giá trị lớn nhất max
{
	int max = a[0];		// giả sử max ban đầu bằng vị trí 0 trong mảng		
	for (int i = 1; i < n; i++)		// duyệt từ vị trí số 1 đến vị trí cuối mảng
	{
		if (max < a[i])		// nếu max nhỏ hơn a[i] nào đó
		{
			max = a[i];		// thi gán cái max đó = chính a[i]
		}
	}
	return max;		// trả về kết quả max
}
// xóa các phần tử lớn nhất trong mảng
//int& n phải có tham chiếu để sau khi xóa n giảm để lưu lại giá trị n sau khi giảm
void XoaPhanTuLonNhatTrongMang(MANG a, int& n)	// vì hàm ko có kiểm trả về ko tính toán chỉ xóa nên sử dụng kdl void
{
	int x = TimMaxTrongMang(a, n);	// gán biến x = hàm tìm max trong mảng vừa tìm được
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)	// mảng a tại vị trí i mà = giá trị tìm max trong mảng 
		{
			// thì thực hiện xóa phần tử đó
			XoaPhanTuTaiViTri(a,n,i);		// truyền vào vị trí i cần xóa trong mảng
			i--;
		}
	}
}

// hàm xóa các số âm trong mảng
void XoaTatCaCacSoAmTrongMang(MANG a, int& n)		// int&n tham chiếu để n sẽ giảm đi sau mỗi lần thay đổi vị trí
{
	for (int i = 0; i < n; i++)		// sử dụng vòng lặp for duyệt kiểm tra mảng từ vt i = 0 đến i < n nhập vào
	{
		if (a[i] < 0)		// nếu mảng a có giá trị i nhỏ hơn 0 => số âm 
		{	
			// thì thực hiện việc xóa phần tử
			XoaPhanTuTaiViTri(a, n, i);	// gọi hàm xóa phần tử tại vị trí và truyền vào vị trí i cần xóa
			i--;		// vì xóa là bớt vị trí đi nên i phải trừ lùi và bớt đi 1 đơn vị
		}
	}
}

// hàm xóa các số chẵn trong mảng
void XoaTatCaCacSoChanTrongMang(MANG a, int& n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			XoaPhanTuTaiViTri(a, n, i);
			i--;
		}
	}
}

// hàm kiểm tra số chính phương để xóa
int KiemTraSoChinhPhuong(int n)
{
	return sqrt(float(n)) == (int)sqrt(float(n));
	
}

void XoaCacSoLaSoChinhPhuong(MANG a, int& n)
{
	cout << endl << "\n Xem so chinh phuong:\t";
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoChinhPhuong(a[i]) == 1)	// nếu gọi hàm ktra số chính phương trong mảng a có giá trị i == 1 
		{
			cout << a[i] << "\t";				// xuất ra các số là số chính phương
			XoaPhanTuTaiViTri(a, n, i);		// thì thực hiện xóa số chính phương đó truyền vào số chính phương
			i--;	// vị trí i tiến về bên trái của mảng sau khi xóa
		}
	}
}

// Xoa phan tu trung nhau
void XoaCacPhanTuTrungNhauX(MANG a, int& n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if ((a[i]) == x)		// nếu tại vị trí i của mảng a có giá trị x nhập vào = với giá trị tại vị trí  i đó
		{
			XoaPhanTuTaiViTri(a, n, i);		// thì thực hiện xóa phân tử tại vị trí i đó
			i--;
		}
	}
}

// hàm kiểm tra số nguyên tố để xóa
bool KiemTraSoNguyenTo(int n)
{
	if (n < 2)		// vì số nguyên tố bắt đầu từ 2 nên đặt điều kiện nếu n nhỏ hơn 2 thì trả về sai ( ko phải số nguyên tố )
		return false;
	for (int i = 2; i <= sqrt(n); i++)		// sử dụng for duyệt mảng i chạy từ 2 đến căn bậc 2 của n nhập vào
		if (n % i == 0)						// nếu n chia hết cho giá trị tại vị trí i trả về kết quả sai
			return false;
	return true;
}

void XoaTatCaCacSoNguyenTo(MANG a, int& n)
{
	cout << endl << "\n Xem so nguyen to:\t";			// xuất báo ra các số nguyên tố cho người dùng
	for (int i = 0; i < n; i++)			// sử dụng vòng lặp for kiểm tra
	{
		if (KiemTraSoNguyenTo(a[i]))			
		{
			cout << a[i] << "\t";
			XoaPhanTuTaiViTri(a, n, i);
			i--;
		}

	}
}

// hàm xóa phần tử trùng
void XoaPhanTuTrungChiGiuLai1PhanTu(MANG a, int& n)
{
	cout << endl << "\n So trung nhau la:\t";
	for (int i = 0; i < n -1 ; i++)		// vòng lặp duyệt từng phần tử của mảng
	{
		for (int j = i+1; j < n; j++)	// vòng lặp duyệt các phần tử nằm sau a[i], 
		{
			if (a[i] == a[j])		//nếu phía sau a[i] có phần tử a[j] trùng với a[i] thì xóa phần tử a[j] tức là xóa phần tử tại vị trí j
			{
				cout << a[i] << "\t";		// xuất ra giá trị các số trùng nhau
				XoaPhanTuTaiViTri(a, n, i);
				i--;
			}
		}
	}
}

// Xoa tat ca cac phan tu xuat hien nhieu hon 1 lan trong mang ( xóa số trùng )
void XoaCacPhanTuXuatHienNhieuHon1LanTrongMang(MANG a, int& n)		// có dấu int& n tham chiếu sau khi xóa số lượng phần tử mảng giảm xuống
{
	for (int i = 0; i < n-1; i++)
	{
		int kq = 0;		// false giả sử a[i] ko phải là phần tử xuất hiện nhiều hơn 1 lần
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])		// nếu mảng a có vị trí i trùng với vị trí j 
			{
				XoaPhanTuTaiViTri(a, n, j);		//thì xóa phần tử a[i] tại vị trí j ( truyền vào vị trí j)
				j--;	
				kq = 1;		// true , phần tử a[i] xuất hiện nhiều hơn 1 lần

			}
		}
		if (kq == 1)		// biến kq == true thì 
		{
			XoaPhanTuTaiViTri(a, n, i);	// xoa luon chinh no
			i--;
		}
	}
}
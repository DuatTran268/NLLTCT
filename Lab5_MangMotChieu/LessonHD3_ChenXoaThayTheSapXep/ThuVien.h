#pragma once
// định nghĩa hằng 
#define MAX 100		// kích thước khai báo mảng 1 chiều
#define TAB '\t'

// định nghĩa kiểu dữ liệu mới
typedef int DaySo[MAX];


// khai báo nguyên mẫu các hàm xử lý
void NhapTuDong(DaySo a, int& n);
void XuatMang(DaySo a, int n);
void ChenDauDay(DaySo a, int& n, int x);
void XoaDauDay(DaySo a, int& n);
void CatDau_ChenCuoi(DaySo a, int& n);
void Thay_X_Bang_Y(DaySo a, int& n, int x, int y);
void SappTang(DaySo a, int n); 
void HoanVi(int& x, int& y);




// định nghĩa các hàm xử lý chương trình
// hàm nhập tự động
void NhapTuDong(DaySo a, int& n)
{
	cout << endl << "\n Nhap kich thuoc mang n:  ";
	cin >> n;
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = (MAX / 2 - rand() % MAX) / 6;
	}
}
// hàm xuất mảng
void XuatMang(DaySo a, int n)
{
	for (int i = 0; i < n; i++)		// sử dụng vòng lặp để duyệt mảng kiểm tra
	{
		cout << a[i] << TAB;	// sau đó thực hiện xuất các giá trị i của mảng a[i]
	}
}

// 3 thuật toán chèn đầu dẫy của mảng
//Input : Day a, kich thuoc n, gia tri x can chen
//Output : Day a(them x o dau)
void ChenDauDay(DaySo a, int& n, int x)
{// sử dụng vòng lặp for duyệt ngược lại mảng: i chạy bắt đầu từ điểm cuối mảng, kết thúc tại giá trị i lớn hơn hoặc = 0, sau mỗi lần lặp i trừ đi 1 đơn vị
	for (int i = n - 1; i >= 0; i--)
	a[i + 1] = a[i];	// đổi ra sau 1 vị trí và bắt đầu từ cuối mảng
	a[0] = x;	 // gán x tại vị trí đầu mảng a là vị trí a[0]
	n++;		// kích thước mảng tăng lên 1
}

// 4. Hàm xóa đầu dãy
//Input : Day a, kich thuoc n,
//Output : Day a(bot vi tri dau day)
void XoaDauDay(DaySo a, int& n)
{
	for (int i = 0; i < n; i++)	// sử dụng vòng lặp duyệt các phần tử của mảng
		a[i - 1] = a[i];	// dịch chuyển về trước 1 vị trí bắt đầu từ vị trí 1
		n--;	// kích thước của mảng giảm đi 1	
}

// 5. Cắt phần tử đầu rồi chèn vào cuối dẫy 
void CatDau_ChenCuoi(DaySo a, int& n)
{
	int x;	// lưu phần tử đầu
	x = a[0];
	for (int i = 0; i < n; i++)	// duyệt mảng
		a[i - 1] = a[i];	// đổi về trước 1 vị trí, bắt đầu từ vị trí 1
	a[n - 1] = x;	// gán x tại vị trí cuối cùng của mảng
	
}

// 6. Định nghĩa hàm thay thế x trong dãy bằng y
// Input : Day a, kich thuoc n, gia tri x can thay the, gia tri thay the y
// Output : Day a(x thay boi y)
void Thay_X_Bang_Y(DaySo a, int& n, int x, int y)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)	// nếu giá trị i của mảng a bằng= giá trị x
			a[i] = y;	// thì giá trị i của mảng a đó gán= y
}


// 7. Định nghĩa hàm sắp dãy tăng
//Input : Day a, kich thuoc n
//Output : Day a(da tang)
void SappTang(DaySo a, int n)
{
	for (int i = 0; i < n-1; i++)
	for (int j = i+1; j < n; j++)
		if (a[i] > a[j])
			HoanVi(a[i], a[j]);		
}
// định nghĩa hàm hoán vị
void HoanVi(int& x, int& y)
{
	int tam;	
	tam = x;
	x = y;
	y = tam;
}
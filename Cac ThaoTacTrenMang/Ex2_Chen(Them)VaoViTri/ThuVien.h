#pragma once
// định nghĩa hằng và kiểu dữ liệu mới
#define MAX 100
typedef int MANG[MAX];

// khai báo nguyên mẫu hàm
void NhapMang(MANG a, int& n);
void XuatMang(MANG a, int n);
bool KiemTraViTri(MANG a, int& n, int x, int vt);
void ThemTaiViTri(MANG a, int& n, int x, int vt);
void ThemVaoDauMang(MANG a, int& n, int x);
void ThemVaoCuoiMang(MANG a, int& n, int x);




// định nghĩa các hàm xử lý
void NhapMang(MANG a, int& n)
{
	do
	{
		cout << endl << "\n Nhap vao so luong phan tu mang n =  ";
		cin >> n;
	} while (n <= 0);		// nếu n mà <= 0 thì bắt thực hiện lại việc nhập
	// nhập đúng điều kiện trên thì thực hiện cho nhập vào giá trị của mảng
	for (int i = 0; i < n; i++)		// duyệt mảng giá trị i từ vt 0 đến vị trí n nhập vào 
	{
		cout << endl << "  Nhap vao a[" << i << "] =  ";	// xuất lệnh cho người dùng nhập
		cin >> a[i];	// xuất lệnh nhập vào
	}
}

void XuatMang(MANG a, int n)
{
	cout << endl << "\n Xuat mang:\t";
	for (int i = 0; i < n; i++)		// sử dụng vòng lặp for duyệt mảng kiểm tra các giá trị trong mảng
	{
		cout << a[i] << "\t";		// xuất các giá trị ra 
	}
}

bool KiemTraViTri(MANG a, int& n, int x, int vt)
{
	if (vt<0 || vt > n)		// nếu vị trí mà nhỏ hơn 0 hoặc vị trí mà nhỏ hơn n nhập vào
	{
		return false;		// trả về kết quả sai
	}
	return true;		// ngược lại là đúng
}

void ThemTaiViTri(MANG a, int& n, int x, int vt)
{
	for (int i = n; i > vt; i--)
	{
		a[i] = a[i - 1];
	}
	a[vt] = x;
	n++;
}

void ThemVaoDauMang(MANG a, int& n, int x)
{
	ThemTaiViTri(a, n, x, 0);		// thêm đầu mảng là tại vị trí a[0]
}

void ThemVaoCuoiMang(MANG a, int& n, int x)
{
	ThemTaiViTri(a, n, x, n);		// thêm vào cuối mảng là vị tr
}



//void ThemVaoDauMang(MANG a, int& n, int x)
//{
//	// duyệt mảng từ vị trí cuối cùng đến vị trí đầu mảng là giá trị i tại vị trí = 0
//	for (int i = n; i >= 0; i--)
//	{
//		a[i + 1] = a[i];		
//	}
//	a[0] = x;		// chèn giá trị x nhập vào tại vị trí 0
//	n++;			// tăng độ dài mảng lên
//}

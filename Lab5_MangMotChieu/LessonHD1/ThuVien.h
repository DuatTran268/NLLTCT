#pragma once
// định nghĩa hằng
#define MAX 100		// khai báo kích thước mảng 1 chiều
#define TAB '\t'


// định nghĩa kiểu dữ liệu mới
typedef int DaySo[MAX];

// khai báo nguyên mẫu hàm, các hàm xử lý nhập xuất
void NhapMang(DaySo a, int n);
void XuatMang(DaySo a, int n);
int ChuaPhanTuX(DaySo a, int n, int x);
int TimViTriDauTien_X(DaySo a, int n, int x);
int KiemTraMangTang(DaySo a, int n);
int TinhMax(DaySo a, int n);
int TimViTriMaxCuoiCung(DaySo a, int n);






// định nghĩa các hàm xử lý nhập xuất

// hàm nhập dữ liệu mảng 1 chiều từ bàn phím
// Input : a = mảng một chiều chứa tối đa MAX phần tử.
// n = số phần tử thực sự được lưu trong mảng.
// Output: Không có

void NhapMang(DaySo a, int n)
{
	// duyệt qua từng phần tử i từ vị trí 0 đến n-1;
	for (int i = 0; i < n; i++)
	{
		cout << endl << " Nhap a[" << i << "] =  ";		// xuất thông báo yêu cầu người dùng nhập vào
		cin >> a[i];		// chờ người dùng nhập vào giá trị của phần tử i vào dãy số mảng a
	}
}
// định nghĩa hàm xuất mảng
//Input : a = mảng một chiều chứa tối đa MAX phần tử.
// n = số phần tử thực sự được lưu trong mảng.
// Output: Không có. Chỉ xuất ra màn hình.
void XuatMang(DaySo a, int n)
{
	// số lượng phần tử trong mảng là từ 0 đến n nhập vào 
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << TAB;	// các giá trị cách nhau bởi dấu tab
	}
}

// định nghĩa hàm kiểm tra mảng a có chứa phần tử x
// Input : a - mảng một chiều chứa tối đa MAX phần tử.
// n - số phần tử thực sự được lưu trong mảng.
// x - phần tử cần kiểm tra
// Output:
// 1 : nếu mảng a chứa phần tử x
// 0 : nếu mảng a không chứa phần tử x

int ChuaPhanTuX(DaySo a, int n, int x)
{
	
	int kq = 0;		// giả sử ban đầu mảng a ko chứa x
	for (int i = 0; i < n; i++)	// duyệt qua các phân tử từ vị trí 0 đến vị trí n nhập vào
	{
		if (a[i] == x)		// nếu trong mảng a chứa giá trị i == bằng với giá trị x mà người cần tìm nhập vào
		{
			kq = 1;			// thì cập nhật kết quả và 
			break;			// thực hiện dừng, ko tìm nữa
		}
	}
	return kq;
}
// hàm tìm vị trí đầu tiên 
// Input : a, n,x,
//Output:
//		-1 : nếu a không chứa phần tử x
//		i : a[i] đầu tiên trùng x
int TimViTriDauTien_X(DaySo a, int n, int x)
{
	int kq = -1;	// giả sử ban đầu mảng a ko chứa phần tử x
	for (int i = 0; i < n; i++)		// sử dụng vòng lặp for để kiểm tra các phần tử trong mảng
	{
		if (a[i] == x)			// nếu tìm thấy giá trị x nhập vào = với giá trị của phần tử đã được lưu vào mảng a
		{
			kq = i;				// thì cập nhật kết quả là vị trí đầu tiên là i và thực hiện
			break;				// dừng ko cần tìm nữa
		}
	}
	return kq;		// trả về kết quả
}

// hàm kiểm tra xem mảng a có tăng ko
// Input : a , n
// Output:
// 1 : nếu mảng a có thứ tự tăng
// 0 : nếu mảng a không có thứ tự tăng




int KiemTraMangTang(DaySo a, int n)
{
	int kq = 1;		// giả sử ban đầu mảng a có thứ tự tăng
	for (int i = 0; i < n -1; i++)		// duyệt kiểm tra các phần tử trong mảng
	{
		if (a[i] > a[i + 1])	// nếu có cặp phần tử mà số đứng trước lớn hơn số đừng sau
		{
			kq = 0;		// thì cập nhật kết quả và
			break;		// thực hiện dừng ko kiểm tra nữa
		}
	}
	return kq;
}

// hàm tính max
// Input : a, n
// Output: Giá trị lớn nhất của a
int TinhMax(DaySo a, int n)
{
	int max = a[0];		// ban đầu giả sử phần tử đầu tiên vị trí a[0] là lớn nhất
	for (int i = 0; i < n; i++)	// duyệt qua các phần tử để kiểm tra
	{
		if (a[i] > max)		// nếu có phần tử a[i] lớn hơn 
		{
			max = a[i];		// thì gán max = phần tử đó
		}
	}
	return max;
}

// Hàm tìm vị trí max cuối cùng
//Ham tim vi tri cuoi cung max xuat hien, khong dung ham TinhMax
// Input : a, n
// Output: Vị trí cuối cùng tìm thấy giá trị lớn nhất
int TimViTriMaxCuoiCung(DaySo a, int n)
{
	int vt = 0, max = a[vt];
	for (int i = 0; i < n; i++)	// duyệt phần tử 
	{
		if (a[i] >= max)	
		{
			vt = i;
			max = a[vt];
		}
	}
	return vt;
}
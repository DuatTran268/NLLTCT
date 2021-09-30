#pragma once

#define MAX 100

typedef int MANG[MAX];


// nguyên mẫu hàm
void NhapTuDong(MANG a, int& n);
void NhapTuKey(MANG a, int& n);
void XuatMangVuaNhap(MANG a, int& n);


// định nghĩa hàm xử lý
void NhapTuDong(MANG a, int& n) {
	do
	{
		cout << endl << "\n Nhap vao so luong phan tu mang:  ";
		cin >> n;
	} while (n < 0);
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (10 - -10 + 1) + -10;		// trong khoảng [-10 ; 10]
			// công thức tính sinh số ngẫu nhiên rand() % (max – min + 1) + min 
	}
}

void NhapTuKey(MANG a, int& n) {
	do
	{
		cout << endl << "\n Nhap vao so luong phan tu mang:  ";
		cin >> n;
	} while (n < 0);
	for (int i = 0; i < n; i++)
	{
		cout << endl << " Nhap a[" << i << "]:  ";
		cin >> a[i];			// nhập vào 
	}
}

void XuatMangVuaNhap(MANG a, int& n) {
	cout << endl << "\n Xuat mang:\t";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}


// hàm kiểm tra có phải số dương
bool KiemTraMangCoPhaiMangDuong(MANG a, int n) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)		// nếu phần tử i trong mảng mà nhỏ hơn 0
		{
			cout << endl << "\n Mang nhap vao ko phai mang toan so duong";
			return false;		// trả về kết quả sai
		}
	}
	cout << endl << "\n Mang nhap vao la mang toan so duong";
	return true;		// trả về kết quả đúng vì hàm yêu cầu kiểm tra có phải toàn dương ko ?
}

// Tìm giá trị lớn nhất của mảng
int TimGiaTriLonNhatCuaMang(MANG a, int n) {
	int max = a[0];		// giả sử gt max  ban đầu = vị trí đầu tiên trong mảng a[0]
	for (int i = 0; i < n; i++)		// duyệt vòng lặp kiểm tra
	{
		if (a[i] > max)		// nếu phần tử i trong mảng a lớn hơn max gán sau mỗi lần lặp
		{
			max = a[i];		// thì max = chính giá trị đó 
		}
	}
	return max;		// trả về kết quả max
}

int TimGiaTriNhoNhatCuaMang(MANG a, int n) {
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}

// Tìm số âm số dương
void XuatRaSoDuongTrongMang(MANG a, int n) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			cout << "\t" << a[i];
		}
	}
}

void XuatRaSoAmTrongMang(MANG a, int n) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			cout << "\t" << a[i];
		}
	}
}




// Sắp xếp mảng tăng dần giảm dần
void HoanVi(int& x, int& y) {		// int&  : là giá trị x, y thay đổi vị trí nên cần có tham chiếu
	int temp = x;			// temp biến trung gian 
	x = y;
	y = temp;
}

void SapXepMangTangDan(MANG a, int n) {
	for (int i = 0; i < n -1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])			// nếu số đứng sau lớn hơn số đứng trước thì mảng sắp xếp tăng
			{
				HoanVi(a[i], a[j]);			// thực hiện hoán đổi vị trí trong mảng
			}
		}
	}
}
void SapXepMangGiamDan(MANG a, int n) {
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}

int TimKiemPhanTuTrongMang(MANG a, int n, int x) {
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			cout << endl << "\n Phan tu x = "<< x <<" nhap vao nam trong mang";
			return true;
		}
	}
	cout << endl << "\n Ko ton tai phan tu  x =  " << x << " nhap vao trong mang";
	return false;
}

// thêm vào vị trí và nhập vào giá trị
void ThemPhanTuVaoMang(MANG a, int& n, int x, int vt) {
	for (int i = n; i > vt + 1; i--)
	{
		a[i] = a[i - 1];
	}
	a[vt] = x;		
	n++;		// thêm chiều dài của mảng tăng
}

void ThemVaoDauMang(MANG a, int& n, int x) {
	ThemPhanTuVaoMang(a, n, x, 0);
}
void ThemVaoCuoiMang(MANG a, int& n, int x) {
	ThemPhanTuVaoMang(a, n, x, n);		// thêm vào cuối mảng là truyền vào n
}

void XoaTaiViTri(MANG a, int& n, int vt) {
	for (int i = vt + 1; i < n; i++)
	{
		a[i -1] = a[i];
	}
	n--;		//vì là xóa nên giảm số lượng phần tử mảng đi
}
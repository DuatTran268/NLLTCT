#pragma once

#define MAX 100
typedef int MANG[MAX];


void NhapMangTuDong(MANG a, int& n) {
	do
	{
		cout << endl << "\n Nhap vao so luong phan tu mang:  ";
		cin >> n;
	} while (n <= 0  || n > MAX);		// khi mà n nhập vào nhỏ hơn 0 hoặc lớn hơn max(100) thì bắt nhập lại
	// đúng điều kiện nhập vào n mới cho thực hiện chương trình
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (10 - -10 + 1) + -10;
	}
}


void NhapTuBanPhim(MANG a, int& n) {
	do
	{
		cout << endl << "\n Nhap vao so luong phan tu cua mang:  ";
		cin >> n;
	} while (n <= 0 || n > MAX);
	for (int i = 0; i < n; i++)
	{
		cout << endl << " Nhap a[" << i << "] =  ";
		cin >> a[i];
	}
}

void XuatMang(MANG a, int& n) {
	cout << endl << "\n Xuat mang:\t";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

void ThemVaoViTri(MANG a, int& n, int x, int vt) {
	for (int i = n; i > vt ; i--)		// dùng vòng lặp for duyệt từ cuối mảng đến vị trí nhập vào cần chèn
	{
		a[i] = a[i - 1];		// phần tử đứng sau gán = phần tử đứng trước
	}
	a[vt] = x;			// gán vị trí nhập vào của mảng a = giá trị x nhập vào
	n++;		// vì thêm nên chiều dài của mảng tăng lên
}

void ThemVaoDauMang(MANG a, int& n, int x) {
	ThemVaoViTri(a, n, x, 0);		// gọi hàm thêm vào vị trí, truyền lần lượt tham số, tham số 0 là vị trí đầu mảng a
}

void ThemVaoCuoiMang(MANG a, int& n, int x) {
	ThemVaoViTri(a, n, x, n);		// gọi hàm thêm vào vị trí, truyền lần lượt tham số, tham số n là vị trí cuối cùng của mảng a
}


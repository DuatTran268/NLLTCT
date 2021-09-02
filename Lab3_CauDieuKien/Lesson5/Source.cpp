#include<iostream>
#include<conio.h>
#include<math.h>


using namespace std;
// khai báo nguyên mẫu hàm
int NhapVaoSoDuong(int so);
void XuatUC(int m, int n);
int  TimUCLN(int m, int n);
int  TimBCNN(int m, int n);




int main()
{
	/*
	* Viết chương trình cho phép người dùng nhập vào hai số nguyên dương m và n. Sau đó:
	a. Xuất ra màn hình các ước chung của m và n. Ví dụ: 6 và 8 có các ước chung 1, 2.
	b. Tìm ước chung lớn nhất của m và n. Ví dụ: 12 và 16 có ước chung lớn nhất là 4.
	c. Tìm bội chung nhỏ nhất của m và n. Ví dụ: 12 và 16 có bội chung nhỏ nhất là 48.
	*/

	cout << endl << "\t\t Chuong trinh tim UCLN BCNN\n";

	int m = 0, n = 0;		// khai báo 2 biến số nguyên dương với kdl là int ( số nguyên )

	//========== nhập===========
	cout << endl << " Nhap vao so nguyen duong m:  ";
	m = NhapVaoSoDuong(m);
	cout << endl << " Nhap vao so nguyen duong n:  ";
	n = NhapVaoSoDuong(n);
	
	//========= xuất =============
	XuatUC(m, n);
	int UCLN = TimUCLN(m, n);
	int BCNN = TimBCNN(m, n);
	cout << "\n UCLN cua " << m << " va " << n << " la: " << UCLN;
	cout << "\n BCNN cua " << m << " va " << n << " la: " << BCNN;


	cout << endl << "\n";	
	system("pause");	// dừng màn hình
	return 0;
	
}
// hàm để người dùng nhập vào 1 số dương
int NhapVaoSoDuong(int so)
{
	//i điểm bắt đầu từ 0
	int i = 0;	//  sử dụng vòng lặp do while nếu đúng thì cho nhập tiếp theo nếu sai bắt nhập lại
	do
	{
		if (i > 0)	// bước 2: sau khi người dùng đã nhập đúng số nguyên dương đúng điều kiện ở bước 1
		{
			cout << endl << " Nhap lai so nguyen duong:  ";		// nhập đúng điều kiện bước 1 bỏ qua dòng này
		}
		cin >> so;	// thực hiện cho nhập tiếp nếu còn phải nhập 
		i++;
	} while (so <= 0);		// bước 1: người dùng nhập vào số bất kì sau đó kiểm tra điều kiện 
							// nếu số nhập vào nhỏ hơn hoặc bằng 0 bắt người dùng nhập lại cho đến khi nhập số lớn hơn 0( số nguyên dương)
	return so;
}



// các hàm tìm

void XuatUC(int m, int n)
{
	cout << "\nCac uoc chung cua " << m << " va " << n << " la: ";
	int mid = max(m, n);
	for (int i = 1; i <= mid / 2; i++)
		if (m % i == 0)
			if (n % i == 0)
				cout << i << "\t";
	cout << endl;
}

int TimUCLN(int m, int n)
{
	// code tham khảo thuật toán Euclid
	int tmp;
	while (n != 0) {
		tmp = m % n;
		m = n;
		n = tmp;
	}
	return m;
}

int TimBCNN(int m, int n)
{
	return (m * n) / TimUCLN(m, n);
}
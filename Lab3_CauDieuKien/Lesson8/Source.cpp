// thư viện
#include<iostream>
#include<conio.h>
#include<math.h>


using namespace std;
// khai báo nguyên mẫu hàm
int NhapSoTrongMien(int min, int max);
int TimSoNgay(int thang, int nam);

// PHẦN LAB HƯỚNG DẪN TRONG GIÁO TRÌNH

// hàm main()
int main()
{
	cout << endl << "\t\t Tim So Ngay Theo Thang Va Nam Nhap Vao\n";
	// nhập tháng trong năm ( 1-> 12)
	int soNgay, thang, nam;
	cout << endl << " Nhap vao mot thang trong nam:  ";
	thang = NhapSoTrongMien(1, 12);

	// nhập năm 
	cout << endl << " Nhap vao mot nam duong lich:  ";
	nam = NhapSoTrongMien(1, 3000);
	soNgay = TimSoNgay(thang, nam);

	// xuất 

	cout << endl << " Ket qua sau khi nhap la Thang  " << thang << " Nam  " << nam << " co " << soNgay << " ngay  ";
	
	_getch();
	return 0;
}
//==================ĐỊNH NGHĨA HÀM===========
// hàm nhập số trong miền min max
int NhapSoTrongMien(int min, int max)
{
	int so;
	do
	{
		cout << endl << " Nhap vao trong khoang ["
			<< min << "..." << max << "] : ";
		cin >> so;
	} while (so < min || so > max);
	return so;
}

// hàm tìm số ngày tháng
int TimSoNgay(int thang, int nam)
{
	int soNgay;

	switch (thang)
	{
		//  tháng 1, 3, 5, 7, 8, 10, 12 thì số ngày 31
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			soNgay = 31;
			break;

		//  tháng 4, 6, 9, 11 thì số ngày là 30
		case 4:
		case 6:
		case 9:
		case 11:
			soNgay = 30;
			break;
	default:
		// Kiểm tra có phải năm nhuận hay ko
		if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
		{
			soNgay = 29;
		}
		else
		{
			soNgay = 28;
		}
		break;
	}
	return soNgay;
}

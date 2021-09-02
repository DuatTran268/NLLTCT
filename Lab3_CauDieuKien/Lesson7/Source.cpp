#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

// khai báo nguyên mẫu hàm

//float NhapMotSoKhacKhong();
void GiaiPhuongTrinhBacHai(float a, float b, float c);

//	 CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH BẬC 2 THEO NHIỀU CÁCH SỬ DỤNG VÒNG LẶP CÂU LỆNH================

//int main()
//{
//	float a, b, c;
//	a = NhapMotSoKhacKhong();
//	cout << endl << " Nhap he so b:  ";
//	cin >> b;
//
//	cout << endl << " Nhap he so c:  ";
//	cin >> c;
//
//	GiaiPhuongTrinhBacHai(a, b, c);
//
//
//	_getch();
//	return 0;
//}


int main()
{
	// VÌ A LÀ SỐ NGUYÊN KHÁC 0 NÊN CÓ NHIỀU VD VỀ VÒNG LẶP DO - WHILE ____________________________________
	float a, b, c;
	do  // cho nhập xong ktra điều kiện 
	{
		cout << endl << " Nhap vao a (a khac 0):  ";
		cin >> a;
	} while ( a== 0);		// điều kiện đúng mới thực hiện cho nhập a: 
	

	// VÒNG LẶP FOR ____________________________
	/*for (;;)
	{
		cout << endl << " Nhap vao a (a khac 0):  ";
		cin >> a;
		if (a != 0)
		{
			break;
		}
	}*/

	// VÒNG LẶP WHILE _________________________________
	/*a = 0;
	while (a == 0)
	{
		cout << endl << " Nhap vao a (a khac 0):  ";
		cin >> a;
	}*/


	
	cout << endl << " Nhap vao so b:  ";
	cin >> b;
	cout << endl << " Nhap vao so c:  ";
	cin >> c;

	GiaiPhuongTrinhBacHai(a, b, c);

}



//float NhapMotSoKhacKhong()
//{
//	float so;
//
//	do
//	{
//		cout << endl << " Nhap mot so thuc khac 0:  ";
//		cin >> so;
//
//	} while (so == 0);
//	return so;
//}




void GiaiPhuongTrinhBacHai(float a, float b, float c)	
{
	float delta, x;	// khai báo biến delta và x sử dụng kdl số thực float
	
	delta = b * b - 4 * a * c;			// delta = b^2 * 4 * a * c

	if (delta < 0)		// nếu delta lớn hơn 0 thì xuất ra dòng lệnh
	{
		cout << endl << " Phuong trinh vo nghiem ";
	}
	else if (delta == 0.0)		// nếu delta = 0 phương trình có nghiệm kép
	{
		
		x = -b / (2 * a);
		cout << endl << " Phuong trinh co nghiem kep x =  " << x;

	}
	// TH: có 2 nghiệm phân biệt x1, x2
	else
	{
		cout << endl << " Phuong trinh co 2 nghiem phan biet:  "; // xuất thông báo có 2 nghiệm phân biệt
		// Tìm nghiệm thứ nhất
		x = (-b + sqrt(delta)) / (2 * a);

		// Tìm nghiệm thứ nhất
		x = (-b + sqrt(delta)) / (2 * a);

		// xuất nghiệm thứ nhất
		cout << endl << " x1 =  " << x;

		// Tìm nghiệm thứ hai
		x = (-b - sqrt(delta)) / (2 * a);

		cout << endl << " x2 = " << x;

	}

}


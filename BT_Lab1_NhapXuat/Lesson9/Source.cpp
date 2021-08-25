#include<iostream>
#include<math.h>



using namespace std;

int main()
{
	//Viết chương trình cho phép nhập vào độ dài đáy lớn (a), đáy bé (b) và chiều cao (h) của một hình thang
	//cân.Sau đó, xuất ra màn hình chu vi và diện tích của hình thang đó.
	
	int a, b, h;

	cout << " Nhap vao day lon a:  ";
	cin >> a;
	cout << " Nhap vao day be b:  ";
	cin >> b;
	cout << " Nhap vao chieu cao h:  ";
	cin >> h;


	float p = (a - b) / 2;
	float canhBen = sqrt(p * p + h * h);
	float chuViHinhThang = a + b + 2 * canhBen;
	float dththang = ((a + b) * h) / 2;
	float cvtamGiac = p + h + canhBen;	// chu vi hình tam giác là tổng 3 cạnh a + b + c
	float dttamGiac = sqrt(cvtamGiac * (cvtamGiac - p) * (cvtamGiac - h) * (cvtamGiac - canhBen));

	cout << endl << " Gia tri p = " << p;
	cout << endl << " Canh ben = " << canhBen;
	cout << endl << " Chu vi hinh thang can la:  " << chuViHinhThang;
	cout << endl << " Dien tich hinh thang can la:  " << dththang;
	cout << endl << " Chu vi tam giac la:  " << cvtamGiac;
	cout << endl << " Dien tich tam giac la:  " << dttamGiac;
	return 0;




}
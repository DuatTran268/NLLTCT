#include<iostream>
#include<math.h>


using namespace std;

int main()
{
//Viết chương trình cho phép nhập vào độ dài 3 cạnh của một tam giác. Sau đó, xuất ra màn hình chu vi và
	//diện tích của tam giác đó

	int a, b, c;

	cout << " Nhap gia tri bien a:  ";
	cin >> a;
	cout << " Nhap gia tri bien b:  ";
	cin >> b;
	cout << " Nhap gia tri bien c:  ";
	cin >> c;

	float chuVi = (a + b + c)/2;
	float p = chuVi;
	float dienTich = sqrt(p * (p - a) * (p - b) * (p - c));

	cout << endl <<" Chu vi cua tam giac la:  " << chuVi ;
	cout << endl << " Dien tich tam giac la:  " << dienTich;
	return 0;



}
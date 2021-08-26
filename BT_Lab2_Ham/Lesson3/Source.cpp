#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

double TinhCanhBen(int dayLon, int dayBe, int chieuCao);
double TinhChuVi(int dayLon, int dayBe, double canhBen);
double TinhDienTich(int dayLon, int dayBe, int chieuCao);


int main()
{
	//Viết chương trình cho phép nhập vào độ dài đáy lớn (a), đáy bé (b) và chiều cao (h) của một hình
	//thang cân.Sau đó, xuất ra màn hình chu vi và diện tích của hình thang đó.Chu vi và diện tích của hình thang được tính bởi công thức :
	int a, b, h;
	double canhBen, chuVi, dienTich;

	cout << endl << " Nhap vao day lon a:  ";
	cin >> a;
	cout << " Nhap vao day be b:  ";
	cin >> b;
	cout << " Nhap vao chieu cao h:  ";
	cin >> h;

	canhBen = TinhCanhBen(a, b, h);
	cout << endl << " Day lon " << a << " day be " << b << " chieu cao " << h << " co canh ben la:  " << canhBen ;
	chuVi = TinhChuVi(a, b, canhBen);
	cout << endl << " Day lon " << a << " day be " << b << " canh ben " << canhBen << " co chu vi la: " << chuVi;
	dienTich = TinhDienTich(a, b, h);
	cout << endl << " Day lon " << a << " day be " << b << " chieu cao " << h << " co dien tich la " << dienTich;


	return 1;
}
// hàm
double TinhCanhBen(int dayLon, int dayBe, int chieuCao)
{
	
	double p, canhben;
	p = (dayLon - dayBe) / 2;
	canhben = sqrt(p * p + chieuCao * chieuCao);
	return canhben;
}
double TinhChuVi(int dayLon, int dayBe, double canhBen)
{
	return (dayLon + dayBe) + 2 * canhBen;
}
double TinhDienTich(int dayLon, int dayBe, int chieuCao)
{
	return ((dayLon + dayBe) * chieuCao) / 2;
}
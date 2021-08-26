// thư viện hàm
#include<math.h>
#include<iostream>
#include<conio.h>



using namespace std;
// khai báo nguyên mẫu hàm
double TinhDoCao(double phi, double delta, double h, double sin, double cos);
double TinhPhuongVi(double phi, double delta, double h, double altitude, double sin, double cos);

int main()
{
	// chuyển đổi hệ tọa độ
	cout << endl << " Chuyen doi he toa do \n";
	double phi, delta, h;
	double docao, phuongvi;
	
	cout << " Nhap vao xich vi do (delta):  ";
	cin >> delta;
	cout << " Nhap vao vi do (phi):  ";
	cin >> phi;
	cout << " Nhap vao goc cua mui gio (h):  ";

	// xuất
	/*docao = TinhDoCao(phi, h, delta);
	cout << endl << " Do cao la:  " << docao;
	phuongvi = TinhPhuongVi(phi, delta, h);
	cout << endl << " Phuong vi la:  " << phuongvi;*/


	return 0;
}
// định nghĩa hàm
//double TinhDoCao(double phi, double delta, double h,double sin,double cos)
//{
//	double Altitude;
//	Altitude = asin(sin * phi * sin * delta + cos * phi * cos * delta * cos * h);
//	return Altitude;
//}
//double TinhPhuongVi(double phi, double delta, double h, double altitude, double sin, double cos	)
//{
//	double Azimuth;
//	Azimuth = asin((cos * phi * sin * delta - sin * phi * cos * delta * cos * h) / cos*(altitude));
//	return Azimuth;
//}




// thư viện hàm
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

// khai báo nguyên mẫu hàm
double TinhDoCao(double phi, double delta, double h);
double TinhPhuongVi(double phi, double delta, double h, double altitude);



int main()
{
	// chuyển đổi hệ tọa độ
	cout << endl << " Chuyen doi he toa do \n";
	double phi, delta, h;
	double altitude{};
	double docao, phuongvi;
	
	cout << " Nhap vao xich vi do (delta):  ";
	cin >> delta;
	cout << " Nhap vao vi do (phi):  ";
	cin >> phi;
	cout << " Nhap vao goc cua mui gio (h):  ";
	cin >> h;

	// xuất
	docao = TinhDoCao(phi, h, delta);
	cout << endl << " Do cao la:  " << docao;
	phuongvi = TinhPhuongVi(phi, delta, h, altitude);
	cout << endl << " Phuong vi la:  " << phuongvi;

	return 0;
}

double TinhDoCao(double phi, double delta, double h)
{
	double Altitude;
	Altitude = asin(sin(phi)*sin(delta) + cos(phi)*cos(delta)*cos(h));
	return Altitude;
}
double TinhPhuongVi(double phi, double delta, double h, double altitude	)
{
	double Azimuth;
	Azimuth = acos((cos(phi)*cos(delta) - sin(phi)*cos(delta)*cos(h))/cos(altitude));
	return Azimuth;
}




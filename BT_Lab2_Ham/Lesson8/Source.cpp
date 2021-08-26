// khai báo thư viện hàm
#include<iostream>
#include<conio.h>

using namespace std;
double WindChill(double t, double v);

// hàm main
int main()
{
	// Cho t là nhiệt độ (đơn vị Fahrenheit) và v là vận tốc gió (đơn vị dặm/giờ), trung tâm khí tượng
	// quốc gia định nghĩa nhiệt độ hiệu dụng(hay độ lạnh của gió) là đại lượng w được tính bởi :
	// w = 35.74 + 0.6215 t + (0.4275 t – 35.75) v0.16
	cout << endl << " \t\t Do lanh cua gio ( Wind chill )";
	double t, v;
	double dolanh;
	cout << "\n Luu y khi nhap du lieu: -50 <= t <= 50 và 3 <= v <= 120\n";
	cout << endl << " Nhap vao nhiet do t:  ";
	cin >> t;
	cout << " Nhap vao van toc gio v:  ";
	cin >> v;
	
	dolanh = WindChill(t, v);
	cout << endl << " Do lanh cua gio co nhiet do t = " << t << " van toc gio v = " << v << " co do lanh la:  " << dolanh;


	return 0;
}
// định nghĩa hàm
double WindChill(double t, double v)
{
	return 35.74 + ( 0.6215 * t )+ ((0.4275 * t) - 35.75) * (v * 0.16);
}


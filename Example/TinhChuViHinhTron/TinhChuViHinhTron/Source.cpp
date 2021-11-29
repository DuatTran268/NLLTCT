#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

#define PI 3.14;

double ChuViHinhTron(double r);

int main() {
	double r;
	cout << endl << "\n Nhap vao ban kinh:  ";
	cin >> r;
	double kq = ChuViHinhTron(r);
	cout << endl << " Hinh tron co ban kinh " << r << " co chu vi la: " << kq;

	system("pause");
	cout << endl;
	return 1;

}
double ChuViHinhTron(double r) {
	double kq = 2 * r * PI;
	return kq;
}

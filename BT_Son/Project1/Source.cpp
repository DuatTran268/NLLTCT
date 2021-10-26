#include<iostream>

using namespace std;

int main() {

	cout << endl << "\n ------------ TINH HINH VUONG -------------";
	int canh;
	do
	{
		cout << endl << " Nhap vao canh cua hinh vuong:  ";
		cin >> canh;
	} while (canh <0);
	int chuVi = canh * 4;
	int dienTich = canh * canh;
	cout << endl << " Chu vi hinh vuong =  " << chuVi;
	cout << endl << " Dien tich hinh vuong =  " << dienTich;


	cout << endl << "\n ------- TINH QUANG DUONG --------------";
	int t;
	do
	{
		cout << endl << " Nhap vao thoi gian t =  ";
		cin >> t;
	} while (t >= 15 || t < 0);
	int vXeDap = 10 * t;
	int vXeMay = 30 * t;
	int sKhoangCach = vXeMay - vXeDap;
	int vanTocXeDap = vXeDap;
	int vanTocXeMay = vXeMay;
	cout << endl << " Van toc xe dap la:  " << vanTocXeDap << " km";
	cout << endl << " Van toc xe may la:  " << vanTocXeMay << " km";
	cout << endl << " Khoang cach giua 2 xe là: " << sKhoangCach << " km";
	cout << endl << "\n";
	system("pause");
	// mõm HUY này :)))
}
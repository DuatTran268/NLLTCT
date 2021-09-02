#include<iostream>


using namespace std;
double GiaiPhuongTrinhBacNhat(double a, double b);


int main()
{
	cout << endl << "\t\t Chuong trinh giai phuong trinh bac nhat\n";

	int a, b;	// khai báo 2 biến a,b kdl số nguyên


	cout << endl << "\n Nhap vao a:  ";
	cin >> a;
	cout << endl << " Nhap vao b:  ";
	cin >> b;

	double x = GiaiPhuongTrinhBacNhat(a, b);
	cout << endl << x;

	cout << endl << "\n";
	system("pause");
}

double GiaiPhuongTrinhBacNhat(double a, double b)
{
	double x;

	// TH1: a = 0 và b = 0
	if (a == 0 && b == 0)
	{
		x = 0;
		cout << endl << " Phuong trinh co nghiem x =  " << x;
	}
	else if ( a == 0 && b != 0)	// TH2 a = 0 và b khác 0
	{
		cout << endl << " Phuong trinh co nghiem x = b => ket qua x =  " << b;
	}
	else   // trường hợp còn lại
	{
		cout << endl << " Phuong trinh co nghiem x = -b/a =   " << -b/a; 
	}
	
	return 1;
}
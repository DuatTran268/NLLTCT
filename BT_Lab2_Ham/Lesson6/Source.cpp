#include<iostream>
#include<conio.h>

using namespace std;
double TinhChiSoBMI(double canNang, double chieuCao);


int main()
{
	// Viết chương trình cho phép người dùng nhập vào khối lượng cơ thể(w – tính theo đơn vị kg) 
	// và chiều cao của người đó(h – tính theo đơn vị mét).Sau đó, xuất ra màn hình chỉ số khối cơ thể(BMI) của người đó, biết rằng BMI = w / h2.
	
	cout << endl << "\t\t Tinh chi so BMI\n";
	double w, h;	// định nghĩa weight: Cân nặng, Height: Chiều cao
	double BMI;

	// nhập
	cout << endl << " Nhap vao (vd: w = 60) can nang w :  ";
	cin >> w;
	cout << " Nhap vao (vd: h = 1.70) chieu cao h:  ";
	cin >> h;

	// xuất
	BMI = TinhChiSoBMI(w, h);
	cout << endl << "\t Chi so BMI cua ban co can nang w = " << w << "kg chieu cao h = " << h << "m nhap vao co chi so BMI la:  " << BMI;
	cout << endl;

	// câu điều kiện
	if (BMI < 16)
	{
		cout << endl << " Chi so BMI o tren cho thay ban bi gay III";

	}
	else if (BMI >= 16 && BMI <= 17)
	{
		cout << endl << "Chi so BMI o tren cho thay ban bi gay do II";
	}
	else if (BMI >= 17 && BMI <= 18.5)
	{
		cout << endl << " Chi so BMI o tren cho thay ban bi gay do I";
	}
	else if (BMI >= 18.5 && BMI < 25)
	{
		cout << endl << " Chi so BMI o tren cho thay ban binh thuong";
	}
	else if (BMI >= 25 && BMI < 30)
	{
		cout << endl << " Chi so BMI o tren cho thay ban bi thua can";
	}
	else if (BMI >= 30 && BMI < 35)
	{
		cout << endl << " Chi so BMI o tren cho thay ban bi beo phi do I";
	}
	else if (BMI >= 35 && BMI < 40)
	{
		cout << endl << " Chi so BMI o tren cho thay ban bi beo phi do II";
	}
	else
	{
		cout << endl << " Chi so BMI o tren cho thay ban bi beo phi do III";
	}

	_getch();
	return 0;
}
// định nghĩa hàm 
double TinhChiSoBMI(double canNang, double chieuCao)
{
	return canNang / (chieuCao * chieuCao);	// chỉ số BMI tính = w/(h^2)
}
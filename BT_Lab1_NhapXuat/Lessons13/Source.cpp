#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	//Viết chương trình cho phép người dùng nhập vào khối lượng cơ thể (w – tính theo đơn vị kg) và chiều cao
	//của người đó(h – tính theo đơn vị mét).Sau đó, xuất ra màn hình chỉ số khối cơ thể(BMI) của người đó, biết rằng BMI = w / h^2

	cout << endl << "\t\t  CHUONG TRINH TINH CHI SO BMI\n";
	int w;	// khai báo weight: cân nặng, height: chiều cao
	double h;
	cout << "\n Nhap vao can nang weight (vd: 60kg):  ";
	cin >> w;
	cout << " Nhap vao chieu cao height (vd: 1.70 m):  ";
	cin >> h;

	double BMI = w / ( h * h);
	cout << " Can nang " << w << " va chieu cao " << h << " co chi so BMI la: " << BMI;
	cout << endl << "\n\t  Chi so co the doi voi nguoi tren 20 tuoi danh gia qua thang BMI theo tieu chuan ";
	if (BMI < 16)
	{
		cout << endl << " Chi so BMI o tren cho thay ban bi gay III";

	}
	else if(BMI >= 16 && BMI <= 17)
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
	else if (BMI >= 25 && BMI <30)
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
	

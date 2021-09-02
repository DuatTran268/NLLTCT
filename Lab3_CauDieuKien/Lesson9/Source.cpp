// khai báo thư viện 
#include<iostream>
#include<conio.h>


using namespace std;
// khai báo nguyên mẫu hàm
int PhanLoaiTamGiac(double a, double b, double c);
void ThongBao(int loaiTg, double a, double b, double c);


// hàm main
int main()
{
	double a, b, c;
	cout << endl << "\t\t Chuong trinh phan loai tam giac";

	cout << endl << " Nhap do dai canh a:  ";
	cin >> a;
	cout << endl << " Nhap do dai canh b:  ";
	cin >> b;
	cout << endl << " Nhap do dai canh c:  ";
	cin >> c;
	int ketQua = PhanLoaiTamGiac(a, b, c);
	ThongBao(ketQua, a, b, c);
	_getch();


	return 1;
}
// Định nghĩa hàm 
int PhanLoaiTamGiac(double a, double b, double c)
{
	int kq = 0;	// khai báo biến để lưu kết quả

	
	if (a + b > c && a + c > b && b + c > a)	// nếu a,b,c là 3 cạnh của tam giác
	{
		// nếu 3 cạnh bằng nhau thì đó là TG đều
		if (a == b && b == c)
			kq = 1;
		else // TH không phải tam giác đều
		{// Kiểm tra nếu 2 cạnh bằng nhau thì là TG cân
			if (a == b || b == c || a == c)
			{
				if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)		// kiểm tra xem có phải là tam giác vuông
					kq = 4; // TH tam giác vuông cân
				else
					kq = 2; // TH tam giác cân
			}
			else // TH không phải tam giác cân
				if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)		// kiểm tra xem có phải tam giác vuông hay ko 
					kq = 3; // TH tam giác vuông
				else
					kq = 5; // TH tam giác thường
		}
	}
	// Gán giá trị kq cho hàm và trở về nơi gọi hàm
	return kq;


}
void ThongBao(int loaiTg, double a, double b, double c)
{
	switch (loaiTg)	// dùng lệnh switch để kiểm tra loại tam giác
	{
	case 0:
		cout << endl << " Canh nhap vao " << a << "," << b << "," << c << " khong phai la 3 canh cua 1 tam giac";
		break;
	case 1:
		cout << endl << " Canh nhap vao " << a << "," << b << "," << c << " la do dai 3 canh cua 1 tam giac deu";
		break;
	case 2:
		cout << endl << " Canh nhap vao " << a << "," << b << "," << c << " la do dai 3 canh cua 1 tam giac can";
		break;
	case 3:
		cout << endl << " Canh nhap vao " << a << "," << b << "," << c << " la do dai 3 canh cua 1 tam giac vuong";
		break;
	case 4:
		cout << endl << " Canh nhap vao " << a << "," << b << "," << c << " la do dai cua 1 tam giac vuong can";
		break;
	case 5:
		cout << endl << " Canh nhap vao " << a << "," << b << "," << c << " la do dai 3 canh cua 1 tam giac thuong";
		break;

		default:
			break;
	}
}
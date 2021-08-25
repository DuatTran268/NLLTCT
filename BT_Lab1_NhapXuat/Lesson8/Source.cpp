#include<iostream>
#include<math.h>	// hàm tính toán

using namespace std;


int main()
{
	//Viết chương trình cho phép nhập vào 2 số thực x, y và số nguyên n. 
	//Sau đó, xuất kết quả của biểu thức x^n +y^n ra màn hình.Gợi ý : sử dụng hàm pow(x, n) trong thư viện math.h để tính lũy thừa
	float x, y;
	int n;

	cout << " Nhap vao so thuc X:  ";
	cin >> x;
	cout << " Nhap vao so thuc Y:  ";
	cin >> y;
	cout << " Nhap vao so nguyen n:  ";
	cin >> n;
	cout << endl << " Ket qua cua bieu thuc x^n + y^n la:  " << pow (x, n);






}
#pragma once
// khai báo hằng số PI viết hoa gán số PI là 3,14
#define PI 3.14



// khai báo nguyên mẫu hàm
// diện tích
double DienTichHinhVuong(double canh);
double DienTichHinhChuNhat(double chieudai, double chieurong);
double DienTichHinhTamGiac(double a, double b, double c);
double DienTichHinhTron(double banKinh);

//chu vi
double ChuViHinhVuong(double canh);
double ChuViHinhChuNhat(double chieuDai, double chieuRong);
double ChuViHinhTamGiac(double a, double b, double c);
double ChuViHinhTron(double banKinh);



// hàm tính diện tích hình vuông
double DienTichHinhVuong(double canh)
{
	return canh * canh;
}
// hàm tính diện tích hình chữ nhật
double DienTichHinhChuNhat(double chieudai, double chieurong)
{
	return chieudai * chieurong;
}

// Định nghĩa hàm tính diện tích hình chữ nhật
// Input : dai = Kích thước chiều dài của HCN.
//		  rong = Kích thước chiều rong của HCN
// Output: Diện tích hình chữ nhật



// hàm tính diện tích hình tam giác
double DienTichHinhTamGiac(double a, double b, double c)
{
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
// hàm tính diện tích hình tròn
double DienTichHinhTron(double banKinh)
{
	return PI * banKinh * banKinh;
}


// hàm tính chu vi các hình
double ChuViHinhVuong(double canh)
{
	return 4 * canh;		// chu vi hình vuông = cạnh x 4;
}
double ChuViHinhChuNhat(double chieuDai, double chieuRong)
{
	return (chieuDai + chieuRong) * 2;
}
double ChuViHinhTamGiac(double a, double b, double c)
{
	return a + b + c;	// chu vi hình tam giác = tổng 3 cạnh a b c
}
double ChuViHinhTron(double banKinh)
{
	return 2 * banKinh * PI;	// chu vi hình tròn 2r *PI
}
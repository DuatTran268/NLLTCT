#include<iostream>
#include<conio.h>


using namespace std;


// nguyên mẫu hàm
double TinhChiSoBMI(double w, double h);





int main()
{
	// Viết chương trình cho phép người dùng nhập vào khối lượng và chiều cao của họ.Sau đó, đưa ra lời
	// khuyên cho người dùng dựa vào chỉ số khối cơ thể - BMI

	cout << endl << "\n\t\t CHUONG TRINH TINH CHI SO BMI\n";
	// khai kdl tên biến
	double weigth, height;
	double BMI;
	// nhập
	cout << endl << " Enter a weigth (vd w: 60) :  ";
	cin >> weigth;
	cout << " Enter a height (vd h: 1.70) :  ";
	cin >> height;

	//====== xuất
	BMI = TinhChiSoBMI(weigth, height);
	cout << endl << "\n Chi so BMI cua ban co can nang w = " << weigth << "kq va chieu cao h = " << height << "m nhap vao co chi so BMI la:  " << BMI;
	cout << endl;
	


	// ====== điều kiện để phân loại chỉ số BMI

	if (BMI<15)
	{
		cout << endl << " Ban bi doi khat ";
	}
	else if( BMI < 17.5)
	{
		cout << endl << " Ban bieng an";
	}
	else if (BMI < 18.5)
	{
		cout << endl << " Ban bi thieu can";
	}
	else if (BMI >= 18.5 && BMI < 25)
	{
		cout << endl << " Chi so ly tuong";
	}
	else if (BMI >= BMI && BMI < 30)
	{
		cout << endl << " Ban bi thua can";
	}
	else if (BMI >= BMI && BMI < 40)
	{
		cout << endl << " Ban bi beo phi";
	}
	else
	{
		cout << endl << " Tre em beo phi";
	}



	cout << endl << "\n";	
	return 0;
}


// hàm tính chỉ số BMI
double TinhChiSoBMI(double w, double h)	// sử dụng kdl số thực double
{
	return w / (h * h);		// chỉ số BMI tính = cân nặng / chiều cao ^2
}
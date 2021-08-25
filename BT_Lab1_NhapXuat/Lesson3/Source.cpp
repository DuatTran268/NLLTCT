#include<iostream>

using namespace std;

int main()
{
	//Viết chương trình cho phép nhập vào 2 số nguyên x và y. 
	//Sau đó, tính giá trị của các biểu thức sau rồi xuất kết quả ra màn hình : x + y, x - y, x* y, x / y, x% y.
	int x, y;
	cout << " Enter a number X:  ";
	cin >> x;
	cout << " Enter a number Y:  ";
	cin >> y;

	cout << endl <<" Result X + Y = " <<  x + y;
	cout << endl <<" Result X - Y = " << x - y;
	cout << endl <<" Result X * Y = " << x * y;
	cout << endl <<" Result X / Y = " << x / y;		// chia lấy kết quả
	cout << endl <<" Result X % Y = " << x % y;		// chia lấy dư
	return 0;




}
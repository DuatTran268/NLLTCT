#define MAX 3600
#define SIXTY 60
#include<iostream>
#include<math.h>


using namespace std;

int main()
{
	// nhập vào số giây sau đó đổi sang giờ phút giây
	int n;
	cout << "\n Nhap vao so giay can doi n:  ";
	cin >> n;
	int gio = n / MAX;
	int phut = (n % MAX) / SIXTY;
	int giay = (n % MAX) % SIXTY;

	cout << "\n So giay nhap vao " << n << " quy doi lan luot ra Gio : Phut : Giay la:   ";
	cout << gio << "g : " << phut << "p : " << giay << "s";


	return 0;
}
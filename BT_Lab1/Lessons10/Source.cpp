#include<iostream>
#include<iomanip>
#include<conio.h>


using namespace std;

int main()
{
	cout << endl << "\t\t DANH SACH SINH VIEN";
	cout << endl;
	cout << setiosflags(ios::left)		// thiết lập canh lề trái 
		<< setw(12) << "MSSV"			// MSSV chiếm 10 cột
		<< setw(25) << "Ho va Ten "		// chiếm 25 cột
		<< setw(10) << "Khoa"
		<< setw(10) << "Diem"
		<< endl;
	// MSSV			Ho va Ten				Khoa		Diem
	// 1211520		Le Duy Tung				33			4.57
	cout << setiosflags(ios::left)		// thiết lập canh lề trái
		<< setw(12) << "1211520"
		<< setw(25) << "Le Duy Tung"
		<< setw(10) << "33"
		<< setw(10) << setprecision(2) << "4.57"	// setprecision(2) là chỉ xuất đến 2 chữ số thập phân
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(12) << "4444444"
		<< setw(25) << "Duong My Loc"
		<< setw(10) << "44"
		<< setw(10) << "10"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(12) << "9999999"
		<< setw(25) << "Tran Nhat Duat"
		<< setw(10) << "44"
		<< setw(10) << "8.26"
		<< endl;
	cout << setiosflags(ios::left)
		<< setw(12) << "7777777"
		<< setw(25) << "Nguyen Viet Hoang"
		<< setw(10) << "43"
		<< setw(10) << "Vang Thi"
		<< endl;	// xuống dòng sau mỗi lần xuất
		

	_getch();	// dừng màn hình chờ nhấn 1 phím bất kì kết thúc
	return 1;
}
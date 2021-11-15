
#ifndef Admin_H
#define Admin_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class Admin {
	string MatKhau;
public:
	string TaiKhoan;
	bool DangNhap() { // dang nhap
		string a, b;
		cout << "User:";
		cin >> a;
		cout << endl << "Password:";
		cin >> b;
		ifstream filein;
		filein.open("Admin.txt", ios_base::in);
		while (filein.eof() == false)
		{
			getline(filein, TaiKhoan, ',');
			getline(filein, MatKhau);
			if (TaiKhoan == a && MatKhau == b) {
				filein.close();
				return true;
			}
		}
		filein.close();
		return false;
	}
	void setMatKhau(string MK) {// set MatKhau
		MatKhau = MK;
	}
	string getSalary() {//Get Mat Khau
		return MatKhau;
	}
};


#endif
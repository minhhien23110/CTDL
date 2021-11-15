
#ifndef TheTu_H
#define TheTu_H
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class TheTu {
	string PIN;
public:
	string ID;
	void setPIN(string P) {// set PIN
		PIN = P;
	}
	string getSalary() {//Get PIN
		return PIN;
	}


	void DanhSachThe()
	{
		ifstream filein;
		filein.open("TheTu.txt", ios_base::in);
		while (filein.eof() == false)//Xuat Danh Sach The Tu
		{

			getline(filein, ID, ',');
			getline(filein, PIN);
			cout  << ID << "   " << PIN << endl;
		}
		filein.close();
	}
	void XoaThe() {
		DanhSachThe();
		string n;
		cout << "Nhap ID muon xoa: ";
		cin >> n;
		TheTu The;
		ifstream filein;
		ofstream fileout;
		
		filein.open("TheTu.txt", ios::in);
		fileout.open("Temp.txt", ios::out);
		
		while (filein.eof() == false)
		{
			getline(filein, ID, ',');
			getline(filein, PIN);
			if (ID == n) 
			{
				string ten = ID + ".txt";
				const char* TenID = ten.c_str();
				remove(TenID);
				continue;
			}
			else
			{
				fileout << endl << ID << "," << PIN ;
			}
		}

		filein.close();
		fileout.close();
		remove("TheTu.txt");
		rename("Temp.txt", "TheTu.txt");
	}
};

#endif
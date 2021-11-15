#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include<cctype>
using namespace std;
class Account {
public:
	string id;
	string name; //tên tài khoản2

	int balance;   // Số dư tài khoản
	string type;    // loại tiền tệ
	void write_account()
	{
		system("cls");
		cout << "ID : ";
		cin >> id;	
		cout << "Ten tai khoan : ";
		cin >> name;
		cout << "So du tai khoan:";
		cin >> balance;
		cout << "Loai tien te:";
		cin >> type;
	}
	void ThemTaiKhoan() {
		ofstream outFile;
		write_account();
		string ID = id + ".txt";
		string LichSuID = "LichSu" + id + ".txt";
		outFile.open(ID, ios_base::out);
		outFile << id << "," << name << "," << balance << "," << type << endl;
		outFile.close();
		outFile.open(LichSuID, ios_base::out);
		outFile.close();
		outFile.open("TheTu.txt", ios_base::app);
		outFile << endl << id << "," << "123456";
		outFile.close();
	}
};

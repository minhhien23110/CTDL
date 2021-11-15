#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>
#include"Admin.h"
#include "TheTu.h"
#include "Account.h"

using namespace std;
void menuAdmin();
void QuanLyAdmin();
void TroVemenu();

int main() {
	QuanLyAdmin();
	system("pause");
	return 0;
}

void menuAdmin() {
	int activity;
	do {
		system("cls");
		cout << "*********************************************" << endl;
		cout << "*                   Menu                      *" << endl;
		cout << "*********************************************" << endl;
		cout << "                                                           " << endl;
		cout << "          1. Xem danh sach tai khoan           " << endl;
		cout << "          2. Them tai khoan                    " << endl;
		cout << "          3. Xoa tai khoan                     " << endl;

		cout << "          4. Mo tai khoan                      " << endl;
		cout << "          5. Thoat                             " << endl;
		cout << "Please select a banking activity: ";
		cin >> activity;
	} while (activity < 0 || activity >= 6);
	switch (activity) {
	case 1: {
		system("cls");
		cout << "*********************************************" << endl;
		cout << "*              Danh Sach The                *" << endl;
		cout << "*********************************************" << endl;
		cout << "ID            " << "PIN" << endl;
		TheTu The;
		The.DanhSachThe();
		TroVemenu();
		break;
	}

	case 2: {
		Account ac;
		ac.ThemTaiKhoan();
		break;
	}
		
	case 3: {
		TheTu The;
		The.XoaThe();
		break;
	}
		
	case 4:
		//MoTaiKhoan();
		break;
	case 5:
		break;
	}
}
void QuanLyAdmin() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	Admin admin;
	system("cls");
	SetConsoleTextAttribute(h, 9);
	cout << "-------------------------------------------------------------------" << endl;
	SetConsoleTextAttribute(h, 6);
	cout << "                        DANG NHAP ADMIN" << endl;
	SetConsoleTextAttribute(h, 9);
	cout << "-------------------------------------------------------------------" << endl << endl;
	SetConsoleTextAttribute(h, 6);
	if (admin.DangNhap()) {
		menuAdmin();
	}

	else
		cout << "Dang Nhap That Bai";
}
void TroVemenu() {
	int activity;
	cout << "Nhap 1 De tro ve Man Hinh";
	cin >> activity;
	if (activity == 1)
		menuAdmin();
}

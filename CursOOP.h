#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include <functional>
#include <ctime>
#include <time.h>
using namespace std;

string writeWords();
string encryptPass(string);
string deencryptPass(string);

class Admin;
class User;


class Administration {
protected:
	string login;
	string password;
public:
	Administration() {};
	Administration(string log, string pass) {
		login = log;
		password = pass;
	}
	virtual string getPass() = 0;
	virtual string getLogin() = 0;
	virtual void changePass(string) = 0;
	virtual void changeLogin(string) = 0;
	virtual void showIfromation() = 0;
};

class UserFunc :public Administration {
public:
	UserFunc() {};
	UserFunc(string log, string pass) :Administration(log, pass) {
	}
	virtual void changeName(string) = 0;
	virtual void changeS_Name(string) = 0;
	virtual void changeT_Name(string) = 0;
	virtual void changeGander(int) = 0;
	virtual void changePhoneNumber(string) = 0;
	virtual void changeCard(string) = 0;
	virtual void changeFilling(int) = 0;
	virtual void changeRoot(int) = 0;
	virtual string getName() = 0;
	virtual string getS_Name() = 0;
	virtual string getT_Name() = 0;
	virtual int getGander() = 0;
	virtual string getPhoneNumber() = 0;
	virtual string getCard() = 0;
	virtual int getFilling() = 0;
	virtual void writePass() = 0;
	virtual int getRoot() = 0;
};

class AdminFunc :public Administration {
public:
	AdminFunc() {};
	AdminFunc(string log, string pass) :Administration(log, pass) {
	}
	virtual void writePass() = 0;
};

class User :public UserFunc {
private:
	string name;
	string s_name;
	string t_name;
	int gender;
	string phone_number;
	string card;
	int filling;
	int root;
public:
	User() {
		name = "";
		s_name = "";
		t_name = "";
		gender = 0;
		phone_number = "";
		card = "";
		filling = 0;
		root = 0;
	};
	User(const User& user) {
		login = user.login;
		password = user.password;
		name = user.name;
		s_name = user.s_name;
		t_name = user.t_name;
		gender = user.gender;
		phone_number = user.phone_number;
		card = user.card;
		filling = user.filling;
		root = user.root;
	}
	User(string log, string pass) :UserFunc(log, pass) {
		name = "";
		s_name = "";
		t_name = "";
		gender = 0;
		phone_number = "";
		card = "";
		filling = 0;
		root = 0;
	}
	string getLogin() {
		return login;
	}
	string getPass() {
		return password;
	}
	void changeLogin(string log) {
		login = log;
	}
	void changePass(string pass) {
		password = pass;
	}
	string getName() {
		return name;
	}
	string getS_Name() {
		return s_name;
	}
	string getT_Name() {
		return t_name;
	}
	int getGander() {
		return gender;
	}
	string getCard() {
		return card;
	}
	string getPhoneNumber() {
		return phone_number;
	}
	int getFilling() {
		return filling;
	}
	int getRoot() {
		return root;
	}
	void changeName(string ptr) {
		name = ptr;
	}
	void changeS_Name(string ptr) {
		s_name = ptr;
	}
	void changeT_Name(string ptr) {
		t_name = ptr;
	}
	void changeGander(int ptr) {
		gender = ptr;
	}
	void changeCard(string ptr) {
		card = ptr;
	}
	void changePhoneNumber(string ptr) {
		phone_number = ptr;
	}
	void changeFilling(int ptr) {
		filling = ptr;
	}
	void changeRoot(int ptr) {
		root = ptr;
	}
	void showIfromation() {
		cout << " Логин: " << login << endl;
		cout << " Пароль: " << password << endl;
		cout << " Имя: ";
		if (name.length() != 0) cout << name << endl;
		else cout << " Нет данных" << endl;
		cout << " Фамилия: ";
		if (s_name.length() != 0) cout << s_name << endl;
		else cout << " Нет данных" << endl;
		cout << " Отчество: ";
		if (t_name.length() != 0) cout << t_name << endl;
		else cout << " Нет данных" << endl;
		cout << " Пол: ";
		if (gender == 1) cout << " Мужской" << endl;
		else
			if (gender == 2) cout << " Женский" << endl;
			else cout << " Нет данных" << endl;
		cout << " Номер телефона: ";
		if (phone_number.length() != 0) cout << "+375(" << phone_number[0] << phone_number[1] << ")" << phone_number[2] << phone_number[3] <<
			phone_number[4] << phone_number[5] << phone_number[6] << phone_number[7] << phone_number[8] << endl;
		else cout << " Нет данных" << endl;
		cout << " Банковская карта: ";
		if (card.length() != 0) cout << "**** **** **** " << card[12] << card[13] << card[14] << card[15] << endl;
		else cout << " Нет данных" << endl;
	}
	friend void writeLogin(Admin*& admins, User*& users, int& nAdmin, int& nUsers, int choose, int chois);
	void writePass() {
		string pass;
		cout << "Введите Пароль: ";
		pass = writeWords();
		system("cls");
		password = pass;
	}
	void checkFilling() {
		if (name.length() != 0 && s_name.length() != 0 && t_name.length() != 0 && phone_number.length() != 0 && card.length() != 0 && gender != 0)
			filling = 1;
	}
	friend ostream& operator<<(ostream&, User&);
	friend istream& operator>>(istream&, User&);
};

class Admin :public AdminFunc {
public:
	Admin() {};
	Admin(const Admin& admin) {
		login = admin.login;
		password = admin.password;
	}
	Admin(string log, string pass) :AdminFunc(log, pass) {
	}
	string getPass() {
		return password;
	}
	string getLogin() {
		return login;
	}
	void changePass(string pass) {
		password = pass;
	}
	void changeLogin(string log) {
		login = log;
	}
	void showIfromation() {
		cout << " Логин: " << login << endl;
		cout << " Пароль: " << password << endl;
	}
	friend void writeLogin(Admin*& admins, User*& users, int& nAdmin, int& nUsers, int choose, int chois);
	void writePass() {
		string pass;
		cout << "Введите Пароль: ";
		pass = writeWords();
		system("cls");
		password = pass;
	}
	friend ostream& operator<<(ostream&, Admin&);
	friend istream& operator>>(istream&, Admin&);
};

class Bank {
protected:
	string type_credit;
	int approved;
	string card_balance;
	string credit_money;
	string procent;
	int years;
public:
	Bank() {
		approved = 0;
		years = 0;
	};
	virtual void changeTypeCredit(string) = 0;
	virtual void changeApproved(int) = 0;
	virtual void changeCreditMoney(string) = 0;
	virtual void changeProcent(string) = 0;
	virtual void changeYears(int) = 0;
	virtual string getTypeCredit() = 0;
	virtual int getApproved() = 0;
	virtual string getCreditMoney() = 0;
	virtual string getProcent() = 0;
	virtual int getYears() = 0;
};

class BankFunct:public Bank {
public:
	BankFunct() {};
	void changeTypeCredit(string ptr) {
		type_credit = ptr;
	}
	void changeApproved(int ptr) {
		approved = ptr;
	}
	void changeCreditMoney(string ptr) {
		credit_money = ptr;
	}
	void changeProcent(string ptr) {
		procent = ptr;
	}
	void changeYears(int ptr) {
		years = ptr;
	}
	string getTypeCredit() {
		return type_credit;
	}
	int getApproved() {
		return approved;
	}
	string getCreditMoney() {
		return credit_money;
	}
	string getProcent() {
		return procent;
	}
	int getYears() {
		return years;
	}
};

class Credits :public BankFunct {
private:
	int root;
	string credit_date;
public:	
	Credits() {
		root = 0;
	};
	void changeRoot(int ptr) {
		root = ptr;
	}
	int getRoot() {
		return root;
	}
	string getCreditDate() {
		return credit_date;
	}
	void showInf() {
		cout << "Тип кредита: " << type_credit << endl;
		cout << "Долг: " << credit_money << endl;
		cout << "Дата оформления: " << credit_date << endl;
		cout << "Годовой процент: " << procent << endl;
		cout << "Кредит на " << years << " лет" << endl;
		cout << endl;
	}
	void changeCreditDate(string ptr) {
		credit_date = ptr;
	}
	void setCreditDate() {
		time_t t = time(0);
		struct tm* now = localtime(&t);
		credit_date = to_string(now->tm_mday) + "." + to_string(now->tm_mon + 1) + "." + to_string(now->tm_year + 1900);
	}
	void setColor(int text, int background) {
		HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
	}
	void setProcent() {
		double pr = 1;
		if (procent == "7%") pr = 0.07;
		else 
			if (procent == "10%") pr = 0.1;
			else
				if (procent == "14%") pr = 0.14;
		credit_money = to_string(ceil(stoi(credit_money) + stoi(credit_money) * pr));
	}
	friend ostream& operator<<(ostream&, Credits&);
	friend istream& operator>>(istream&, Credits&);

};


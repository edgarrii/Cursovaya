#define _CRT_SECURE_NO_WARNINGS
#include "CursOOP.h"
#include "Functions.h"
#include "Proverki.h"
#include "ChooseMenu.h"

void writeLogin(Admin*& admins, User*& users, int& nAdmin, int& nUsers, int choose, int chois){
	string log;
	int check = 0;
	while (true) {
		cout << "Введите Логин: ";
		log = writeWords();
		for (int i = 0; i < nAdmin; i++)
			if (admins[i].getLogin() == log && i != choose) {
				check = 1;
				break;
			}
		for (int i = 0; i < nUsers; i++)
			if (users[i].getLogin() == log && i != choose) {
				check = 1;
				break;
			}
		if (log == "oleg") check = 1;
		if (check == 0) break;
		system("cls");
		check = 0;
		cout << "Такой логин уже существует!!!" << endl;
	}
	system("cls");
	if (chois == 0) {
		users[choose].login = log;
	}
	else
		admins[choose].login = log;
}

ostream& operator<<(ostream& os, Admin& admin) {
	os << admin.getLogin() << endl << encryptPass(admin.getPass()) << endl;
	return os;
}

istream& operator>>(istream& is, Admin& admin) {
	string s;
	getline(is, s);
	admin.changeLogin(s);
	getline(is, s);
	admin.changePass(deencryptPass(s));
	return is;
}

istream& operator>>(istream& is, User& user) {
	string s;
	getline(is, s);
	user.changeLogin(s);
	getline(is, s);
	user.changePass(deencryptPass(s));
	getline(is, s);
	user.changeName(s);
	getline(is, s);
	user.changeS_Name(s);
	getline(is, s);
	user.changeT_Name(s);
	getline(is, s);
	user.changeGander(stoi(s));
	getline(is, s);
	user.changePhoneNumber(s);
	getline(is, s);
	user.changeCard(s);
	getline(is, s);
	user.changeFilling(stoi(s));
	getline(is, s);
	user.changeRoot(stoi(s));
	return is;
}

ostream& operator<<(ostream& os, User& user) {
	os << user.getLogin() << endl << encryptPass(user.getPass()) << endl << user.getName() << endl;
	os << user.getS_Name() << endl << user.getT_Name() << endl << user.getGander() << endl;
	os << user.getPhoneNumber() << endl << user.getCard() << endl << user.getFilling() << endl;
	os << user.getRoot() << endl;
	return os;
}

ostream& operator<<(ostream& os, Credits& credit) {
	os << credit.getTypeCredit() << endl << credit.getApproved() << endl;
	os << credit.getCreditMoney() << endl << credit.getProcent() << endl << credit.getCreditDate() << endl << credit.getRoot() << endl;
	os << credit.getYears() << endl;
	return os;
}

istream& operator>>(istream& is, Credits& credit) {
	string s;
	getline(is, s);
	credit.changeTypeCredit(s);
	getline(is, s);
	credit.changeApproved(stoi(s));
	getline(is, s);
	credit.changeCreditMoney(s);
	getline(is, s);
	credit.changeProcent(s);
	getline(is, s);
	credit.changeCreditDate(s);
	getline(is, s);
	credit.changeRoot(stoi(s));
	getline(is, s);
	credit.changeYears(stoi(s));
	return is;
}

int main() {
	setlocale(0, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ifstream check;
	ofstream of;
	createFiles();
	string login = "edgar";
	string password = "123";
	int nAdmin = 0;
	int nUsers = 0;
	int nCredits = 0;
	fillSize(nAdmin, nUsers, nCredits);
	Admin* admins = new Admin [nAdmin];
	User* users = new User [nUsers];
	Credits* credit = new Credits [nCredits];
	int roots = 0;
	roots = fillClasses(admins, users, credit, nAdmin, nUsers, nCredits, roots);
	while (true) {
		int checks = 0;
		int choose = chooseMainMenu();
		if (choose == 0) {
			int check = 0;
			string log, pass;
			cout << "Введите Логин: ";
			log = writeWords();
			cout << endl;
			cout << "Введите Пароль: ";
			pass = writePassword();
			system("cls");
			if (log == login && pass == password) {
				checks = openAdminMenu(admins, users, nAdmin, nUsers, roots, credit, nCredits);
				check = 1;
			}
			else {
				if (check == 0) {
					for (int i = 0; i < nAdmin; i++)
						if (admins[i].getLogin() == log && admins[i].getPass() == pass) {
							checks = openAdminMenu(admins, users, nAdmin, nUsers, roots, credit, nCredits);
							check = 1;
							break;
						}
				}
				if (check == 0) {
					for (int i = 0; i < nUsers; i++)
						if (users[i].getLogin() == log && users[i].getPass() == pass) {
							checks = openUserMenu(admins, users, nAdmin, nUsers, credit, nCredits, i);
							check = 1;
							break;
						}

				}
			}
			if (checks == 4 && check == 1) break;
			if (checks != 3) {
				cout << "Вы ввели неверный логин или пароль." << endl;
				cout << "Попробуйте еще раз." << endl;
				system("pause");
			}
			system("cls");
			
		}else
			if (choose == 1) {
				string log, pass;
				int check = 0;
				while (true) {
					cout << "Введите Логин: ";
					log = writeWords();
					for (int i = 0; i < nAdmin; i++)
						if (admins[i].getLogin() == log) {
							check = 1; 
							break;
						}
					for (int i = 0; i < nUsers; i++)
						if (users[i].getLogin() == log) {
							check = 1;
							break;
						}
					if (log == login) {
						check = 1;
					}
					if (check == 0) break;
					system("cls");
					check = 0;
					cout << "Такой логин уже существует!!!" << endl;
				}
				cout << endl;
				cout << "Введите Пароль: ";
				pass = writePassword();
				User user(log, pass);
				changeSizeUsers(users, nUsers);
				users[nUsers - 1] = user;
				users[nUsers - 1].changeRoot(roots + 1);
				roots++;
				fillFiles(admins, users, credit, nAdmin, nUsers, nCredits);
				system("cls");
			}
			else
				break;
	}
	fillFiles(admins, users, credit, nAdmin, nUsers, nCredits);
	delete[]credit;
	delete[]admins;
	delete[]users;
}

string writeWords() {
	string str;
	while (true) {
		int key;
		key = _getch();
		if (key == 224) {
			key = _getch();
		}
		else
			if (key == 8) {
				if (str.length() != 0) {
					cout << '\b' << " " << '\b';
					str.erase(str.length() - 1);
				}
			}
			else
				if (key == 13 && str.length() != 0) break;
				else
					if ((key >= 'a' && key <= 'z') || (key >= 'A' && key <= 'Z') || (key >= '0' && key <= '9')) {
						str = str + (char)key;
						cout << (char)key;
					}
	}
	return str;
}

string encryptPass(string pass) {
	string encrypt;
	for (int i = 0; i < pass.length(); i++) {
		char c = pass[i];
		c = c + '*';
		encrypt.push_back(c);
	}
	return encrypt;
}

string deencryptPass(string encrypt) {
	string deencrypt;
	for (int i = 0; i < encrypt.length(); i++) {
		char c = encrypt[i];
		c = c - '*';
		deencrypt.push_back(c);
	}
	return deencrypt;
}
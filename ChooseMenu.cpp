#include "ChooseMenu.h"

int chooseMainMenu() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 3) % 3;
        if (choose_menu == 0) { setColor(5, 0); cout << " -> ����� � ��� ������������ �������" << endl; setColor(15, 0); }
        else cout << " ����� � ��� ������������ �������" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> ���������������� ����� �������" << endl; setColor(15, 0); }
        else cout << " ���������������� ����� �������" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> ��������� ��������� � �����" << endl; setColor(15, 0); }
        else { cout << " ��������� ��������� � �����" << endl; }

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int showAdminMenu() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "�����������, �������������!" << endl;
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 6) % 6;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> ������ � �������� ��������" << endl; setColor(15, 0); }
        else cout << " ������ � �������� ��������" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> �������������� ������ ��������" << endl; setColor(15, 0); }
        else cout << " �������������� ������ ��������" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> �������� � ����� ������ ��������" << endl; setColor(15, 0); }
        else { cout << " �������� � ����� ������ ��������" << endl; }

        if (choose_menu == 3) { setColor(5, 0); cout << " -> ��������� ������� " << endl; setColor(15, 0); }
        else { cout << " ��������� �������" << endl; }

        if (choose_menu == 4) { setColor(5, 0); cout << " -> ����� � ������� ����" << endl; setColor(15, 0); }
        else { cout << " ����� � ������� ����" << endl; }

        if (choose_menu == 5) { setColor(5, 0); cout << " -> ����� �� ���������" << endl; setColor(15, 0); }
        else { cout << " ����� �� ���������" << endl; }

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int showMenuAdministration() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 6) % 6;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> �������� ������� �������" << endl; setColor(15, 0); }
        else cout << " �������� ������� �������" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> �������������� ������� �������" << endl; setColor(15, 0); }
        else cout << " �������������� ������� �������" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> ���������� ������� ������" << endl; setColor(15, 0); }
        else { cout << " ���������� ������� ������" << endl; }

        if (choose_menu == 3) { setColor(5, 0); cout << " -> ��������� ����������" << endl; setColor(15, 0); }
        else { cout << " ��������� ����������" << endl; }

        if (choose_menu == 4) { setColor(5, 0); cout << " -> ����� � ���� ��������������" << endl; setColor(15, 0); }
        else { cout << " ����� � ���� ��������������" << endl; }

        if (choose_menu == 5) { setColor(5, 0); cout << " -> ����� �� ��������� � ��������� ����������" << endl; setColor(15, 0); }
        else { cout << " ����� �� ��������� � ��������� ����������" << endl; }

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int chooseAdminsOrUsers() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 3) % 3;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> ������������� ���������������" << endl; setColor(15, 0); }
        else cout << " ������������� ���������������" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> ������������� �������������" << endl; setColor(15, 0); }
        else cout << " ������������� �������������" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> ����� � ���� ��������������" << endl; setColor(15, 0); }
        else { cout << " ����� � ���� ��������������" << endl; }

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int chooseAdmin(Admin*& admins, int& nAdmin) {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "����������� ����� � ���� �������� ����� ����" << endl;
        choose_menu = (choose_menu + (nAdmin + 1)) % (nAdmin + 1);

        for (int i = 0; i < nAdmin; i++)
            if (i == choose_menu) { setColor(5, 0); cout << " -> " << i + 1 << " - " << admins[i].getLogin() << endl; setColor(15, 0); }
            else { cout << " " << i + 1 << " - " << admins[i].getLogin() << endl; }

        if (choose_menu == nAdmin) { setColor(5, 0); cout << " -> ����� � ������ ��������������" << endl; setColor(15, 0); }
        else cout << " ����� � ������ ��������������" << endl;

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int chooseWhatRedAdmin(Admin*& admins, int choose) {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 4) % 4;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> �����: " << admins[choose].getLogin() << endl; setColor(15, 0); }
        else cout << " �����: " << admins[choose].getLogin() << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> ������: " << admins[choose].getPass() << endl; setColor(15, 0); }
        else cout << " ������: " << admins[choose].getPass() << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> �����: �������������" << endl; setColor(15, 0); }
        else { cout << " �����: �������������" << endl; }

        if (choose_menu == 3) { setColor(5, 0); cout << " -> ����� � ���� ������ ��������������" << endl; setColor(15, 0); }
        else { cout << " ����� � ���� ������ ��������������" << endl; }

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int chooseRoot() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 3) % 3;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> �������������" << endl; setColor(15, 0); }
        else cout << " �������������" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> ������������" << endl; setColor(15, 0); }
        else cout << " ������������" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> ����� �� ���� ������ ����" << endl; setColor(15, 0); }
        else { cout << " ����� �� ���� ������ ����" << endl; }

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int chooseYesOrNot() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        cout << "�� ������� ��� ������ �������� �����?" << endl;
        cout << "����� ������ ������������ �������� �� ���� ������." << endl;
        choose_menu = (choose_menu + 2) % 2;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> ��" << endl; setColor(15, 0); }
        else cout << " ��" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> ���" << endl; setColor(15, 0); }
        else cout << " ���" << endl;

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int chooseUser(User*& users, int& nUsers) {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + (nUsers + 1)) % (nUsers + 1);

        for (int i = 0; i < nUsers; i++)
            if (i == choose_menu) { setColor(5, 0); cout << " -> " << i + 1 << " - " << users[i].getLogin() << endl; setColor(15, 0); }
            else { cout << " " << i + 1 << " - " << users[i].getLogin() << endl; }

        if (choose_menu == nUsers) { setColor(5, 0); cout << " -> ����� � ������ ������������" << endl; setColor(15, 0); }
        else cout << " ����� � ������ ������������" << endl;

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int chooseWhatRedUser(User*& users, int choose, int a) {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 10) % 10;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> �����: " << users[choose].getLogin() << endl; setColor(15, 0); }
        else cout << " �����: " << users[choose].getLogin() << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> ������: " << users[choose].getPass() << endl; setColor(15, 0); }
        else cout << " ������: " << users[choose].getPass() << endl;

        if (a == 0) {
            if (choose_menu == 2) { setColor(5, 0); cout << " -> �����: ������������" << endl; setColor(15, 0); }
            else { cout << " �����: ������������" << endl; }
        }

        if (choose_menu == 3) {
            setColor(5, 0);
            if (users[choose].getName().length() != 0) cout << " -> ���: " << users[choose].getName() << endl;
            else cout << " -> ���: ��� ������" << endl;
            setColor(15, 0);
        }
        else {
            if (users[choose].getName().length() != 0) cout << " ���: " << users[choose].getName() << endl;
            else cout << " ���: ��� ������" << endl;
        }

        if (choose_menu == 4) {
            setColor(5, 0);
            if (users[choose].getS_Name().length() != 0) cout << " -> �������: " << users[choose].getS_Name() << endl;
            else cout << " -> �������: ��� ������" << endl;
            setColor(15, 0);
        }
        else {
            if (users[choose].getS_Name().length() != 0) cout << " �������: " << users[choose].getS_Name() << endl;
            else cout << " �������: ��� ������" << endl;
        }

        if (choose_menu == 5) {
            setColor(5, 0);
            if (users[choose].getT_Name().length() != 0)  cout << " -> ��������: " << users[choose].getT_Name() << endl;
            else cout << " -> ��������: ��� ������" << endl;
            setColor(15, 0);
        }
        else {
            if (users[choose].getT_Name().length() != 0)  cout << " ��������: " << users[choose].getT_Name() << endl;
            else cout << " ��������: ��� ������" << endl;
        }

        if (choose_menu == 6) {
            setColor(5, 0);
            if (users[choose].getPhoneNumber().length() != 0) cout << " -> ����� ��������: +375" << users[choose].getPhoneNumber() << endl;
            else cout << " -> ����� ��������: ��� ������" << endl;
            setColor(15, 0);
        }
        else {
            if (users[choose].getPhoneNumber().length() != 0) cout << " ����� ��������: +375" << users[choose].getPhoneNumber() << endl;
            else cout << " ����� ��������: ��� ������" << endl;
        }

        if (choose_menu == 7) {
            setColor(5, 0);
            if (users[choose].getCard().length() != 0) cout << " -> �����: " << users[choose].getCard() << endl;
            else cout << " -> �����: ��� ������" << endl;
            setColor(15, 0);
        }
        else {
            if (users[choose].getCard().length() != 0) cout << " �����: " << users[choose].getCard() << endl;
            else cout << " �����: ��� ������" << endl;
        }

        if (choose_menu == 8) {
            setColor(5, 0);
            if (users[choose].getGander() == 1) cout << " -> ���: �������" << endl;
            else
                if (users[choose].getGander() == 2) cout << " -> ���: �������" << endl;
                else cout << " -> ���: ��� ������" << endl;
            setColor(15, 0);
        }
        else {
            if (users[choose].getGander() == 1) cout << " ���: �������" << endl;
            else
                if (users[choose].getGander() == 2) cout << " ���: �������" << endl;
                else cout << " ���: ��� ������" << endl;
        }

        if (choose_menu == 9) { setColor(5, 0); cout << " -> ����� �����" << endl; setColor(15, 0); }
        else { cout << " ����� �����" << endl; }

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) {
                choose_menu--;
                if (a == 1 && choose_menu == 2) choose_menu--;
            }
            if (keyboard_button == 80) {
                choose_menu++;
                if (a == 1 && choose_menu == 2) choose_menu++;
            }
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int chooseWhoAdd() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 3) % 3;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> �������� ��������������" << endl; setColor(15, 0); }
        else cout << " �������� ��������������" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> �������� ������������" << endl; setColor(15, 0); }
        else cout << " �������� ������������" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> ����� � ���� ��������������" << endl; setColor(15, 0); }
        else { cout << " ����� � ���� ��������������" << endl; }

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int chooseRedCreditsMenu() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 5) % 5;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> ������������� ������� �������������" << endl; setColor(15, 0); }
        else cout << " ������������� ������� �������������" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> �������� ������ ��� ������������" << endl; setColor(15, 0); }
        else cout << " �������� ������ ��� ������������" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> �������� ���� ��������" << endl; setColor(15, 0); }
        else { cout << " �������� ���� ��������" << endl; }

        if (choose_menu == 3) { setColor(5, 0); cout << " -> ����� � ������� ����" << endl; setColor(15, 0); }
        else { cout << " ����� � ������� ����" << endl; }

        if (choose_menu == 4) { setColor(5, 0); cout << " -> ��������� ��������� � �����" << endl; setColor(15, 0); }
        else { cout << " ��������� ��������� � �����" << endl; }

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int chooseWhatRed(Credits*& credit, int& nCredit, User*& users, int& nUsers) {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + (nCredit + 1)) % (nCredit + 1);

        for (int i = 0; i < nCredit; i++)
            if (i == choose_menu) {
                int ij = 0;
                setColor(5, 0);
                for (int j = 0; j < nUsers; j++)
                    if (users[j].getRoot() == credit[i].getRoot()) { ij = j; break; }
                cout << " -> " << i + 1 << " - " << users[ij].getLogin() << ". ������: " << credit[i].getTypeCredit() << "; ����: " << credit[i].getCreditDate() << endl;
                setColor(15, 0);
            }
            else {
                int ij = 0;
                for (int j = 0; j < nUsers; j++)
                    if (users[j].getRoot() == credit[i].getRoot()) { ij = j; break; }
                cout << " " << i + 1 << " - " << users[ij].getLogin() << ". ������: " << credit[i].getTypeCredit() << "; ����: " << credit[i].getCreditDate() << endl;
            }

        if (choose_menu == nCredit) { setColor(5, 0); cout << " -> ����� � ������" << endl; setColor(15, 0); }
        else cout << " ����� � ������" << endl;

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int chooseRedCredit(Credits*& credit, int choose) {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 7) % 7;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> ��� �������: " << credit[choose].getTypeCredit() << endl; setColor(15, 0); }
        else cout << " ��� �������: " << credit[choose].getTypeCredit() << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> ����: " << credit[choose].getCreditMoney() << endl; setColor(15, 0); }
        else cout << " ����: " << credit[choose].getCreditMoney() << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> �������: " << credit[choose].getProcent() << endl; setColor(15, 0); }
        else cout << " �������: " << credit[choose].getProcent() << endl;

        if (choose_menu == 3) { setColor(5, 0); cout << " -> ������ ��: " << credit[choose].getYears() << " ���." << endl; setColor(15, 0); }
        else cout << " ������ ��: " << credit[choose].getYears() << " ���." << endl;

        if (choose_menu == 4) { 
            setColor(5, 0); 
            string s;
            if (credit[choose].getApproved() == 0) s = "�� ��������";
            else
                if (credit[choose].getApproved() == 1) s = "�������";
            cout << " -> �������: " << s << endl; 
            setColor(15, 0); 
        }
        else {
            string s;
            if (credit[choose].getApproved() == 0) s = "�� ��������";
            else
                if (credit[choose].getApproved() == 1) s = "�������";
            cout << " �������: " << s << endl;
        }

        if (choose_menu == 5) { setColor(5, 0); cout << " -> ������� ������ " << endl; setColor(15, 0); }
        else cout << " ������� ������" << endl;

        if (choose_menu == 6) { setColor(5, 0); cout << " -> ��������� � ���� ������ " << endl; setColor(15, 0); }
        else cout << " ��������� � ���� ������ " << endl;

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int chooseApproved() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 2) % 2;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> ������� " << endl; setColor(15, 0); }
        else cout << " ������� " << endl;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> �� ������� " << endl; setColor(15, 0); }
        else cout << " �� ������� " << endl;

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) {
            system("cls");
            return choose_menu;
        }
        system("cls");
    }
}

string chooseTypeCredit() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 4) % 4;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> ��������������� " << endl; setColor(15, 0); }
        else cout << " ���������������" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> �������� ������ " << endl; setColor(15, 0); }
        else cout << " �������� ������" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> �� ������������" << endl; setColor(15, 0); }
        else cout << " �� ������������" << endl;

        if (choose_menu == 3) { setColor(5, 0); cout << " -> ������" << endl; setColor(15, 0); }
        else cout << " ������" << endl;

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { 
            system("cls"); 
            if (choose_menu == 0) return "���������������";
            else
                if (choose_menu == 1) return "�������� ������";
                else
                    if (choose_menu == 2) return "�� ������������";
                    else
                        if (choose_menu == 3) return "������";
        }
        system("cls");
    }
}

string chooseProcent() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 3) % 3;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> ������ 7% " << endl; setColor(15, 0); }
        else cout << " ������ 7% " << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> ������ 10% " << endl; setColor(15, 0); }
        else cout << " ������ 10% " << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> ������ 14% " << endl; setColor(15, 0); }
        else cout << " ������ 14% " << endl;

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) {
            system("cls");
            if (choose_menu == 0) return "7%";
            else
                if (choose_menu == 1) return "10%";
                else
                    if (choose_menu == 2) return "14%";
        }
        system("cls");
    }
}

string chooseYears() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 4) % 4;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> 5 ���. " << endl; setColor(15, 0); }
        else cout << " 5 ���. " << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> 10 ���. " << endl; setColor(15, 0); }
        else cout << " 10 ���. " << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> 15 ���. " << endl; setColor(15, 0); }
        else cout << " 15 ���. " << endl;

        if (choose_menu == 3) { setColor(5, 0); cout << " -> 20 ���. " << endl; setColor(15, 0); }
        else cout << " 20 ���. " << endl;

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) {
            system("cls");
            if (choose_menu == 0) return "5";
            else
                if (choose_menu == 1) return "10";
                else
                    if (choose_menu == 2) return "15";
                    else
                        if (choose_menu == 3) return "20";
        }
        system("cls");
    }
}

int chooseProcMenu() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 5) % 5;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> �������� ���� ��������" << endl; setColor(15, 0); }
        else cout << " �������� ���� ��������" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> ����� ���� �������� ������������" << endl; setColor(15, 0); }
        else cout << " ����� ���� �������� ������������" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> ���������� ������� �� ���������" << endl; setColor(15, 0); }
        else { cout << " ���������� ������� �� ���������" << endl; }

        if (choose_menu == 3) { setColor(5, 0); cout << " -> ����� � ������� ����" << endl; setColor(15, 0); }
        else { cout << " ����� � ������� ����" << endl; }

        if (choose_menu == 4) { setColor(5, 0); cout << " -> ��������� ��������� � �����" << endl; setColor(15, 0); }
        else { cout << " ��������� ��������� � �����" << endl; }

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int chooseSort() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 3) % 3;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> ����������� �� ���� �������" << endl; setColor(15, 0); }
        else cout << " ����������� �� ���� �������" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> ����������� �� �����" << endl; setColor(15, 0); }
        else cout << " ����������� �� �����" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> ����� � ����" << endl; setColor(15, 0); }
        else { cout << " ����� � ����" << endl; }

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int chooseHowSort() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 2) % 2;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> ����������� �� �����������" << endl; setColor(15, 0); }
        else cout << " ����������� �� �����������" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> ����������� �� ��������" << endl; setColor(15, 0); }
        else cout << " ����������� �� ��������" << endl;

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int choicYesOrNot(int a, string c) {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        cout << "������ �: " << a << "���. ��� " << c << endl;
        cout << "�� �������, ��� ������ �������� ������?" << endl;
        choose_menu = (choose_menu + 2) % 2;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> ��" << endl; setColor(15, 0); }
        else cout << " ��" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> ���" << endl; setColor(15, 0); }
        else cout << " ���" << endl;

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int chooseExitOfFill() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "�����������, ������������!" << endl;
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        cout << "����� ����� ������ � ����� ����� �� ������ ������������ ��� ���� ������������ ������." << endl;
        cout << "���� �� ������ �������� ������, �� ��������� � ������ ���������� ��������." << endl;
        choose_menu = (choose_menu + 2) % 2;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> ��������� �������" << endl; setColor(15, 0); }
        else cout << " ��������� �������" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> ����� � ������� ����" << endl; setColor(15, 0); }
        else cout << " ����� � ������� ����" << endl;

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

int chooseUserMenu() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "�����������, ������������!" << endl;
        cout << "��������� ������� Up � Down �������� ����������� ����� ����:" << endl;
        choose_menu = (choose_menu + 6) % 6;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> �������� ������" << endl; setColor(15, 0); }
        else cout << " �������� ������" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> �������� ���� ��������" << endl; setColor(15, 0); }
        else cout << " �������� ���� ��������" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> �������� ���������� �� ��������" << endl; setColor(15, 0); }
        else { cout << " �������� ���������� �� ��������" << endl; }

        if (choose_menu == 3) { setColor(5, 0); cout << " -> �������������� ������ ��������" << endl; setColor(15, 0); }
        else { cout << " �������������� ������ ��������" << endl; }

        if (choose_menu == 4) { setColor(5, 0); cout << " -> ����� � ������� ����" << endl; setColor(15, 0); }
        else { cout << " ����� � ������� ����" << endl; }

        if (choose_menu == 5) { setColor(5, 0); cout << " -> ����� �� ���������" << endl; setColor(15, 0); }
        else { cout << " ����� �� ���������" << endl; }

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { system("cls"); return choose_menu; }
        system("cls");
    }
}

#include "Functions.h"
#include "Proverki.h"
#include "CursOOP.h"
#include "ChooseMenu.h"

int openAdminMenu(Admin*& admins, User*& users, int& nAdmin, int& nUsers, int& roots, Credits*& credit, int& nCredit) {
    while (true) {
        fillFiles(admins, users, credit, nAdmin, nUsers, nCredit);
        int choose = showAdminMenu();
        if (choose == 0) {
            int check = openMenuAdministration(admins, users, nAdmin, nUsers, roots);
            if (check == 4) return 4;
        }else
            if (choose == 1) {
               int check = openMenuRedCredits(credit, nCredit, users, nUsers);
               if (check == 4) return 4;
            }else
                if (choose == 2) {
                    int check = openProcMenu(credit, nCredit, users, nUsers);
                    if (check == 4) return 4;
                }else
                    if (choose == 3) {
                        for (int i = 0; i < nCredit; i++)
                            credit[i].setProcent();
                    }else
                        if (choose == 4) {
                            return 3;
                        }
                        else
                            if (choose == 5) {
                                return 4;
                            }
    }
}

int openUserMenu(Admin*& admins, User*& users, int& nAdmin, int& nUsers, Credits*& credit, int& nCredit, int choose) {
    while (true) {
        fillFiles(admins, users, credit, nAdmin, nUsers, nCredit);
        if (users[choose].getFilling() == 0) {
            int choose1 = chooseExitOfFill();
            if (choose1 == 1) return 3;
            else {
                redUser(admins, users, nAdmin, nUsers, choose, 1);
                users[choose].checkFilling();
            }
        }
        else {
            while (true) {
                int choose1 = chooseUserMenu();
                string procent = "";
                if (choose1 == 0) {
                    changeSizeCredit(credit, nCredit);
                    credit[nCredit - 1].changeTypeCredit(chooseTypeCredit());
                    cout << "Введите сколько вы хотите взять денег: ";
                    credit[nCredit - 1].changeCreditMoney(writeMoney(5));
                    system("cls");
                    if (credit[nCredit - 1].getTypeCredit() == "Потребительский" || credit[nCredit - 1].getTypeCredit() == "Льготный кредит") procent = "7%";
                    else
                        if (credit[nCredit - 1].getTypeCredit() == "На недвижимость") procent = "14%";
                        else
                            if (credit[nCredit - 1].getTypeCredit() == "Лизинг") procent = "10%";
                    credit[nCredit - 1].changeProcent(procent);
                    credit[nCredit - 1].changeYears(stoi(chooseYears()));
                    credit[nCredit - 1].setCreditDate();
                    credit[nCredit - 1].changeRoot(users[choose].getRoot());
                    int choice = choicYesOrNot(stoi(credit[nCredit - 1].getCreditMoney()), credit[nCredit - 1].getProcent());
                    if (choice == 1) {
                        nCredit--;
                    }
                }else
                    if (choose1 == 1) {
                        int check = 0;
                        for (int i = 0; i < nUsers; i++)
                            if (users[i].getLogin() == users[choose].getLogin()) {
                                check = 1;
                                for (int j = 0; j < nCredit; j++)
                                    if (users[i].getRoot() == credit[j].getRoot()) {
                                        credit[j].showInf();
                                        check = 2;
                                    }
                                break;
                            }
                        if (check == 1) cout << "Вы не имеет кредитов." << endl;
                        system("pause");
                        system("cls");
                    }
                    else
                        if (choose1 == 2) {
                            users[choose].showIfromation();
                            system("pause");
                            system("cls");
                        }else
                            if (choose1 == 3) {
                                redUser(admins, users, nAdmin, nUsers, choose, 1);
                            }else
                                if (choose1 == 4) return 3;
                                else
                                    if (choose1 == 5) return 4;
            }
        }
    }
    return 0;
}

int openMenuAdministration(Admin*& admins, User*& users, int& nAdmin, int& nUsers, int& roots) {
    while (true) {
        int choose = showMenuAdministration();
        if (choose == 0) {
            showUsers(admins, users, nAdmin, nUsers);
        }else
            if (choose == 1) {
                changeMenuUsers(admins, users, nAdmin, nUsers, roots);
            }else
                if (choose == 2) {
                    addOneUser(admins, users, nAdmin, nUsers, roots);
                }else
                    if (choose == 3) {
                        ofstream fout;
                        fout.open("admins.txt");
                        for (int i = 0; i < nAdmin; i++) {
                            fout << admins[i];
                        }
                        fout << nAdmin << endl;
                        fout.close();
                        fout.open("users.txt");
                        for (int i = 0; i < nUsers; i++) {
                            fout << users[i];
                        }
                        fout << nUsers << endl;
                        fout.close();
                    }else
                        if (choose == 4) {
                            return 0;
                        }else
                            if (choose == 5) {
                                return 4;
                            }
    }
}

void changeMenuUsers(Admin*& admins, User*& users, int& nAdmin, int& nUsers, int& roots) {
    while (true) {
        int choose = chooseAdminsOrUsers();
        if (choose == 0) {
            openMenuRedAdmin(admins, users, nAdmin, nUsers, roots);
        }else
            if (choose == 1) {
                openMenuRedUsers(admins, users, nAdmin, nUsers);
            }
            else
                if (choose == 2) break;
    }
}

void showUsers(Admin*& admins, User*& users, int& nAdmin, int& nUsers) {
    if (nAdmin != 0) {
        cout << "       Администраторы: " << endl;
        for (int i = 0; i < nAdmin; i++) {
            admins[i].showIfromation();
            cout << endl;
        }
    }
    if (nUsers != 0) {
        cout << "       Пользователи: " << endl;
        for (int i = 0; i < nUsers; i++) {
            users[i].showIfromation();
            cout << endl;
        }
    }
    system("pause");
    system("cls");
}

void openMenuRedAdmin(Admin*& admins, User*& users, int& nAdmin, int& nUsers, int& roots) {
    while (true) {
        int choose = chooseAdmin(admins, nAdmin);
        if (choose == nAdmin) break;
        else {
            while (true) {
                int choose1 = chooseWhatRedAdmin(admins, choose);
                if (choose1 == 3) break;
                else
                    if (choose1 == 0) {
                        writeLogin(admins, users, nAdmin, nUsers, choose, 1);
                    }else
                        if (choose1 == 1) {
                            admins[choose].writePass();
                        }else
                            if (choose1 == 2) {
                                int choose2 = chooseRoot();
                                if (choose2 == 1) {
                                    int prov = chooseYesOrNot();
                                    if (prov == 0) {
                                        User user(admins[choose].getLogin(), admins[choose].getPass());
                                        changeSizeUsers(users, nUsers);
                                        users[nUsers - 1] = user;
                                        users[nUsers - 1].changeRoot(roots);
                                        users++;
                                        for (int i = choose; i < nAdmin - 1; i++) {
                                            admins[i] = admins[i + 1];
                                        }
                                        nAdmin--;
                                        break;
                                    }
                                }
                            }
            }
        }
    }
}

void openMenuRedUsers(Admin*& admins, User*& users, int& nAdmin, int& nUsers) {
    while (true) {
        int choose = chooseUser(users, nUsers);
        if (choose == nUsers) break;
        else {
            redUser(admins, users, nAdmin, nUsers, choose, 0);
        }
    }
}

void addOneUser(Admin*& admins, User*& users, int& nAdmin, int& nUsers, int& roots) {
    while (true) {
        int choose = chooseWhoAdd();
        if (choose == 2) break;
        Admin admin;
        User user;
        if (choose == 0) {
            changeSizeAdmins(admins, nAdmin);
            admins[nAdmin - 1] = admin;
            writeLogin(admins, users, nAdmin, nUsers, nAdmin - 1, 1);
            admins[nAdmin - 1].writePass();
        }else
            if (choose == 1) {
                changeSizeUsers(users, nUsers);
                users[nUsers - 1] = user;
                writeLogin(admins, users, nAdmin, nUsers, nUsers - 1, 0);
                users[nUsers - 1].writePass();
                users[nUsers - 1].changeRoot(roots);
                roots++;
            }
    }
}

int openMenuRedCredits(Credits*& credit, int& nCredit, User*& users, int& nUsers) {
    while (true) {
        int choose = chooseRedCreditsMenu();
        if (choose == 4) return 4;
        if (choose == 3) break;
        if (choose == 0) {
            openMenuRedCredit(credit, nCredit, users, nUsers);
        }else
            if (choose == 1) {
                addOneCredit(credit, nCredit, users, nUsers);
            }else
                if (choose == 2) {
                    showAllCredits(credit, nCredit, users, nUsers);
                }
    }
    return 0;
}

void openMenuRedCredit(Credits*& credit, int& nCredit, User*& users, int& nUsers) {
    while (true) {
        int choose = chooseWhatRed(credit, nCredit, users, nUsers);
        if (choose == nCredit) break;
        while (true) {
            int choose1 = chooseRedCredit(credit, choose);
            if (choose1 == 0) credit[choose].changeTypeCredit(chooseTypeCredit());
            else
                if (choose1 == 1) {
                    cout << "Введите сколько вы хотите взять денег: ";
                    credit[choose].changeCreditMoney(writeMoney(5));
                }
                else
                    if (choose1 == 2) credit[choose].changeProcent(chooseProcent());
                    else
                        if (choose1 == 3) credit[choose].changeYears(stoi(chooseYears()));
                        else
                            if (choose1 == 4) {
                                credit[choose].changeApproved(chooseApproved());
                            }else
                                if (choose1 == 5) {
                                    for (int i = choose; i < nCredit - 1; i++)
                                        credit[i] = credit[i + 1];
                                    nCredit--;
                                    break;
                                }
                                else break;
        }
    }
}

void showAllCredits(Credits*& credit, int& nCredit, User*& users, int& nUsers) {
    for (int i = 0; i < nCredit; i++) {
        int choose = 0;
        for(int j = 0; j < nUsers; j++)
            if (credit[i].getRoot() == users[j].getRoot()) {
                choose = j;
                break;
            }
        cout << "   Пользователь: " << users[choose].getLogin() << endl;
        credit[i].showInf();
    }
    system("pause");
    system("cls");
}

void addOneCredit(Credits*& credit, int& nCredit, User*& users, int& nUsers) {
    while (true) {
        int choose = chooseUser(users, nUsers);
        if (choose == nUsers) break;
        changeSizeCredit(credit, nCredit);
        credit[nCredit - 1].changeTypeCredit(chooseTypeCredit());
        cout << "Введите сколько денег вы хотите взять: ";
        credit[nCredit - 1].changeCreditMoney(writeMoney(5));
        system("cls");
        credit[nCredit - 1].changeProcent(chooseProcent());
        credit[nCredit - 1].changeYears(stoi(chooseYears()));
        credit[nCredit - 1].setCreditDate();
        credit[nCredit - 1].changeRoot(users[choose].getRoot());
    }
}

int openProcMenu(Credits*& credit, int& nCredit, User*& users, int& nUsers) {
    while (true) {
        int choose = chooseProcMenu();
        if (choose == 3) break;
        if (choose == 4) return 4;
        if (choose == 0) {
            showAllCredits(credit, nCredit, users, nUsers);
        }else
            if (choose == 1) {
                cout << "Введите логин пользователя: ";
                string log = writeWords();
                cout << endl;
                int check = 0;
                for(int i = 0; i < nUsers; i++)
                    if (users[i].getLogin() == log) {
                        check = 1;
                        for (int j = 0; j < nCredit; j++)
                            if (users[i].getRoot() == credit[j].getRoot()) {
                                credit[j].showInf();
                                check = 2;
                            }
                        break;
                    }
                if (check == 0) cout << "Такого пользователя не существует." << endl;
                else
                    if (check == 1) cout << "Данный пользователь не имеет кредитов." << endl;
                system("pause");
                system("cls");
            }else
                if (choose == 2) {
                    openMenuSort(credit, nCredit, users, nUsers);
                }
    }
    return 0;
}

void openMenuSort(Credits*& credit, int& nCredit, User*& users, int& nUsers) {
    while (true) {
        int choose = chooseSort();
        if (choose == 0) {
            for(int i = 0; i < nCredit; i++)
                for(int j = 0; j < nCredit - 1; j++)
                    if (credit[j].getTypeCredit() > credit[j + 1].getTypeCredit()) {
                        Credits creditt;
                        creditt = credit[j];
                        credit[j] = credit[j + 1];
                        credit[j + 1] = creditt;
                    }
        }
        else
            if (choose == 1) {
                int choose1 = chooseHowSort();
                if (choose1 == 0) {
                    for (int i = 0; i < nCredit; i++)
                        for (int j = 0; j < nCredit - 1; j++)
                            if (stoi(credit[j].getCreditMoney()) > stoi(credit[j + 1].getCreditMoney())) {
                                Credits creditt;
                                creditt = credit[j];
                                credit[j] = credit[j + 1];
                                credit[j + 1] = creditt;
                            }
                }
                else
                    if (choose1 == 1) {
                        for (int i = 0; i < nCredit; i++)
                            for (int j = 0; j < nCredit - 1; j++)
                                if (stoi(credit[j].getCreditMoney()) < stoi(credit[j + 1].getCreditMoney())) {
                                    Credits creditt;
                                    creditt = credit[j];
                                    credit[j] = credit[j + 1];
                                    credit[j + 1] = creditt;
                                }
                    }
            }
            else break;
    }
}

void redUser(Admin*& admins, User*& users, int& nAdmin, int& nUsers, int choose, int a) {
    while (true) {
        int choose1 = chooseWhatRedUser(users, choose, a);
        if (choose1 == 9) break;
        if (choose1 == 0) {
            writeLogin(admins, users, nAdmin, nUsers, choose, 0);
        }
        else
            if (choose1 == 1) {
                users[choose].writePass();
            }
            else
                if (choose1 == 2) {
                    int choose2 = chooseRoot();
                    if (choose2 == 0) {
                        int prov = chooseYesOrNot();
                        if (prov == 0) {
                            Admin admin(users[choose].getLogin(), users[choose].getPass());
                            changeSizeAdmins(admins, nAdmin);
                            admins[nAdmin - 1] = admin;
                            for (int i = choose; i < nUsers - 1; i++) {
                                users[i] = users[i + 1];
                            }
                            nUsers--;
                            break;
                        }
                    }
                }
                else
                    if (choose1 == 3) {
                        string name;
                        cout << "Введите Имя: ";
                        name = writeNames();
                        system("cls");
                        users[choose].changeName(name);
                    }
                    else
                        if (choose1 == 4) {
                            string name;
                            cout << "Введите Фамилию: ";
                            name = writeNames();
                            system("cls");
                            users[choose].changeS_Name(name);
                        }
                        else
                            if (choose1 == 5) {
                                string name;
                                cout << "Введите Отчество: ";
                                name = writeNames();
                                system("cls");
                                users[choose].changeT_Name(name);
                            }
                            else
                                if (choose1 == 6) {
                                    string Phone;
                                    cout << "Введите телефон: +375(";
                                    Phone = writePhoneNumber();
                                    system("cls");
                                    users[choose].changePhoneNumber(Phone);
                                }
                                else
                                    if (choose1 == 7) {
                                        string Card;
                                        while (true) {
                                            cout << "Введите номер карты: ";
                                            Card = writeCard();
                                            int check = 0;
                                            for (int i = 0; i < nUsers; i++) 
                                                if (Card == users[i].getCard()) {
                                                    check = 1;
                                                    break;
                                                }
                                            system("cls");
                                            if (check == 0) break;
                                        }
                                        users[choose].changeCard(Card);
                                    }
                                    else
                                        if (choose1 == 8) {
                                            int gender = getGender() + 1;
                                            users[choose].changeGander(gender);
                                        }
    }
}

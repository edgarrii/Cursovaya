#pragma once
#include "CursOOP.h"
#include "Proverki.h"

int chooseMainMenu();
int showAdminMenu();
int showMenuAdministration();
int chooseAdminsOrUsers();
int chooseAdmin(Admin*&, int&);
int chooseWhatRedAdmin(Admin*&, int);
int chooseRoot();
int chooseYesOrNot();
int chooseUser(User*&, int&);
int chooseWhatRedUser(User*&, int, int);
int chooseWhoAdd();
int chooseRedCreditsMenu();
int chooseWhatRed(Credits*&, int&, User*&, int&);
int chooseRedCredit(Credits*&, int);
int chooseProcMenu();
string chooseTypeCredit();
string chooseProcent();
int chooseSort();
int chooseHowSort();
int choicYesOrNot(int, string);
int chooseApproved();
int chooseExitOfFill();
int chooseUserMenu();
string chooseYears();
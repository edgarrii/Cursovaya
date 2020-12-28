#pragma once
#include "CursOOP.h"

int openUserMenu(Admin*&, User*&, int&, int&, Credits*&, int&, int);
int openAdminMenu(Admin*&, User*&, int&, int&, int&, Credits*&, int&);
int openMenuAdministration(Admin*&, User*&, int&, int&, int&);
void addOneUser(Admin*&, User*&, int&, int&, int&);
void changeMenuUsers(Admin*&, User*&, int&, int&, int&);
void showUsers(Admin*&, User*&, int&, int&);
void openMenuRedAdmin(Admin*&, User*&, int&, int&, int&);
void openMenuRedUsers(Admin*&, User*&, int&, int&);
void openMenuRedCredit(Credits*&, int&, User*&, int&);
int openMenuRedCredits(Credits*&, int&, User*&, int&);
void showAllCredits(Credits*&, int&, User*&, int&);
void addOneCredit(Credits*&, int&, User*&, int&);
int openProcMenu(Credits*&, int&, User*&, int&);
void openMenuSort(Credits*&, int&, User*&, int&);
void redUser(Admin*&, User*&, int&, int&, int, int);

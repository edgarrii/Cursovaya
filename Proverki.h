#pragma once
#include "CursOOP.h"

void setColor(int, int);
string writeNames();
string writePhoneNumber();
string writeCard();
int getGender();
void changeSizeUsers(User*&, int&);
void changeSizeAdmins(Admin*&, int&);
string writePassword();
void createFiles();
void fillSize(int&, int&, int&);
int fillClasses(Admin*&, User*&, Credits*&, int&, int&, int&, int&);
void fillFiles(Admin*&, User*&, Credits*&, int&, int&, int&);
string writeMoney(int);
void changeSizeCredit(Credits*&, int&);
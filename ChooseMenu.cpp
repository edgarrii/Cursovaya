#include "ChooseMenu.h"

int chooseMainMenu() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 3) % 3;
        if (choose_menu == 0) { setColor(5, 0); cout << " -> Войти в уже существующий аккаунт" << endl; setColor(15, 0); }
        else cout << " Войти в уже существующий аккаунт" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Зарегистрировать новый аккаунт" << endl; setColor(15, 0); }
        else cout << " Зарегистрировать новый аккаунт" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> Завершить программу и выйти" << endl; setColor(15, 0); }
        else { cout << " Завершить программу и выйти" << endl; }

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
        cout << "Здраствуйте, Администратор!" << endl;
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 6) % 6;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Работа с учетными записями" << endl; setColor(15, 0); }
        else cout << " Работа с учетными записями" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Редактирование данных кредитов" << endl; setColor(15, 0); }
        else cout << " Редактирование данных кредитов" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> Просмотр и поиск данных кредитов" << endl; setColor(15, 0); }
        else { cout << " Просмотр и поиск данных кредитов" << endl; }

        if (choose_menu == 3) { setColor(5, 0); cout << " -> Зачислить процент " << endl; setColor(15, 0); }
        else { cout << " Зачислить процент" << endl; }

        if (choose_menu == 4) { setColor(5, 0); cout << " -> Выход в главное меню" << endl; setColor(15, 0); }
        else { cout << " Выход в главное меню" << endl; }

        if (choose_menu == 5) { setColor(5, 0); cout << " -> Выйти из программы" << endl; setColor(15, 0); }
        else { cout << " Выйти из программы" << endl; }

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 6) % 6;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Просмотр учетных записей" << endl; setColor(15, 0); }
        else cout << " Просмотр учетных записей" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Редактирование учетных записей" << endl; setColor(15, 0); }
        else cout << " Редактирование учетных записей" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> Добавление учетной записи" << endl; setColor(15, 0); }
        else { cout << " Добавление учетной записи" << endl; }

        if (choose_menu == 3) { setColor(5, 0); cout << " -> Сохранить информацию" << endl; setColor(15, 0); }
        else { cout << " Сохранить информацию" << endl; }

        if (choose_menu == 4) { setColor(5, 0); cout << " -> Выход в меню администратора" << endl; setColor(15, 0); }
        else { cout << " Выход в меню администратора" << endl; }

        if (choose_menu == 5) { setColor(5, 0); cout << " -> Выйти из программы и сохранить информацию" << endl; setColor(15, 0); }
        else { cout << " Выйти из программы и сохранить информацию" << endl; }

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 3) % 3;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Редактировать администраторов" << endl; setColor(15, 0); }
        else cout << " Редактировать администраторов" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Редактировать пользователей" << endl; setColor(15, 0); }
        else cout << " Редактировать пользователей" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> Выход в меню администратора" << endl; setColor(15, 0); }
        else { cout << " Выход в меню администратора" << endl; }

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
        cout << "Стрелочками ВВЕРХ и ВНИЗ выберите пункт меню" << endl;
        choose_menu = (choose_menu + (nAdmin + 1)) % (nAdmin + 1);

        for (int i = 0; i < nAdmin; i++)
            if (i == choose_menu) { setColor(5, 0); cout << " -> " << i + 1 << " - " << admins[i].getLogin() << endl; setColor(15, 0); }
            else { cout << " " << i + 1 << " - " << admins[i].getLogin() << endl; }

        if (choose_menu == nAdmin) { setColor(5, 0); cout << " -> Выйти с выбора администратора" << endl; setColor(15, 0); }
        else cout << " Выйти с выбора администратора" << endl;

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 4) % 4;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Логин: " << admins[choose].getLogin() << endl; setColor(15, 0); }
        else cout << " Логин: " << admins[choose].getLogin() << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Пароль: " << admins[choose].getPass() << endl; setColor(15, 0); }
        else cout << " Пароль: " << admins[choose].getPass() << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> Права: Администратор" << endl; setColor(15, 0); }
        else { cout << " Права: Администратор" << endl; }

        if (choose_menu == 3) { setColor(5, 0); cout << " -> Выход в меню выбора Администратора" << endl; setColor(15, 0); }
        else { cout << " Выход в меню выбора Администратора" << endl; }

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 3) % 3;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Администратор" << endl; setColor(15, 0); }
        else cout << " Администратор" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Пользователь" << endl; setColor(15, 0); }
        else cout << " Пользователь" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> Выход из меню выбора прав" << endl; setColor(15, 0); }
        else { cout << " Выход из меню выбора прав" << endl; }

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        cout << "Вы уверены что хотите изменить права?" << endl;
        cout << "Тогда данный пользователь исчезнет из меню выбора." << endl;
        choose_menu = (choose_menu + 2) % 2;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Да" << endl; setColor(15, 0); }
        else cout << " Да" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Нет" << endl; setColor(15, 0); }
        else cout << " Нет" << endl;

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + (nUsers + 1)) % (nUsers + 1);

        for (int i = 0; i < nUsers; i++)
            if (i == choose_menu) { setColor(5, 0); cout << " -> " << i + 1 << " - " << users[i].getLogin() << endl; setColor(15, 0); }
            else { cout << " " << i + 1 << " - " << users[i].getLogin() << endl; }

        if (choose_menu == nUsers) { setColor(5, 0); cout << " -> Выйти с выбора пользователя" << endl; setColor(15, 0); }
        else cout << " Выйти с выбора пользователя" << endl;

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 10) % 10;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Логин: " << users[choose].getLogin() << endl; setColor(15, 0); }
        else cout << " Логин: " << users[choose].getLogin() << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Пароль: " << users[choose].getPass() << endl; setColor(15, 0); }
        else cout << " Пароль: " << users[choose].getPass() << endl;

        if (a == 0) {
            if (choose_menu == 2) { setColor(5, 0); cout << " -> Права: Пользователь" << endl; setColor(15, 0); }
            else { cout << " Права: Пользователь" << endl; }
        }

        if (choose_menu == 3) {
            setColor(5, 0);
            if (users[choose].getName().length() != 0) cout << " -> Имя: " << users[choose].getName() << endl;
            else cout << " -> Имя: Нет данных" << endl;
            setColor(15, 0);
        }
        else {
            if (users[choose].getName().length() != 0) cout << " Имя: " << users[choose].getName() << endl;
            else cout << " Имя: Нет данных" << endl;
        }

        if (choose_menu == 4) {
            setColor(5, 0);
            if (users[choose].getS_Name().length() != 0) cout << " -> Фамилия: " << users[choose].getS_Name() << endl;
            else cout << " -> Фамилия: Нет данных" << endl;
            setColor(15, 0);
        }
        else {
            if (users[choose].getS_Name().length() != 0) cout << " Фамилия: " << users[choose].getS_Name() << endl;
            else cout << " Фамилия: Нет данных" << endl;
        }

        if (choose_menu == 5) {
            setColor(5, 0);
            if (users[choose].getT_Name().length() != 0)  cout << " -> Отчество: " << users[choose].getT_Name() << endl;
            else cout << " -> Отчество: Нет данных" << endl;
            setColor(15, 0);
        }
        else {
            if (users[choose].getT_Name().length() != 0)  cout << " Отчество: " << users[choose].getT_Name() << endl;
            else cout << " Отчество: Нет данных" << endl;
        }

        if (choose_menu == 6) {
            setColor(5, 0);
            if (users[choose].getPhoneNumber().length() != 0) cout << " -> Номер телефона: +375" << users[choose].getPhoneNumber() << endl;
            else cout << " -> Номер телефона: Нет данных" << endl;
            setColor(15, 0);
        }
        else {
            if (users[choose].getPhoneNumber().length() != 0) cout << " Номер телефона: +375" << users[choose].getPhoneNumber() << endl;
            else cout << " Номер телефона: Нет данных" << endl;
        }

        if (choose_menu == 7) {
            setColor(5, 0);
            if (users[choose].getCard().length() != 0) cout << " -> Карта: " << users[choose].getCard() << endl;
            else cout << " -> Карта: Нет данных" << endl;
            setColor(15, 0);
        }
        else {
            if (users[choose].getCard().length() != 0) cout << " Карта: " << users[choose].getCard() << endl;
            else cout << " Карта: Нет данных" << endl;
        }

        if (choose_menu == 8) {
            setColor(5, 0);
            if (users[choose].getGander() == 1) cout << " -> Пол: Мужской" << endl;
            else
                if (users[choose].getGander() == 2) cout << " -> Пол: Женский" << endl;
                else cout << " -> Пол: Нет данных" << endl;
            setColor(15, 0);
        }
        else {
            if (users[choose].getGander() == 1) cout << " Пол: Мужской" << endl;
            else
                if (users[choose].getGander() == 2) cout << " Пол: Женский" << endl;
                else cout << " Пол: Нет данных" << endl;
        }

        if (choose_menu == 9) { setColor(5, 0); cout << " -> Выход назад" << endl; setColor(15, 0); }
        else { cout << " Выход назад" << endl; }

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 3) % 3;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Добавить Администратора" << endl; setColor(15, 0); }
        else cout << " Добавить Администратора" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Добавить пользователя" << endl; setColor(15, 0); }
        else cout << " Добавить пользователя" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> Выход в меню Администратора" << endl; setColor(15, 0); }
        else { cout << " Выход в меню Администратора" << endl; }

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 5) % 5;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Редактировать кредиты пользователей" << endl; setColor(15, 0); }
        else cout << " Редактировать кредиты пользователей" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Оформить кредит для пользователя" << endl; setColor(15, 0); }
        else cout << " Оформить кредит для пользователя" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> Просмотр всех кредитов" << endl; setColor(15, 0); }
        else { cout << " Просмотр всех кредитов" << endl; }

        if (choose_menu == 3) { setColor(5, 0); cout << " -> Выход в главное меню" << endl; setColor(15, 0); }
        else { cout << " Выход в главное меню" << endl; }

        if (choose_menu == 4) { setColor(5, 0); cout << " -> Завершить программу и выйти" << endl; setColor(15, 0); }
        else { cout << " Завершить программу и выйти" << endl; }

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + (nCredit + 1)) % (nCredit + 1);

        for (int i = 0; i < nCredit; i++)
            if (i == choose_menu) {
                int ij = 0;
                setColor(5, 0);
                for (int j = 0; j < nUsers; j++)
                    if (users[j].getRoot() == credit[i].getRoot()) { ij = j; break; }
                cout << " -> " << i + 1 << " - " << users[ij].getLogin() << ". Кредит: " << credit[i].getTypeCredit() << "; Дата: " << credit[i].getCreditDate() << endl;
                setColor(15, 0);
            }
            else {
                int ij = 0;
                for (int j = 0; j < nUsers; j++)
                    if (users[j].getRoot() == credit[i].getRoot()) { ij = j; break; }
                cout << " " << i + 1 << " - " << users[ij].getLogin() << ". Кредит: " << credit[i].getTypeCredit() << "; Дата: " << credit[i].getCreditDate() << endl;
            }

        if (choose_menu == nCredit) { setColor(5, 0); cout << " -> Выйти с выбора" << endl; setColor(15, 0); }
        else cout << " Выйти с выбора" << endl;

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 7) % 7;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Тип кредита: " << credit[choose].getTypeCredit() << endl; setColor(15, 0); }
        else cout << " Тип кредита: " << credit[choose].getTypeCredit() << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Долг: " << credit[choose].getCreditMoney() << endl; setColor(15, 0); }
        else cout << " Долг: " << credit[choose].getCreditMoney() << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> Процент: " << credit[choose].getProcent() << endl; setColor(15, 0); }
        else cout << " Процент: " << credit[choose].getProcent() << endl;

        if (choose_menu == 3) { setColor(5, 0); cout << " -> Кредит на: " << credit[choose].getYears() << " лет." << endl; setColor(15, 0); }
        else cout << " Кредит на: " << credit[choose].getYears() << " лет." << endl;

        if (choose_menu == 4) { 
            setColor(5, 0); 
            string s;
            if (credit[choose].getApproved() == 0) s = "Не одоборен";
            else
                if (credit[choose].getApproved() == 1) s = "Одобрен";
            cout << " -> Одобрен: " << s << endl; 
            setColor(15, 0); 
        }
        else {
            string s;
            if (credit[choose].getApproved() == 0) s = "Не одоборен";
            else
                if (credit[choose].getApproved() == 1) s = "Одобрен";
            cout << " Одобрен: " << s << endl;
        }

        if (choose_menu == 5) { setColor(5, 0); cout << " -> Удалить кредит " << endl; setColor(15, 0); }
        else cout << " Удалить кредит" << endl;

        if (choose_menu == 6) { setColor(5, 0); cout << " -> Вернуться в меню выбора " << endl; setColor(15, 0); }
        else cout << " Вернуться в меню выбора " << endl;

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 2) % 2;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Одобрен " << endl; setColor(15, 0); }
        else cout << " Одобрен " << endl;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Не одобрен " << endl; setColor(15, 0); }
        else cout << " Не одобрен " << endl;

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 4) % 4;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Потребительский " << endl; setColor(15, 0); }
        else cout << " Потребительский" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Льготный кредит " << endl; setColor(15, 0); }
        else cout << " Льготный кредит" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> На недвижимость" << endl; setColor(15, 0); }
        else cout << " На недвижимость" << endl;

        if (choose_menu == 3) { setColor(5, 0); cout << " -> Лизинг" << endl; setColor(15, 0); }
        else cout << " Лизинг" << endl;

        keyboard_button = _getch();
        if (keyboard_button == 224) {
            keyboard_button = _getch();
            if (keyboard_button == 72) choose_menu--;
            if (keyboard_button == 80) choose_menu++;
        }
        if (keyboard_button == 13) { 
            system("cls"); 
            if (choose_menu == 0) return "Потребительский";
            else
                if (choose_menu == 1) return "Льготный кредит";
                else
                    if (choose_menu == 2) return "На недвижимость";
                    else
                        if (choose_menu == 3) return "Лизинг";
        }
        system("cls");
    }
}

string chooseProcent() {
    int choose_menu = 0, keyboard_button = 0;
    while (true) {
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 3) % 3;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Ставка 7% " << endl; setColor(15, 0); }
        else cout << " Ставка 7% " << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Ставка 10% " << endl; setColor(15, 0); }
        else cout << " Ставка 10% " << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> Ставка 14% " << endl; setColor(15, 0); }
        else cout << " Ставка 14% " << endl;

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 4) % 4;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> 5 лет. " << endl; setColor(15, 0); }
        else cout << " 5 лет. " << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> 10 лет. " << endl; setColor(15, 0); }
        else cout << " 10 лет. " << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> 15 лет. " << endl; setColor(15, 0); }
        else cout << " 15 лет. " << endl;

        if (choose_menu == 3) { setColor(5, 0); cout << " -> 20 лет. " << endl; setColor(15, 0); }
        else cout << " 20 лет. " << endl;

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 5) % 5;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Просмотр всех кредитов" << endl; setColor(15, 0); }
        else cout << " Просмотр всех кредитов" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Поиск всех кредитов пользователя" << endl; setColor(15, 0); }
        else cout << " Поиск всех кредитов пользователя" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> Сортровать кредиты по критериям" << endl; setColor(15, 0); }
        else { cout << " Сортровать кредиты по критериям" << endl; }

        if (choose_menu == 3) { setColor(5, 0); cout << " -> Выход в главное меню" << endl; setColor(15, 0); }
        else { cout << " Выход в главное меню" << endl; }

        if (choose_menu == 4) { setColor(5, 0); cout << " -> Завершить программу и выйти" << endl; setColor(15, 0); }
        else { cout << " Завершить программу и выйти" << endl; }

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 3) % 3;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Сортировать по типу кредита" << endl; setColor(15, 0); }
        else cout << " Сортировать по типу кредита" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Сортировать по долгу" << endl; setColor(15, 0); }
        else cout << " Сортировать по долгу" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> Выход в меню" << endl; setColor(15, 0); }
        else { cout << " Выход в меню" << endl; }

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 2) % 2;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Сортировать по возрастанию" << endl; setColor(15, 0); }
        else cout << " Сортировать по возрастанию" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Сортировать по убыванию" << endl; setColor(15, 0); }
        else cout << " Сортировать по убыванию" << endl;

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
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        cout << "Кредит в: " << a << "руб. Под " << c << endl;
        cout << "Вы уверены, что хотите оформить кредит?" << endl;
        choose_menu = (choose_menu + 2) % 2;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Да" << endl; setColor(15, 0); }
        else cout << " Да" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Нет" << endl; setColor(15, 0); }
        else cout << " Нет" << endl;

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
        cout << "Здраствуйте, Пользователь!" << endl;
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        cout << "Чтобы взять кредит в нашем банке вы должны предоставить нам свои персональные данные." << endl;
        cout << "Если вы хотите оформить кредит, то перейдите к пункту заполнения аккаунта." << endl;
        choose_menu = (choose_menu + 2) % 2;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Заполнить аккаунт" << endl; setColor(15, 0); }
        else cout << " Заполнить аккаунт" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Выход в главное меню" << endl; setColor(15, 0); }
        else cout << " Выход в главное меню" << endl;

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
        cout << "Здраствуйте, Пользователь!" << endl;
        cout << "Используя клавиши Up и Down выберите необходимый пункт меню:" << endl;
        choose_menu = (choose_menu + 6) % 6;

        if (choose_menu == 0) { setColor(5, 0); cout << " -> Оформить кредит" << endl; setColor(15, 0); }
        else cout << " Оформить кредит" << endl;

        if (choose_menu == 1) { setColor(5, 0); cout << " -> Просмотр моих кредитов" << endl; setColor(15, 0); }
        else cout << " Просмотр моих кредитов" << endl;

        if (choose_menu == 2) { setColor(5, 0); cout << " -> Просмотр информации об аккаунте" << endl; setColor(15, 0); }
        else { cout << " Просмотр информации об аккаунте" << endl; }

        if (choose_menu == 3) { setColor(5, 0); cout << " -> Редактирование данных аккаунта" << endl; setColor(15, 0); }
        else { cout << " Редактирование данных аккаунта" << endl; }

        if (choose_menu == 4) { setColor(5, 0); cout << " -> Выход в главное меню" << endl; setColor(15, 0); }
        else { cout << " Выход в главное меню" << endl; }

        if (choose_menu == 5) { setColor(5, 0); cout << " -> Выйти из программы" << endl; setColor(15, 0); }
        else { cout << " Выйти из программы" << endl; }

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

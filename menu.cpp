#include "menu.h"
#include <iostream>
void menu(bookshop *list) //из мейна передаем список (тип данных материал)
{
    while (true) //бесконечный цикл, чтобы меню постоянно отображалось
    {
        cout << "1. Открыть файл " << endl
             << "2. Сохранить файл " << endl
             << "3. Вывести на экран " << endl
             << "4. О программе " << endl
             << "5. Выход " << endl;
        cout << "Введите номер действия: ";
        int vm;
        cin >> vm; //ввод числа в меню
        switch (vm) //выбор действия
        {
        case 1:
            readFile("bookshop.db", list);
            system ("pause");
            system ("cls");
            break;
        case 2:
            writeFile(list);
            break;
        case 3:
            show(list);
            break;
        case 4:
            about();
            break;
        case 5:
            exit(EXIT_SUCCESS);
        default:
            cerr << "Ошибка в выборе действия!!!" << endl;
        }

    }
}

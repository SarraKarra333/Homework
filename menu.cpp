#include "menu.h"
#include <iostream>
void menu(bookshop *list) //�� ����� �������� ������ ������
{
    while (true) //����������� ����, ����� ���� ��������� ������������
    {
        cout << "1. ������� ���� " << endl
             << "2. ��������� ���� " << endl
             << "3. ������� �� ����� " << endl
             << "4. � ��������� " << endl
             << "5. ����� " << endl;
        cout << "������� ����� ��������: ";
        char vm;
        cin >> vm; //���� ����� � ����
        switch (vm) //����� ��������
        {
        case '1':
            readFile("bookshop.db", list);
            system ("pause");
            system ("cls");
            break;
        case '2':
            writeFile(list);
            break;
        case '3':
            show(list);
            break;
        case '4':
            about();
            break;
        case '5':
            exit(EXIT_SUCCESS);
        default:
            cerr << "������ � ������ ��������!!!" << endl;
            cout.flush();
        }

    }
}

#include "menu.h"
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    autoshop *list = new autoshop[N];
    menu(list);
    return 0;
}

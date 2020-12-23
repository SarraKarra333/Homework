#include "menu.h"
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    bookshop *list=new bookshop[N];
    menu(list);
    return 0;
}

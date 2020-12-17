#include "rwfunc.h"
#include <fstream>
#include <iostream>

void readFile(const string &FileName, bookshop *list)
{
    ifstream file(FileName);
    if (!file)
    {
        cerr << "Ошибка в открытии файла!" << endl;
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            file >> list[i].id;
            file.ignore(1);
            getline(file, list[i].author, ';');
            getline(file, list[i].name, ';');
            file >> list[i].year;
            file.ignore(1);
            getline(file, list[i].isbn, ';') ;
            file >> list[i].price;
            file.ignore(1);
        }
        cout << "Данные считаны" << endl;
    }
    file.close();
}

void writeFile(bookshop *list)
{
    string FileName;
    cout << "Введите название файла: " ;
    cin >> FileName;
    ofstream file(FileName);
    if (!file)
    {
        cerr << "Ошибка в открытии файла!" << endl;
        return;
    }

    for (int i = 0; i < N; i++)
    {
        file << list[i].id << ';';
        file << list[i].author << ';';
        file << list[i].name << ';';
        file << list[i].year << ';';
        file << list[i].isbn << ';';
        file << list[i].price << ';';
        file << endl;
    }
    file.close();
}

void show(bookshop *list)
{
    for (int i = 0; i < N; i++)
    {
        cout << list[i].id << " "
             << list[i].author << " "
             << list[i].name << " "
             << list[i].year << " "
             << list[i].isbn << " "
             << list[i].price << " "
             << endl;
    }
}

void about()
{
    cout << "Макарова Мария Александровна\n2-5 15.12.2020" << endl;

}

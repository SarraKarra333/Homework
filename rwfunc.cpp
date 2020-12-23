#include "rwfunc.h"
#include <fstream>  //подклчаем заголовочный файл для чтения-записи
#include <iostream> //подклчаем заголовочный файл для ввода-вывода

void readFile(const string &FileName, bookshop *list)
{
    ifstream file(FileName);  //открываем файл в конструкторе
    if (!file.is_open())    //проверка открытия файла логическим выражением
    {
        cerr << "Ошибка в открытии файла!" << endl;  //вывод ошибки
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
    file.close();   //открытый файл должен быть закрыт
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

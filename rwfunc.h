#include <string> //подключение файла из стандартного каталога
using namespace std; //пространство имен для паботы с строками
struct bookshop  //создание шаблона структуры
{
    int id;
    string author;
    string name;
    int year;
    string isbn;
    double price;
};
const int N = 10;  //N=количество позиций магазина

void readFile(const string &FileName, bookshop* list); //протатипы функций
void writeFile(bookshop* list);
void show(bookshop *list);
void about();


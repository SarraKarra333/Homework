#include <string>
using namespace std;
struct bookshop
{
    int id;
    string author;
    string name;
    int year;
    string isbn;
    double price;
};
const int N = 10;

void readFile(const string &FileName, bookshop* list);
void writeFile(bookshop* list);
void show(bookshop *list);
void about();


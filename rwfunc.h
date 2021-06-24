#include <string>
using namespace std;
struct autoshop
{
    int id;
    int engine;
    int carcaseNum;
    string car;
    int capacity;
    char classOfTheCar;
    string typeOfCarcase;
    int price;
};
void RE_WRITE(const char &FileName);
const int N = 100;
void readFile(const string &FileName, autoshop* list);
//autoshop* recreationOfArray(const string &FileName, autoshop *list);
void create_note_db(const string &FileName, autoshop *list);
void deleteNote(const string &FileName, autoshop* list);
void createFile(autoshop* list);
void show(autoshop *list);
void about();

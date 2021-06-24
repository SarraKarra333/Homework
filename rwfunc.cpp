#include "menu.h"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

bool FileIsOpen = false;

int amountOfElements = 0;

void RE_WRITE(const string &FileName) {
    ifstream fs(FileName);
    string ss;
    stringstream buffer;
    buffer << fs.rdbuf();
    ss = buffer.str();
    fs.close();
    ofstream ft(FileName);
    ss.pop_back();
    ft << ss;
    ft.close();
    return;
}

//autoshop* recreationOfArray(const string &FileName, autoshop *list) {
//    ifstream file(FileName);
//    free(list); // удаляем массив из памяти
//    autoshop *newList=new autoshop[N + amountOfNew];
//    for (int i = 0; i < N + amountOfNew; i++)
//    {
//       if (!file.eof()) {
//        file >> newList[i].id;
//        file.ignore(1);
//        file >> newList[i].engine;
//        file.ignore(1);
//        file >> newList[i].carcaseNum;
//        file.ignore(1);
//        getline(file, newList[i].car, ';');
//        file >> newList[i].capacity;
//        file.ignore(1);
//        file >> newList[i].classOfTheCar;
//        file.ignore(1);
//        getline(file, newList[i].typeOfCarcase, ';');
//        file >> newList[i].price;
//       }
//       else
//           cerr << "File was not open!";
//    }
//    return newList;
//}

void readFile(const string &FileName, autoshop *list)
{
    int i = 0;
    ifstream file(FileName);
    if (file.is_open())
    {
           while(!file.eof()) {
            file >> list[i].id;
            file.ignore(1);
            file >> list[i].engine;
            file.ignore(1);
            file >> list[i].carcaseNum;
            file.ignore(1);
            getline(file, list[i].car, ';');
            file >> list[i].capacity;
            file.ignore(1);
            file >> list[i].classOfTheCar;
            file.ignore(1);
            getline(file, list[i].typeOfCarcase, ';');
            file >> list[i].price;
            i++;
           }
           FileIsOpen = true;

        }
    else
    {
        FileIsOpen = false;
        cerr << "File is not open!" << endl;
        return;
    }
    amountOfElements = i;
    file.close();
}

void createFile(autoshop *list)
{
    if (!FileIsOpen) {
        cerr << "File wasn't open. Please, open the file." << endl;
        system("pause");
        return;
    }
    string FileName;
    cout << "Enter the name of the new file: " ;
    cin >> FileName;
    ofstream file(FileName);
    if (!file)
    {
        cerr << "Failed!" << endl;
        return;
    }
    else
        printf("\n__File was created!__\n\n");

    for (int i = 0; i < amountOfElements; i++)
    {
        file << list[i].id << ';'
        << list[i].engine << ';'
        << list[i].carcaseNum << ';'
        << list[i].car << ';'
        << list[i].capacity << ';'
        << list[i].classOfTheCar << ';'
        << list[i].typeOfCarcase << ';'
        << list[i].price
        << endl;
    }
    file.close();

}

void show(autoshop *list)
{
    if (!FileIsOpen) {
        cerr << "File wasn't open. Please, open the file." << endl;
        system("pause");
        return;
    }
    for (int i = 0; i < amountOfElements; i++)
    {
        cout << list[i].id << " "
             << list[i].engine << " "
             << list[i].carcaseNum << " "
             << list[i].car << " "
             << list[i].capacity << " "
             << list[i].classOfTheCar << " "
             << list[i].typeOfCarcase << " "
             << list[i].price <<
             endl;
    }
   cout << endl;
}

void create_note_db(const string &FileName, autoshop *list)
{
    if (!FileIsOpen) {
        cerr << "File wasn't open. Please, open the file." << endl;
        system("pause");
        return;
    }
    ofstream file(FileName, std::ios::app);
    cout << "Please, enter the string in this format: id;engine;carcaseNumber;Name of the car;Capacity;class of the car;type of the carcase;price"
         << endl;
    string newInfo;
    cin >> newInfo;
    file << endl << newInfo;
    file.close();
    amountOfElements++;
    readFile("autoshop.db", list);
}

void deleteNote(const string &FileName, autoshop *list) {
    if (!FileIsOpen) {
        cerr << "File wasn't open. Please, open the file." << endl;
        system("pause");
        return;
    }
    ofstream file(FileName);
    cout << "Enter the id of the element you want to delete: ";
    int n;
    cin >> n;

    for (int i = 0; i < amountOfElements; i++)
    {
        if (!(n == list[i].id)) {
            file << list[i].id << ';'
            << list[i].engine << ';'
            << list[i].carcaseNum << ';'
            << list[i].car << ';'
            << list[i].capacity << ';'
            << list[i].classOfTheCar << ';'
            << list[i].typeOfCarcase << ';'
            << list[i].price << endl;
        }
    }
    amountOfElements--;
    RE_WRITE("autoshop.db");
    readFile("autoshop.db", list);
}



void about()
{
    cout << "This program was made by Ilya Klepikov \nGroup: IEUIS 2-5" << endl << endl;

}

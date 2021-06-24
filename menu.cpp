#include "menu.h"
#include <iostream>


void menu(autoshop *list)
{
    while (true) {
        cout << "1. Open the File" << endl
             << "2. Write in the file (New File)" << endl
             << "3. Show the list" << endl
             << "4. About" << endl
             << "5. Create a note" << endl
             << "6. Delete the note" << endl
             << "7. Exit" << endl << endl;

        cout << "Enter the number: ";
        int vm;
        cin >> vm;
        switch (vm)
        {
        case 1:
            readFile("autoshop.db", list);
            cout << endl << "File was opened!" << endl;
            system("pause");
            system ("cls");
            break;
        case 2:
            createFile(list);
            system("pause");
            system ("cls");
            break;
        case 3:
            show(list);
            system("pause");
            system ("cls");
            break;
        case 4:
            about();
            system("pause");
            system ("cls");
            break;
        case 5:
            create_note_db("autoshop.db", list);
            system("pause");
            system ("cls");

            break;
        case 6:
            deleteNote("autoshop.db", list);
            system("pause");
            system ("cls");
            break;
        case 7:
            exit(EXIT_SUCCESS);
        default:
            cerr << "Enter the valid number of the function you want to use!" << endl;
            cout.flush();
        }
    }
}



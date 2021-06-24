#include "backlightedMIDI.h"
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Midi newMIDI;
    cout << endl << newMIDI << endl;

    cout << endl << "_-_-_-_-_-_-_-_-_-_-_-_-_-_-" << endl << endl;

    backlightedMIDI newBLMIDI;
    cout << newBLMIDI << endl;
    Midi casio2;
    casio2.setName("Fender");
    cout << casio2.getName();
    Midi nMidi("sS", "body", 3);
    cout << nMidi;
    cout << newBLMIDI.getBody();

    Midi hMidi(nMidi);

    cout << endl << hMidi;
    return 0;
}

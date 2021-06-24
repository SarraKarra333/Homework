#include "midi.h"
#include <iostream>
using namespace std;

Midi::Midi() : Name("Casio"),
               Body("Classic"),
               NumOfKeys(88)
{ }

Midi::Midi(const string nName,
           const string nBody,
           const int nNumOfKeys) :
    Name(nName),
    Body(nBody),
    NumOfKeys(nNumOfKeys)
{ }

Midi::Midi(const Midi &rhs) :
    Name(rhs.Name),
    Body(rhs.Body),
    NumOfKeys(rhs.NumOfKeys)
{ }

Midi &Midi::operator=(const Midi &rhs) {
    if(this == &rhs) return *this;

    Name = rhs.Name;
    Body = rhs.Body;
    NumOfKeys = rhs.NumOfKeys;
    return *this;
}

Midi::~Midi()
{ }

ostream& operator<<(ostream &stream, const Midi &item) {
    stream << "Name of the MIDI: " << item.Name << '\n'
           << "Type of the body: " << item.Body << " \n"
           << "Number of keys: " << item.NumOfKeys << endl;
    return stream;
}

void Midi::setName(const string &nName) {
    Name = nName;
}

string Midi::getName() const {
    return Name;
}

void Midi::setBody(const string &nBody) {
    Body = nBody;
}

string Midi::getBody() const {
    return Body;
}

void Midi::setNumOfKeys(const int &nNumOfKeys) {
    NumOfKeys = nNumOfKeys;
}

int Midi::getNumOfKeys() const {
    return NumOfKeys;
}

#include "backlightedMIDI.h"
#include <iostream>
using namespace std;

backlightedMIDI::backlightedMIDI() : Midi(), Backlighting (true)
{ }

backlightedMIDI::backlightedMIDI(const string nName,
                                 const string nBody,
                                 const int nNumOfKeys,
                                 const bool nBacklighting) :
    Midi(nName, nBody, nNumOfKeys)
  , Backlighting(nBacklighting)
{ }

backlightedMIDI::backlightedMIDI(const backlightedMIDI &rhs) :
    Midi(rhs),
    Backlighting(rhs.Backlighting)
{ }

backlightedMIDI &backlightedMIDI::operator=(const backlightedMIDI &rhs) {
    if(this == &rhs) return *this;

    Midi::operator=(rhs);
    Backlighting = rhs.Backlighting;
    return *this;
}

backlightedMIDI::~backlightedMIDI()
{ }

ostream& operator<<(ostream& stream, const backlightedMIDI& item) {
    string hasBackligting;
    if (item.Backlighting)
        hasBackligting = "Yes";
    else hasBackligting = "No";
    stream << "Name of the MIDI: " << item.getName() << endl
           << "Has backligting: " << hasBackligting << endl
           << "Type of the body: " << item.getBody() << endl
           << "Number of keys: " << item.getNumOfKeys() << endl;
    return stream;
}

void backlightedMIDI::setBacklighting(const int &nBacklighting) {
    Backlighting = nBacklighting;
}

int backlightedMIDI::getBacklighting() const {
    return Backlighting;
}




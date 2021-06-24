#include "midi.h"
using namespace std;

class backlightedMIDI : public Midi
{
public:
    backlightedMIDI();

    backlightedMIDI(const string Name,
                    const string Body,
                    const int NumOfKeys,
                    const bool Backlighting
                    );

    backlightedMIDI(const backlightedMIDI& rhs);

    backlightedMIDI& operator=(const backlightedMIDI& rhs);

    ~backlightedMIDI();

    friend ostream& operator<<(ostream& stream, const backlightedMIDI& item);

    void setBacklighting(const int& Backlighting);
    int getBacklighting() const;

private:
    bool Backlighting;
};


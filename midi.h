#include <string>
using namespace std;

class Midi
{
public:

    Midi();

    Midi(const string Name,
         const string Body,
         const int NumOfKeys
         );

    Midi(const Midi& rhs);

    Midi& operator=(const Midi& rhs);

    ~Midi();

    friend ostream& operator<<(ostream& stream, const Midi& item);

    void setName(const string& Name);
    string getName() const;

    void setBody(const string& Body);
    string getBody() const;

    void setNumOfKeys(const int& NumOfKeys);
    int getNumOfKeys() const;

private:
    string Name;
    string Body;
    int NumOfKeys;
};

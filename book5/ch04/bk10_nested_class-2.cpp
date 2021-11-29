#include <iostream>

using namespace std;

class EthicalCompetition
{
private:
    class Connection;
public:
    void HardWork();
};

class EthicalCompetition::Connection
{
protected:
    friend class EthicalCompetition;
    void Connect();
    Connection() {}
    ~Connection() {}
};

void EthicalCompetition::HardWork()
{
    Connection c;
    c.Connect();
    cout << "Connected" << endl;
}

void EthicalCompetition::Connection::Connect()
{
    cout << "Connecting..." << endl;
}

int main()
{
    EthicalCompetition comp;
    comp.HardWork();

    // Error - 'Connection' is a private member of 'EthicalCompetition'.
    // Error - Calling a protected constructor
    // of class EthicalCompetition::Connection'.
    // Error - Variable of type 'EthicalCompetition::Connection'
    // has protected destructor.
    EthicalCompetition::Connection conn;

    return 0;
}

//

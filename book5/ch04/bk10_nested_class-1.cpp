#include <iostream>

using namespace std;

class EthicalCompetition
{
private:
    class Connection
    {
    public:
        void Connect();
    };
public:
    void HardWork();
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
    EthicalCompetition::Connection conn;

    return 0;
}

// 

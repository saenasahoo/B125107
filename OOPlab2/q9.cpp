#include <iostream>
#include <string>
using namespace std;

class CricketPlayer
{ public:
    string playerName;
    int matchesPlayed;
    int totalRuns;
    float battingAverage;

//enter player details
    void input()
    {
        
        cout << "Enter Player Name: "<<endl;
        cin>> playerName;

        cout << "Enter Matches Played: "<<endl;
        cin >> matchesPlayed;

        cout << "Enter Total Runs: "<<endl;
        cin >> totalRuns;
    }

    void calculateAverage()
    {
        battingAverage = (float)totalRuns / matchesPlayed;
    }
//display player report
    void display()
    {
        cout << "Player Report"<<endl;
        cout << "Player Name : " << playerName << endl;
        cout << "Matches Played : " << matchesPlayed << endl;
        cout << "Total Runs : " << totalRuns << endl;
        cout << "Batting Average : " << battingAverage << endl;

        if (battingAverage >= 50)
            cout << "Performance : Excellent"<<endl;
        else if (battingAverage >= 35)
            cout << "Performance : Good"<<endl;
        else if (battingAverage >= 20)
            cout << "Performance : Average"<<endl;
        else
            cout << "Performance : Poor"<<endl;
    }
};

int main()
{
    CricketPlayer p;//object

    p.input();
    p.calculateAverage();
    p.display();

    return 0;
}
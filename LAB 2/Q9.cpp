//9. Cricket Score Analyzer
#include <iostream>
#include <string>

using namespace std;

class CricketPlayer {
public:
    string name;
    int matchesPlayed;
    double totalRunsScored;

    void acceptDetails() {
        cout << "Enter player's name: ";
        getline(cin, name);
        cout << "Enter matches played: ";
        cin >> matchesPlayed;
        cout << "Enter total runs scored: ";
        cin >> totalRunsScored;
    }

    double calculateAverage() {
        if (matchesPlayed == 0) {
            return 0.0;
        }
        return totalRunsScored / matchesPlayed;
    }

    string classifyPlayer() {
        double avg = calculateAverage();
        if (avg >= 50) {
            return "excellent";
        } else if (avg >= 35 && avg <= 49.99) {
            return "good";
        } else if (avg >= 20 && avg <= 34.99) {
            return "Average";
        } else {
            return "poor";
        }
    }

    void displayPerformance() {
        double average = calculateAverage();
        string classification = classifyPlayer();

        cout << "\n\n====================================\n";
        cout << "PLAYER REPORT FOR " << name << ":" << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Total Runs Scored: " << totalRunsScored << endl;
        cout << "Batting Average: " << average << endl;
        cout << "Classification: " << classification << endl;
        cout << "====================================\n";
    }
};

int main() {
    CricketPlayer player1;
    player1.acceptDetails();
    player1.displayPerformance();
    return 0;
}

//6. Time Addition
#include <iostream>

using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    void inputTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
    }

    static Time addTimes(const Time& t1, const Time& t2) {
        Time result;
        int totalMinutes = t1.minutes + t2.minutes;
        int carryHours = totalMinutes / 60;
        result.minutes = totalMinutes % 60;

        int totalHours = t1.hours + t2.hours + carryHours;
        result.hours = totalHours % 24;

        return result;
    }

    void displayTime() {
        cout << hours << " hours and " << minutes << " minutes";
    }
};

int main() {
    Time time1;
    time1.inputTime();

    Time time2;
    cout << "\n--- Entering second time ---" << endl;
    time2.inputTime();

    Time sumTime = Time::addTimes(time1, time2);

    cout << "\nThe total time is: ";
    sumTime.displayTime();
    cout << endl;

    return 0;
}

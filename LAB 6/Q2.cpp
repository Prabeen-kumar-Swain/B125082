#include <iostream>
using namespace std;

class Time{
    int hours;
    int minutes;

public: 
    Time(int h, int m){
        hours = h;
        minutes = m;
    }

    void displayTime(){
        cout << "Time: " << hours << " hours and " << minutes << " minutes" << endl;
    }

    friend Time operator + (Time t1, Time t2);
};

Time operator + (Time t1, Time t2){
    int newMinutes = t1.minutes + t2.minutes;
    int newHours = t1.hours + t2.hours + newMinutes / 60;
    newMinutes = newMinutes % 60;
    return Time(newHours, newMinutes);
}

int main(){
    Time t1(2, 45);
    Time t2(1, 30);
    Time t3 = t1 + t2; 

    t1.displayTime();
    t2.displayTime();
    t3.displayTime();

    return 0;
}
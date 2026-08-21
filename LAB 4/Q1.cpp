//1. Weather Report– Friend Function
#include <iostream>
using namespace std;

class Weather {
    string City;
    string weather;
    float temp;

public:
    void input() {
        cout << "City Name: ";
        getline(cin, City);
        cout << "Temperature: ";
        cin >> temp;
        cin.ignore();
        if(temp > 35){
            weather = "Very Hot";
        }else if(temp >= 20 && temp <= 35){
            weather = "Pleasant";
        }else if(temp < 20){
            weather = "Cool";
        }

    }

    friend void Weather_report(Weather w);
};

void Weather_report(Weather w) {
    cout << "\n----------------------------------------------\n";
    cout << "                  Weather Report";
    cout << "\n----------------------------------------------\n";
    cout << "\nCity Name: " << w.City;
    cout << "\nTemperature: " << w.temp;
    cout << "\nWeather Condition: " << w.weather;
}

int main() {
    Weather w;
    w.input();
    Weather_report(w) ;
    return 0;
}

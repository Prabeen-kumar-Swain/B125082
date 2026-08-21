//4. Electricity Usage Alert– Friend Function
#include <iostream>
using namespace std;

class ElectricMeter {
    int meter, units;
    string name;

public:
    void input() {
        cout << "Meter Number: ";
        cin >> meter;
        cout << "Consumer Name: ";
        cin >> name;
        cout << "Units Consumed: ";
        cin >> units;
    }

    friend void checkUsage(ElectricMeter e);
};

void checkUsage(ElectricMeter e) {
    cout << "\nMeter Number: " << e.meter;
    cout << "\nConsumer: " << e.name;
    cout << "\nUnits: " << e.units;

    if (e.units < 100)
        cout << "\nUsage: Low Usage";
    else if (e.units <= 300)
        cout << "\nUsage: Moderate Usage";
    else
        cout << "\nUsage: High Usage";
}

int main() {
    ElectricMeter e;
    e.input();
    checkUsage(e);
}

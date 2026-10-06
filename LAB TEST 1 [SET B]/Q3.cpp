#include <iostream>
using namespace std;

class SensorGrid {
    int n;
    float *temperature;

public:
    SensorGrid(int size) {      // parameterized constructor
        n = size;
        temperature = new float[n];
    }

    void enterReadings() {
        cout << "Enter temperature readings:\n";

        for (int i = 0; i < n; i++) {
            cin >> temperature[i];
        }
    }

    void display() {
        cout << "Temperature readings: ";

        for (int i = 0; i < n; i++) {
            cout << temperature[i] << " ";
        }

        cout << endl;
    }

    void replaceReading(int position, float value) {
        if (position >= 0 && position < n) {
            temperature[position] = value;
        } else {
            cout << "Invalid position.\n";
        }
    }

    float average() {
        float sum = 0;

        for (int i = 0; i < n; i++)
            sum += temperature[i];

        return sum / n;
    }

    friend void compareAverage(SensorGrid &, SensorGrid &);

    ~SensorGrid() {            
        delete[] temperature;
    }
};

void compareAverage(SensorGrid &s1, SensorGrid &s2) {

    float avg1 = s1.average();
    float avg2 = s2.average();

    cout << "Average of Grid 1: " << avg1 << endl;
    cout << "Average of Grid 2: " << avg2 << endl;

    if (avg1 > avg2)
        cout << "Grid 1 has greater average temperature.\n";

    else if (avg2 > avg1)
        cout << "Grid 2 has greater average temperature.\n";

    else
        cout << "Both grids have the same average temperature.\n";
}

int main() {

    int n1, n2;

    cout << "Enter number of readings for Grid 1: ";
    cin >> n1;

    SensorGrid *g1 = new SensorGrid(n1);

    g1->enterReadings();

    cout << "Enter number of readings for Grid 2: ";
    cin >> n2;

    SensorGrid *g2 = new SensorGrid(n2);

    g2->enterReadings();

    cout << "\nGrid 1:\n";
    g1->display();

    cout << "Grid 2:\n";
    g2->display();

    
    int position;
    float value;

    cout << "\nEnter position and new Tempreture for Grid 1: ";
    cin >> position >> value;

    g1->replaceReading(position, value);

    cout << "\nAfter replacement:\n";
    g1->display();

    compareAverage(*g1, *g2);

    delete g1;
    delete g2;
    g1 = nullptr;
    g2 = nullptr;

    return 0;
}
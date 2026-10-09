#include <iostream>
using namespace std;

class Date {
    int day, month, year;

public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    bool operator==(Date d) {
        return day == d.day && month == d.month &&
               year == d.year;
    }

    bool operator!=(Date d) {
        return !(day == d.day && month == d.month &&
               year == d.year);
    }
};

int main() {
    Date d1(9, 10, 2026), d2(9, 10, 2026);
    Date d3(10, 10, 2026);

    cout << "d1 == d2: " << (d1 == d2) << endl;
    cout << "d1 != d3: " << (d1 != d3) << endl;

    return 0;
}
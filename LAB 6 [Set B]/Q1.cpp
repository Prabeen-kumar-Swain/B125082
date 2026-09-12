#include <iostream>
using namespace std;

class ParkingFloor {
    int floorNo;
    int slots;
    int *occupied;

public:
    ParkingFloor(int f, int s) {     // parameterized constructor
        floorNo = f;
        slots = s;

        occupied = new int[slots];

        for (int i = 0; i < slots; i++)
            occupied[i] = 0;
    }

    void reserve(int pos) {          // function overloading for reserving a single slot
        if (pos >= 0 && pos < slots) {
            if (occupied[pos] == 0) {
                occupied[pos] = 1;
                cout << "Slot " << pos << " reserved.\n";
            } else {
                cout << "Slot already occupied.\n";
            }
        } else {
            cout << "Invalid slot.\n";
        }
    }

    void reserve(int start, int count) {         // function overloading for reserving multiple consecutive slots
        if (start < 0 || start + count > slots) {
            cout << "Invalid slot range.\n";
            return;
        }

        for (int i = start; i < start + count; i++) {
            if (occupied[i] == 1) {
                cout << "Some slots are already occupied.\n";
                return;
            }
        }

        for (int i = start; i < start + count; i++)
            occupied[i] = 1;

        cout << count << " consecutive slots reserved.\n";
    }

    void display() {
        cout << "Floor " << floorNo << ": ";

        for (int i = 0; i < slots; i++)
            cout << occupied[i] << " ";

        cout << endl;
    }

    ~ParkingFloor() {
        delete[] occupied;
    }
};

int main() {
    int n;

    cout << "Enter number of floors: ";
    cin >> n;

    ParkingFloor **floors = new ParkingFloor*[n];

    for (int i = 0; i < n; i++) {
        int floorNo, slots;

        cout << "Enter floor number and slots: ";
        cin >> floorNo >> slots;

        floors[i] = new ParkingFloor(floorNo, slots);
    }

    floors[0]->reserve(2);
    floors[0]->reserve(5, 3);

    for (int i = 0; i < n; i++)
        floors[i]->display();

    
    for (int i = 0; i < n; i++)
        delete floors[i];

   // delete[] floors;
    floors = nullptr;

    return 0;
}

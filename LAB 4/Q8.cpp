//8. Vehicle Service Tracker — Friend Class
#include <iostream>
using namespace std;

class ServiceManager;

class VehicleService {
    string vehicle, owner;
    bool due;
    int km;

public:
    void input() {
        cout << "Vehicle Number: ";
        cin >> vehicle;
        cout << "Owner Name: ";
        cin >> owner;
        cout << "Last Service KM: ";
        cin >> km;
        due = true;
    }

    friend class ServiceManager;
};

class ServiceManager {
public:
    void display(VehicleService v) {
        cout << "\nVehicle: " << v.vehicle;
        cout << "\nOwner: " << v.owner;
        cout << "\nLast Service: " << v.km << " KM";
        cout << "\nService Due: " << (v.due ? "Yes" : "No");
    }

    void complete(VehicleService &v) {
        v.due = false;
    }

    void updateKM(VehicleService &v, int k) {
        v.km = k;
    }

    void check(VehicleService v) {
        cout << "\nService Required: "
             << (v.due ? "Yes" : "No");
    }
};

int main() {
    VehicleService v;
    v.input();

    ServiceManager m;

    m.display(v);
    m.check(v);
    m.complete(v);

    cout << "\nAfter service:";
    m.check(v);
}

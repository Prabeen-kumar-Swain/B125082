//SINGLE INHERITANCE
#include <iostream>
using namespace std;

class Ticket {
protected:
    string name;
    int distance;

public:
    Ticket(string n, int d) {
        name = n;
        distance = d;
    }
};

class RailwayTicket : public Ticket {
    float rate;

public:
    RailwayTicket(string n, int d, float r) : Ticket(n, d) {
        rate = r;
    }

    void display() {
        float fare = distance * rate;

        if (distance > 300){
            fare = fare - (fare * 0.10);
        }

        cout << "Passenger Name: " << name << endl;
        cout << "Distance: " << distance << " km" << endl;
        cout << "Final Fare: Rs. " << fare << endl;
    }
};

int main() {
    RailwayTicket t("Prabeen", 400, 2.5);
    t.display();

    return 0;
}

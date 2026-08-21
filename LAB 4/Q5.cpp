//5. Event Registration Verification — Friend Function
#include <iostream>
using namespace std;

class EventParticipant {
    string name, status;
    int age;

public:
    void input() {
        cout << "Participant Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Registration Status: ";
        cin >> status;
    }

    friend void verifyParticipant(EventParticipant e);
};

void verifyParticipant(EventParticipant e) {
    cout << "\nName: " << e.name;
    cout << "\nAge: " << e.age;
    cout << "\nRegistration: " << e.status;

    if (e.age >= 18 && e.status == "Active")
        cout << "\nEligible";
    else
        cout << "\nNot Eligible";
}

int main() {
    EventParticipant e;
    e.input();
    verifyParticipant(e);
}

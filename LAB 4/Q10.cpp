//10. Classroom Attendance Manager — Friend Class
#include <iostream>
using namespace std;

class AttendanceManager;

class Classroom {
    string name, status;
    int total, present;

public:
    void input() {
        cout << "Class Name: ";
        cin >> name;
        cout << "Total Students: ";
        cin >> total;
        cout << "Present Students: ";
        cin >> present;
        status = "Pending";
    }

    friend class AttendanceManager;
};

class AttendanceManager {
public:
    void display(Classroom c) {
        cout << "\nClass: " << c.name;
        cout << "\nTotal Students: " << c.total;
        cout << "\nPresent: " << c.present;
        cout << "\nStatus: " << c.status;
        cout << "\nAbsent: " << c.total - c.present;
    }
    void updatePresent(Classroom &c, int n) {
        c.present = n;
    }
    void complete(Classroom &c) {
        c.status = "Completed";
    }
    void check(Classroom c) {
        cout << "\nAttendance: " << c.status;
    }
};

int main() {
    Classroom c;
    c.input();
  
    AttendanceManager a;
  
    a.display(c);
    a.complete(c);

    cout << "\n\nAfter completing attendance:";
    a.display(c);
}

//9. Dynamic Employee Records
#include <iostream>
using namespace std;

class Employee {
    string id;
    string name;
    float salary;

public:
    void input() {
        cout << "Employee Id: ";
        cin >> id;
        cout <<"Employee name: ";
        cin >> name;
        cout << "Employee Salary: ";
        cin >> salary;
    }

    void display() {
        cout <<" Employee Id: " << id << endl;
        cout << " Employee Name:" << name << endl;
        cout << " Employee salary: Rs. " << salary <<"/-" << endl << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee *e = new Employee[n];

    for(int i = 0; i < n; i++) {
        e[i].input();
    }

    cout << "\n       Employee Details:\n";
    for(int i = 0; i < n; i++) e[i].display();

    delete[] e;
    e = nullptr;
    return 0; 
}

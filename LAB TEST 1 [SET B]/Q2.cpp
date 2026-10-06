#include <iostream>
using namespace std;

class Borrower {
    int borrowerID;
    int overdueDays;
    float specialRate;
    float fine;

public:
    Borrower(int id, int days) {            // parameterized constructor
        borrowerID = id;
        overdueDays = days;
        fine = 0;
    }

    void input(){
        cout <<" Enter Borrower ID: ";
        cin >> borrowerID;
        cout << " Enter overdue days: ";
        cin >> overdueDays;
        cout << " Enter the special rate: ";
        cin >> specialRate;
    }


    void calculateFine() {
        fine = overdueDays * specialRate;
    }

    void display() {
        cout << "Borrower ID: " << borrowerID << endl;
        cout << "Overdue Days: " << overdueDays << endl;
        cout << "Fine: " << fine << endl;
    }

    friend void compareFine(Borrower &, Borrower &);
};

void compareFine(Borrower &b1, Borrower &b2) {

    if (b1.fine > b2.fine)
        cout << "Borrower " << b1.borrowerID
             << " has higher fine.\n";

    else if (b2.fine > b1.fine)
        cout << "Borrower " << b2.borrowerID
             << " has higher fine.\n";

    else
        cout << "Both borrowers have equal fine.\n";
}

int main() {

    Borrower *b1 = new Borrower(0, 0);
    Borrower *b2 = new Borrower(0, 0);
    b1->input();
    b2->input();

    b1->calculateFine();
    b2->calculateFine();

    b1->display();
    cout << endl;

    b2->display();
    cout << endl;

    compareFine(*b1, *b2);

    delete b1;
    delete b2;
    b1 = nullptr;
    b2 = nullptr;

    return 0;
}
//MULTIPLE INHERITANCE
#include <iostream>
using namespace std;

class LibraryAccess {
protected:
    int books;

public:
    LibraryAccess(int b) {
        books = b;
    }
};

class LaboratoryAccess {
protected:
    int pending;

public:
    LaboratoryAccess(int p) {
        pending = p;
    }
};

class StudentAccess : public LibraryAccess, public LaboratoryAccess {
public:
    StudentAccess(int b, int p) : LibraryAccess(b), LaboratoryAccess(p) {}

    void display() {
        cout << "Books Borrowed: " << books << endl;
        cout << "Pending Submissions: " << pending << endl;

        if (books <= 5 && pending == 0)
            cout << "Full Resource Access Granted" << endl;
        else
            cout << "Full Resource Access Denied" << endl;
    }
};

int main() {
    StudentAccess s(3, 0);
    s.display();

    return 0;
}

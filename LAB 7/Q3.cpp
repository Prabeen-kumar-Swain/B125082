//HIERARCHICAL INHERITANCE
#include <iostream>
using namespace std;

class Candidate {
protected:
    int id;
    float attendance;

public:
    Candidate(int i, float a) {
        id = i;
        attendance = a;
    }
};

class RegularCandidate : public Candidate {
public:
    RegularCandidate(int i, float a) : Candidate(i, a) {}

    void check() {
        cout << "Regular Candidate ID: " << id << endl;

        if (attendance >= 75)
            cout << "Eligible for examination" << endl;
        else
            cout << "Not eligible for examination" << endl;
    }
};

class ReappearCandidate : public Candidate {
public:
    ReappearCandidate(int i, float a) : Candidate(i, a) {}

    void check() {
        cout << "Re-appear Candidate ID: " << id << endl;

        if (attendance >= 60)
            cout << "Eligible for examination" << endl;
        else
            cout << "Not eligible for examination" << endl;
    }
};

int main() {
    RegularCandidate r(101, 80);
    ReappearCandidate re(102, 65);

    r.check();
    re.check();

    return 0;
}

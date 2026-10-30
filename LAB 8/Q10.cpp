
#include <iostream>
using namespace std;

class Scholarship {
public:
    virtual double calculateAward(double marks, double familyIncome) {
        return 0;
    }
};

class MeritScholarship : public Scholarship {
public:
    double calculateAward(double marks, double familyIncome) override {
        if (marks >= 90)
            return 20000;
        else if (marks >= 80)
            return 10000;
        else
            return 0;
    }
};

class NeedBasedScholarship : public Scholarship {
public:
    double calculateAward(double marks, double familyIncome) override {
        if (familyIncome < 200000 && marks >= 70)
            return 25000;
        else
            return 0;
    }
};

int main() {
    MeritScholarship m;
    NeedBasedScholarship n;

    Scholarship *ptr;

    ptr = &m;
    cout << "Merit Scholarship: Rs. "
         << ptr->calculateAward(95, 300000) << endl;

    ptr = &n;
    cout << "Need Based Scholarship: Rs. "
         << ptr->calculateAward(80, 150000) << endl;

    return 0;
}

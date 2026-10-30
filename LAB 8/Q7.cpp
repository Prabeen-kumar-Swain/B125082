
#include <iostream>
using namespace std;

class ElectricityPlan {
public:
    virtual double calculateBill(double units) {
        return 0;
    }
};

class ResidentialPlan : public ElectricityPlan {
public:
    double calculateBill(double units) override {
        if (units <= 100)
            return units * 4;
        else
            return 100 * 4 + (units - 100) * 6;
    }
};

class CommercialPlan : public ElectricityPlan {
public:
    double calculateBill(double units) override {
        return units * 7;
    }
};

int main() {
    ResidentialPlan r;
    CommercialPlan c;

    ElectricityPlan *ptr;

    ptr = &r;
    cout << "Residential Bill: Rs. "
         << ptr->calculateBill(150) << endl;

    ptr = &c;
    cout << "Commercial Bill: Rs. "
         << ptr->calculateBill(150) << endl;

    return 0;
}

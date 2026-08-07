//1. Car Information System
#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string carNumber;
    string brandName;
    int modelYear;

    void acceptDetails() {
        cout << "\n=============================";
        cout << "\n--- Enter Car Details ---";
        cout << "\n=============================\n";

        cout << "Enter Car Number (e.g., ABC 123): ";
        getline(cin, carNumber);

        cout << "Enter Brand Name (e.g., Toyota): ";
        getline(cin, brandName);
        
        cout << "Enter the Model Year (e.g., 2026): ";
        cin >> modelYear ;
        
    }

    void displayDetails() const {
        cout << "\n=============================";
        cout << "\n        CAR DETAILS ";
        cout << "\n=============================\n";
        cout  << "Car Number:  " << carNumber << endl;
        cout  << "Brand Name:  " << brandName << endl;
        cout  << "Model Year:  " << modelYear << endl;
        cout << "=============================\n";
    }
};

int main() {
    Car C1;

    C1.acceptDetails();
    C1.displayDetails();

    return 0;
}

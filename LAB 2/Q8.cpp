//8. Hostel Fee Management
#include <iostream>
#include <string>

using namespace std;

class HostelFee {
public:
    string studentName;
    string ID;
    float monthlyFee;
    int numberOfMonths;
    bool paymentDelayed;

    void acceptDetails() {
        cout << "Enter Student Name: ";
        getline(cin, studentName);

        cout << "Enter Student ID: ";
        cin >> ID;

        cout << "Enter Monthly Fee: ";
        cin >> monthlyFee;

        cout << "Enter Number of Months: ";
        cin >> numberOfMonths;

        cout << "Is payment delayed? (1 for Yes, 0 for No): ";
        cin >> paymentDelayed;
    }

    float calculateTotalFee() {
        return monthlyFee * numberOfMonths;
    }

    float calculateFine() {
        if (paymentDelayed)
            return 500;

        return 0;
    }

    void displayAmount() {
        float totalFee = calculateTotalFee();
        float fine = calculateFine();
        float finalAmount = totalFee + fine;

        cout << "\n--- Hostel Fee Details ---\n";
        cout << "Student Name: " << studentName << "\n";
        cout << "Hostel ID: " << ID << "\n";
        cout << "Monthly Fee: " << monthlyFee << "\n";
        cout << "Number of Months: " << numberOfMonths << "\n";
        cout << "Total Hostel Fee: " << totalFee << "\n";
        cout << "Late Fine: " << fine << "\n";
        cout << "Final Amount Payable: " << finalAmount << "\n";
    }
};

int main() {
    HostelFee student;

    student.acceptDetails();
    student.displayAmount();

    return 0;
}

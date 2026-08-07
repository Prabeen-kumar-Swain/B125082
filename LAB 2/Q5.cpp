//5. Mobile Recharge System
#include <iostream>
#include <string>

using namespace std;

class MobileRecharge {
public:
    string mobileNumber;
    string customerName;
    double currentBalance;

    void acceptCustomerDetails() {
        cout << "\n=============================";
        cout << "\n   Mobile Recharge System";
        cout << "\n=============================\n";

        cout << "Enter Customer Name: ";
        getline(cin, customerName);

        cout << "Enter Mobile Number: ";
        getline(cin, mobileNumber);

        cout << "Enter Current Balance (Rs.): ";
        cin >> currentBalance;
    }

    void rechargeBalance(double amount) {
        if (amount > 0) {
                        currentBalance += amount;
            cout << "\nSuccess!" << amount << " recharged successfully." << endl;
        } else {
            cout << "\nError !" << endl;
        }
    }
    void displayBalance() {
        cout << "\n\n=============================\n";
        cout << "         Payment Summary\n";
        cout << "=============================\n";
         cout << "Mobile Number:  " << mobileNumber <<  endl;
         cout << "Customer Name : " << customerName <<  endl;
         cout << "Updated balance: "<< currentBalance << endl;
         cout << "=============================\n";
    }
};

int main(){
    MobileRecharge u1;
    u1.acceptCustomerDetails();
    float amount;
    cout << "Enter amount to recharge: ";
    cin >> amount;
    u1.rechargeBalance(amount);
    u1.displayBalance();

    return 0;
}

//10. Water Bill Calculator
#include <iostream>
#include <string>

using namespace std;

class WaterBill {
public:
    string consumerNumber;
    string consumerName;
    double waterConsumptionLitres;
    double totalAmount;

    void acceptDetails() {
        cout << "--- WATER BILL CALCULATOR ---" << endl;
        cout << "Enter Consumer Number: ";
        getline(cin, consumerNumber);
        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);
        cout << "Enter Water Consumption (in litres): ";
        cin >> waterConsumptionLitres;
    }

    void calculateBill() {
        double cost = 0.0;

        if (waterConsumptionLitres <= 500) {
            cost = waterConsumptionLitres * 2.0;
        } else if (waterConsumptionLitres <= 1000) {
            cost += 500 * 2.0;
            
            double remaining = waterConsumptionLitres - 500;
            cost += remaining * 3.0;

        } else {
            cost += 500 * 2.0; 
            cost += 500 * 3.0; 
            double remaining = waterConsumptionLitres - 1000;
            cost += remaining * 5.0;
        }

        totalAmount = cost;
    }

    void displayBill() {
        cout << "\n===================================" << endl;
        cout << "         WATER BILL STATEMENT     " << endl;
        cout << "===================================" << endl;
        cout << "Consumer Number: " << consumerNumber << endl;
        cout << "Consumer Name:   " << consumerName << endl;
        
        double consumptionInLitres = waterConsumptionLitres;
        cout << "Water Consumption: " << consumptionInLitres << " litres" << endl;

        double costDisplay = 0.0;
        if (consumptionInLitres > 0) {
            if (consumptionInLitres <= 500) {
                costDisplay += consumptionInLitres * 2.0;
            } else if (consumptionInLitres <= 1000) {
                costDisplay += (500 * 2.0);
                double remaining = consumptionInLitres - 500;
                costDisplay += remaining * 3.0;
            } else {
                costDisplay += (500 * 2.0);
                costDisplay += (500 * 3.0);
                double remaining = consumptionInLitres - 1000;
                costDisplay += remaining * 5.0;
            }
        }

        cout << "-----------------------------------" << endl;
        cout << "Total Bill Amount: Rs." << totalAmount << endl;
        cout << "===================================" << endl;
    }
};

int main() {
    WaterBill billCalculator;
    billCalculator.acceptDetails();
    billCalculator.calculateBill();
    billCalculator.displayBill();

    return 0;
}

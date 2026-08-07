//4. Hotel Room Booking
#include <iostream>
using namespace std;

class HotelRoom {
private:
    string roomNumber;
    string guestName;
    int daysStayed;
    double costPerDay;

public:
    void acceptBookingDetails() {
        cout << "\n=============================";
        cout << "\n--- Hotel Booking Details ---";
        cout << "\n=============================\n";

        cout << "Enter Room Number: ";
        cin >> roomNumber;
        cout << "Enter guest's name: ";
        cin >> guestName;
        cout << "Enter the number of days stayed: ";
        cin >> daysStayed;
        cout << "Cost per day: ";
        cin >> costPerDay;
    }

    double calculateTotalRoomRent() {
        return daysStayed * costPerDay;
    }

    void displayBookingDetails() {
        cout << "\n--- Booking Details ---" << endl;
        cout << "Room Number: " << roomNumber << endl;
        cout << "Guest Name: " << guestName << endl;
        cout << "Days Stayed: " << daysStayed << endl;
        cout << "Cost Per Day: Rs." << costPerDay << endl;
        double totalRent = calculateTotalRoomRent();
        cout << "Total Room Rent: Rs." << totalRent << endl;
    }
};

int main() {
    HotelRoom booking;
    booking.acceptBookingDetails();
    booking.displayBookingDetails();
    return 0;
}

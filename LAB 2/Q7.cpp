//7. Movie Ticket Booking
#include <iostream>
using namespace std;

class MovieTicket {
private:
    string movieName;
    double ticketPrice;
    int numberOfTickets;

public:
    void acceptBookingDetails() {
        cout << "Enter the name of the movie: ";
        cin >> movieName;
    
        cout << "Enter the price of a single ticket: $";
        cin >> ticketPrice;

        cout << "Enter the number of tickets purchased: ";
        cin >> numberOfTickets;
    }

    double calculateTotalTicketCost() {
        return ticketPrice * numberOfTickets;
    }

    void displayBookingSummary() {
        cout << "\n--- Movie Ticket Details ---\n";
        cout << "Movie: " << movieName << endl;
        cout << "Ticket Price: " << ticketPrice << endl;
        cout << "Number of Tickets: " << numberOfTickets << endl;
        cout << "Total Cost: "<< calculateTotalTicketCost() <<endl;
    }
};

int main() {
    MovieTicket ticket;

    ticket.acceptBookingDetails();
    ticket.displayBookingSummary();

    return 0;
}

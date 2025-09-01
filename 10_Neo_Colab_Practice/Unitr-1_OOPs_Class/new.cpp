#include <iostream>
#define MAX_TICKETS 25
using namespace std;

class Ticket {
private:
    int ticketId;

public:
    Ticket(int id) : ticketId(id) {}

    int getTicketId() {
        return ticketId;
    }
};

class Reservation {
private:
    Ticket* reservedTickets[MAX_TICKETS];
    int numTickets;

public:
    Reservation() : numTickets(0) {
        for (int i = 0; i < MAX_TICKETS; i++) {
            reservedTickets[i] = nullptr;
        }
    }

    void addTicket(Ticket& ticket) {
        if (numTickets < MAX_TICKETS) {
            reservedTickets[numTickets] = new Ticket(ticket.getTicketId());
            numTickets++;
        }
    }

    void displayReservedTickets() {
        cout << "Reserved Tickets: ";
        for (int i = 0; i < numTickets; i++) {
            cout << reservedTickets[i]->getTicketId() << " ";
        }
        cout << endl;
    }

    friend void cancelReservation(Reservation& reservation, Ticket& ticket);
};

void cancelReservation(Reservation& reservation, Ticket& ticket) {
    for (int i = 0; i < reservation.numTickets; i++) {
        if (reservation.reservedTickets[i]->getTicketId() == ticket.getTicketId()) {
            delete reservation.reservedTickets[i];
            reservation.reservedTickets[i] = nullptr;

            // Shift remaining tickets to fill the empty space
            for (int j = i; j < reservation.numTickets - 1; j++) {
                reservation.reservedTickets[j] = reservation.reservedTickets[j + 1];
            }
            reservation.reservedTickets[reservation.numTickets - 1] = nullptr;
            reservation.numTickets--;

            cout << "Ticket with ID " << ticket.getTicketId() << " has been cancelled";
            return;
        }
    }
    cout << "Ticket with ID " << ticket.getTicketId() << " not found in the reservation";
}

int main() {
    Reservation reservation;
    int numTickets;

    cin >> numTickets;

    for (int i = 0; i < numTickets; i++) {
        int ticketId;
        cin >> ticketId;
        Ticket ticket(ticketId);
        reservation.addTicket(ticket);
    }

    reservation.displayReservedTickets();

    int cancelTicketId;
    cin >> cancelTicketId;
    Ticket cancelTicket(cancelTicketId);
    cancelReservation(reservation, cancelTicket);

    cout << endl;
    reservation.displayReservedTickets();

    return 0;
}
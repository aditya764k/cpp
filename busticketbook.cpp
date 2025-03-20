#include<iostream>
#define MAX 40
using namespace std;

class BookBus{
    string start;
    string destination;
    int ticketcount;

public:
   
    static int capacity;

    BookBus(string start = "city", string destination = "city", int ticketcount = 1) {
        this->start = start;
        this->destination = destination;
        this->ticketcount = ticketcount;
    }

    void updateTicketCount(int ticketCount) {
        try {
            if(ticketCount > BookBus::capacity) {
                throw ticketCount;  
            }
            BookBus::capacity -= ticketCount;  
        } 
        catch(int ticketCount) {  
        
            cout << "Ticket count " << ticketCount << " exceeds the available capacity." << endl;
            cout << "Available tickets: " << BookBus::capacity << endl;
        }
    }

    
    void displayStatus() {
        cout << "Start: " << start << ", Destination: " << destination << ", Tickets booked: " << ticketcount << endl;
    }
};


int BookBus::capacity = MAX;

int main() {
    BookBus bus1("sangli", "pune", 2);  
    bus1.displayStatus();

    bus1.updateTicketCount(10); 

    bus1.updateTicketCount(15); 
	
    bus1.updateTicketCount(30);  
    return 0;
}

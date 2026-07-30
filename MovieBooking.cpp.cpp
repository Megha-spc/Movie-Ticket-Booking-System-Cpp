#include <iostream>
#include <string>
using namespace std;

class MovieBooking
{
private:
    string customerName;
    string movieName;
    int tickets;
    float ticketPrice;
    float totalAmount;
    bool bookingStatus;

public:
    // Constructor
    MovieBooking()
    {
        ticketPrice = 200;
        tickets = 0;
        totalAmount = 0;
        bookingStatus = false;
    }

    // Book Ticket
    void bookTicket()
    {
        cout << "\n===== BOOK TICKET =====\n";

        cout << "Enter Customer Name: ";
        cin.ignore();
        getline(cin, customerName);

        cout << "\nAvailable Movies\n";
        cout << "1. Kalki 2898 AD\n";
        cout << "2. Saiyaara\n";
        cout << "3. Superman\n";
        cout << "4. Jurassic World\n";

        int choice;
        cout << "Select Movie: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                movieName = "Kalki 2898 AD";
                break;
            case 2:
                movieName = "Saiyaara";
                break;
            case 3:
                movieName = "Superman";
                break;
            case 4:
                movieName = "Jurassic World";
                break;
            default:
                cout << "Invalid Movie Choice!\n";
                return;
        }

        cout << "Enter Number of Tickets: ";
        cin >> tickets;

        totalAmount = tickets * ticketPrice;
        bookingStatus = true;

        cout << "\nBooking Successful!\n";
        cout << "Total Amount = Rs. " << totalAmount << endl;
    }

    // View Booking
    void viewBooking()
    {
        if(bookingStatus == false)
        {
            cout << "\nNo Booking Found!\n";
            return;
        }

        cout << "\n===== BOOKING DETAILS =====\n";
        cout << "Customer Name : " << customerName << endl;
        cout << "Movie Name    : " << movieName << endl;
        cout << "Tickets       : " << tickets << endl;
        cout << "Ticket Price  : Rs. " << ticketPrice << endl;
        cout << "Total Amount  : Rs. " << totalAmount << endl;
    }

    // Cancel Booking
    void cancelBooking()
    {
        if(bookingStatus == false)
        {
            cout << "\nNo Booking Available!\n";
            return;
        }

        bookingStatus = false;
        customerName = "";
        movieName = "";
        tickets = 0;
        totalAmount = 0;

        cout << "\nBooking Cancelled Successfully!\n";
    }
};

int main()
{
    MovieBooking obj;
    int choice;

    do
    {
        cout << "\n==============================";
        cout << "\n MOVIE TICKET BOOKING SYSTEM";
        cout << "\n==============================";
        cout << "\n1. Book Ticket";
        cout << "\n2. View Booking Details";
        cout << "\n3. Cancel Ticket";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice: ";
        cin >> choice;
        switch(choice) {
            case 1:
                obj.bookTicket();
                break;

            case 2:
                obj.viewBooking();
                break;

            case 3:
                obj.cancelBooking();
                break;

            case 4:
                cout << "\nThank You for Using the System!\n";
                break;

            default:
                cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while(choice != 4);
     return 0;
}

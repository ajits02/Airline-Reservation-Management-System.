#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Function declaration
void mainMenu();

class Management {
public:
    Management() {
        mainMenu();
    }
};

class Details {
public:
    static string name, gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information() {
        cout << "\nEnter the Customer ID: ";
        cin >> cId;
        cout << "\nEnter the name: ";
        cin >> name;
        cout << "\nEnter the Age: ";
        cin >> age;
        cout << "\nAddress: ";
        cin >> add;
        cout << "\nGender: ";
        cin >> gender;

        cout << "Your Details are saved with us\n" << endl;
    }
};

string Details::name;
string Details::gender;
int Details::cId;

class Registration {
public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights() {
        string flightN[] = {"Dubai", "Canada", "UK", "Australia", "Europe"};
        for (int a = 0; a < 5; a++) {
            cout << (a + 1) << ". Flight to " << flightN[a] << endl;
        }
        cout << "\nWelcome to the Airlines!" << endl;
        cout << "Press the number of the country of which you want to book the flight: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "___Welcome to Dubai Emirates___\n" << endl;
            cout << "Your comfort is our priority. Enjoy the journey" << endl;
            cout << "Following are the flights\n" << endl;

            cout << "1. DUB-498" << endl;
            cout << "08-01-2024 8:00AM 10 hrs Rs. 14000" << endl;
            cout << "2. DUB-658" << endl;
            cout << "09-01-2024 4:00PM 12 hrs Rs. 10000" << endl;
            cout << "3. DUB-498" << endl;
            cout << "11-01-2024 11:00AM 11 hrs Rs. 9000" << endl;
            cout << "\nSelect the Flight you want to book: ";
            cin >> choice1;

            if (choice1 == 1) {
                charges = 14000;
                cout << "\nYou successfully booked the flight DUB-498" << endl;
            } else if (choice1 == 2) {
                charges = 10000;
                cout << "\nYou successfully booked the flight DUB-658" << endl;
            } else if (choice1 == 3) {
                charges = 9000;
                cout << "\nYou successfully booked the flight DUB-498" << endl;
            } else {
                cout << "Invalid Input, shifting to the Previous menu:" << endl;
                flights();
            }

            cout << "You can go back to the menu and take the ticket" << endl;
            cout << "Press 1 to go back to the main menu: ";
            cin >> back;
            if (back == 1) {
                mainMenu();
            } else {
                mainMenu();
            }
            break;
        }
        case 2: {
            cout << "___Welcome to Canadian Airlines___\n" << endl;
            cout << "Your comfort is our priority. Enjoy the journey" << endl;
            cout << "Following are the flights\n" << endl;

            cout << "1. CA-198" << endl;
            cout << "09-01-2024 8:00AM 10 hrs Rs. 34000" << endl;
            cout << "2. CA-658" << endl;
            cout << "09-01-2024 6:00PM 12 hrs Rs. 29000" << endl;
            cout << "3. CA-498" << endl;
            cout << "11-01-2024 12:00AM 11 hrs Rs. 40000" << endl;
            cout << "\nSelect the Flight you want to book: ";
            cin >> choice1;

            if (choice1 == 1) {
                charges = 34000;
                cout << "\nYou successfully booked the flight CA-198" << endl;
            } else if (choice1 == 2) {
                charges = 29000;
                cout << "\nYou successfully booked the flight CA-658" << endl;
            } else if (choice1 == 3) {
                charges = 40000;
                cout << "\nYou successfully booked the flight CA-498" << endl;
            } else {
                cout << "Invalid Input, shifting to the Previous menu:" << endl;
                flights();
            }

            cout << "You can go back to the menu and take the ticket" << endl;
            cout << "Press 1 to go back to the main menu: ";
            cin >> back;
            if (back == 1) {
                mainMenu();
            } else {
                mainMenu();
            }
            break;
        }
        case 3: {
            cout << "___Welcome to UK Airways___\n" << endl;
            cout << "Your comfort is our priority. Enjoy the journey" << endl;
            cout << "Following are the flights\n" << endl;

            cout << "1. UK-798" << endl;
            cout << "08-01-2024 8:00AM 14 hrs Rs. 44000" << endl;
            cout << "2. UK-658" << endl;
            cout << "09-01-2024 4:00PM 12 hrs Rs. 10000" << endl;
            cout << "3. UK-498" << endl;
            cout << "11-01-2024 11:00AM 11 hrs Rs. 9000" << endl;
            cout << "\nSelect the Flight you want to book: ";
            cin >> choice1;

            if (choice1 == 1) {
                charges = 44000;
                cout << "\nYou successfully booked the flight UK-798" << endl;
            } else if (choice1 == 2) {
                charges = 10000;
                cout << "\nYou successfully booked the flight UK-658" << endl;
            } else if (choice1 == 3) {
                charges = 9000;
                cout << "\nYou successfully booked the flight UK-498" << endl;
            } else {
                cout << "Invalid Input, shifting to the Previous menu:" << endl;
                flights();
            }

            cout << "You can go back to the menu and take the ticket" << endl;
            cout << "Press 1 to go back to the main menu: ";
            cin >> back;
            if (back == 1) {
                mainMenu();
            } else {
                mainMenu();
            }
            break;
        }
        case 4: {
            cout << "___Welcome to US Airways___\n" << endl;
            cout << "Your comfort is our priority. Enjoy the journey" << endl;
            cout << "Following are the flights\n" << endl;

            cout << "1. US-588" << endl;
            cout << "08-01-2024 8:00AM 22 hrs Rs. 14000" << endl;
            cout << "2. US-658" << endl;
            cout << "09-01-2024 4:00PM 22 hrs Rs. 10000" << endl;
            cout << "3. US-498" << endl;
            cout << "11-01-2024 11:00AM 21 hrs Rs. 9000" << endl;
            cout << "\nSelect the Flight you want to book: ";
            cin >> choice1;

            if (choice1 == 1) {
                charges = 14000;
                cout << "\nYou successfully booked the flight US-588" << endl;
            } else if (choice1 == 2) {
                charges = 10000;
                cout << "\nYou successfully booked the flight US-658" << endl;
            } else if (choice1 == 3) {
                charges = 9000;
                cout << "\nYou successfully booked the flight US-498" << endl;
            } else {
                cout << "Invalid Input, shifting to the Previous menu:" << endl;
                flights();
            }

            cout << "You can go back to the menu and take the ticket" << endl;
            cout << "Press 1 to go back to the main menu: ";
            cin >> back;
            if (back == 1) {
                mainMenu();
            } else {
                mainMenu();
            }
            break;
        }
        case 5: {
            cout << "___Welcome to Australian Airways___\n" << endl;
            cout << "Your comfort is our priority. Enjoy the journey" << endl;
            cout << "Following are the flights\n" << endl;

            cout << "1. AUS-498" << endl;
            cout << "08-01-2024 8:00AM 10 hrs Rs. 24000" << endl;
            cout << "2. AUS-658" << endl;
            cout << "09-01-2024 4:00PM 12 hrs Rs. 10000" << endl;
            cout << "3. AUS-498" << endl;
            cout << "11-01-2024 11:00AM 11 hrs Rs. 9000" << endl;
            cout << "\nSelect the Flight you want to book: ";
            cin >> choice1;

            if (choice1 == 1) {
                charges = 24000;
                cout << "\nYou successfully booked the flight AUS-498"<<endl;
            } else if (choice1 == 2) {
                charges = 10000;
                cout << "\nYou successfully booked the flight AUS-658" << endl;
            } else if (choice1 == 3) {
                charges = 9000;
                cout << "\nYou successfully booked the flight AUS-498" << endl;
            } else {
                cout << "Invalid Input, shifting to the Previous menu:" << endl;
                flights();
            }

            cout << "You can go back to the menu and take the ticket" << endl;
            cout << "Press 1 to go back to the main menu: ";
            cin >> back;
            if (back == 1) {
                mainMenu();
            } else {
                mainMenu();
            }
            break;
        }
        case 6: {
            cout << "___Welcome to European Airlines___\n" << endl;
            cout << "Your comfort is our priority. Enjoy the journey" << endl;
            cout << "Following are the flights\n" << endl;

            cout << "1. EU-498" << endl;
            cout << "08-01-2024 8:00AM 10 hrs Rs. 240000" << endl;
            cout << "2. EU-658" << endl;
            cout << "09-01-2024 4:00PM 12 hrs Rs. 100000" << endl;
            cout << "3. EU-498" << endl;
            cout << "11-01-2024 11:00AM 11 hrs Rs. 90000" << endl;
            cout << "\nSelect the Flight you want to book: ";
            cin >> choice1;

            if (choice1 == 1) {
                charges = 240000;
                cout << "\nYou successfully booked the flight EU-498" << endl;
            } else if (choice1 == 2) {
                charges = 100000;
                cout << "\nYou successfully booked the flight EU-658" << endl;
            } else if (choice1 == 3) {
                charges = 90000;
                cout << "\nYou successfully booked the flight EU-498" << endl;
            } else {
                cout << "Invalid Input, shifting to the Previous menu:" << endl;
                flights();
            }

            cout << "You can go back to the menu and take the ticket" << endl;
            cout << "Press 1 to go back to the main menu: ";
            cin >> back;
            if (back == 1) {
                mainMenu();
            } else {
                mainMenu();
            }
            break;
        }
        default: {
            cout << "Invalid Input, shifting you to the main menu!" << endl;
            mainMenu();
            break;
        }
        }
    }
};

float Registration::charges;
int Registration::choice;

class Ticket : public Registration, public Details {
public:
    void Bill() {
        string destination = "";
        ofstream outf("records.txt");
        {
            outf << "___ABC Airlines_____" << endl;
            outf << "____Ticket____" << endl;
            outf << "______________________" << endl;

            outf << "Customer ID: " << Details::cId << endl;
            outf << "Customer Name: " << Details::name << endl;
            outf << "Customer Gender: " << Details::gender << endl;
            outf << "\tDescription:" << endl << endl;

            if (Registration::choice == 1) {
                destination = "Dubai";
            } else if (Registration::choice == 2) {
                destination = "Canada";
            } else if (Registration::choice == 3) {
                destination = "UK";
            } else if (Registration::choice == 4) {
                destination = "USA";
            } else if (Registration::choice == 5) {
                destination = "Australia";
            } else if (Registration::choice == 6) {
                destination = "Europe";
            }

            outf << "Destination:\t\t" << destination << endl;
            outf << "Flight cost:\t\t" << Registration::charges << endl;
        }
        outf.close();
    }

    void dispBill() {
        ifstream ifs("records.txt");
        {
            if (!ifs) {
                cout << "File error!" << endl;
            }
            while (!ifs.eof()) {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }
        }
        ifs.close();
    }
};

// Function definition
void mainMenu() {
    int lchoice;
    
    int back;

    cout << "\tABC Airlines\n" << endl;
    cout << "\t_________Main Menu_________" << endl;
    cout << "\t___________________________" << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;
    cout << "1. Add Customer Details" << endl;
    cout << "2. View Flight For Flight Registration" << endl;
    cout << "3. For Ticket and Charges" << endl;
    cout << "4. Exit" << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;
    cout << "Enter your choice: ";
    cin >> lchoice;

    Details d;
    Registration r;
    Ticket t;

    switch (lchoice) {
    case 1: {
        cout << "___________Customers_______\n" << endl;
        d.information();
        cout << "Press any key to go back to menu: ";
        cin >> back;

        if (back == 1) {
            mainMenu();
        } else {
            mainMenu();
        }
        break;
    }
    case 2: {
        cout << "___Book a Flight using this system____\n" << endl;
        r.flights();
        break;
    }
    case 3: {
        cout << "____GET YOUR TICKET___\n" << endl;
        t.Bill();

        cout << "Your Ticket is Printed, You can collect it\n" << endl;
        cout << "Press 1 to Display your Ticket: ";
        cin >> back;
        if (back == 1) {
            t.dispBill();
            cout << "Press any key to go back to main menu: ";
            cin >> back;
            if (back == 1) {
                mainMenu();
            } else {
                mainMenu();
            }
        }
        break;
    }
    case 4: {
        cout << "\n\n\t________Thank-you______" << endl;
        break;
    }
    default: {
        cout << "Invalid Input, Please try again\n" << endl;
        mainMenu();
    }
    }
}

int main() {
    Management Mobj;
    return 0;
}

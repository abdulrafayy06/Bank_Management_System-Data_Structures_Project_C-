#include <iostream>
#include <string>
#include "User.h"
#include "HistoryStackLoan.h"
using namespace std;

class LoanManager : public User
{
private:
    static int nextaccountno;

    int accountno;
    int approved;
    int declined;
    HistoryStackLoan history;



    void incrementapproved() {
        approved++;
    }

    void incrementdeclined () {
        declined++;
    }

public:
    LoanManager() : User() {
        accountno = ++nextaccountno;
        approved = 0;
        declined = 0;
        history = HistoryStackLoan();
    };
    
    LoanManager(string username, string password, string cnic, string name, string address, string phone, string email) : User(username, password, cnic, name, address, phone, email) {
        this->accountno = ++nextaccountno;
        approved = 0;
        declined = 0;
        history = HistoryStackLoan();
    };

    void displayLoanManager() {
        cout << "--------LOAN MANAGER DETAILS-----------" << endl;
        cout << "Username: " << getUsername() << endl;
        cout << "Password: " << getPassword() << endl;
        cout << "CNIC: " << getCnic() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Address: " << getAddress() << endl;
        cout << "Phone: " << getPhone() << endl;
        cout << "Email: " << getEmail() << endl;
        cout << "Approved Loans: " << getApproved() << endl;
        cout << "Declined Loans: " << getDeclined() << endl;
        cout << "--------------------------------" << endl;
    }

    // Function to approve loan
    void approveLoan(Customer customer, float status) {
        incrementapproved();
        StackNodeLoan *node = new StackNodeLoan();
        node->status = "Loan Approved";
        node->customer = customer;
        history.push(node);
    }

    // Function to decline loan
    void declineLoan(Customer customer, float status) {
        incrementdeclined();
        StackNodeLoan *node = new StackNodeLoan();
        node->status = "Loan Declined";
        node->customer = customer;
        history.push(node);
    }
    

    int getApproved() {
        return approved;
    }

    int getDeclined() {
        return declined;
    }

    void display_history() {
        history.displayHistory();
    }
};

int LoanManager::nextaccountno = 0;
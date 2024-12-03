#include<iostream>
#include<string>
#include <windows.h>
#include "Admin.h"
#include "design.h"
#include "CustomerLinkedlist.h"
#include "LoansQueue.h"
#include "LoanManagerLinkList.h"


using namespace std;

int main() {   
    //All objects
    
    design d;
	Admin admin = Admin ("admin", "admin");
    CustomerLinkedlist customerList;
    LoansQueue loanQueue; //All loan requests
    customerList.addCustomer(Customer("ali", "ali", "1234512345671", "Ali", "Karachi", "123456789", "nothing" , 1000));
    customerList.addCustomer(Customer("ahmed", "ahmed", "1234512345672", "Ahmed", "Karachi", "123456789", "nothing", 2000));
    customerList.addCustomer(Customer("usman", "usman", "1234512345673", "Usman", "Karachi", "123456789", "nothing", 3000));
    customerList.addCustomer(Customer("umer", "umer", "1234512345674", "Umer", "Karachi", "123456789", "nothing", 4000));
    customerList.addCustomer(Customer("zain", "zain", "1234567890123", "Zain", "Karachi", "123456789", "nothing", 5000)); 
    LoanManagerLinkList loanManagerlist;
    loanManagerlist.addLoanManager(LoanManager("lm1", "lm1", "1234512345675", "Loan Manager 1", "Karachi", "123456789", "nothing"));
    loanManagerlist.addLoanManager(LoanManager("loanmanager2", "loanmanager2", "1234512345676", "Loan Manager 2", "Karachi", "123456789", "nothing"));
    loanManagerlist.addLoanManager(LoanManager("loanmanager3", "loanmanager3", "1234512345677", "Loan Manager 3", "Karachi", "123456789", "nothing"));

    


    d.welcome_page(); //Welcome Page
 

	char choice = '-' ;
	while (choice!='0') {
    d.home_page(); 
    cout << "\n\t\t\t\t\t     Enter your choice: ";
    cin >> choice;
    switch (choice)
    {
    case '1': //Admin Login
    	{
            string username, password;
            cout << "\n\t\t\t\t\t     Enter username: ";
            cin >> username;
            cout << "\t\t\t\t\t     Enter password: ";
            cin >> password;
            if (admin.login(username, password)) {
                cout << "\n\t\t\t\t\t        Login successful!" << endl;
                Sleep(1000);
                d.log_in();
                system ("cls");
                char choice1 = '-';
        while (choice1 != '0') {
        		d.admin_page();
                cout << "\n\t\t\t\t\t     Enter your choice: ";
        	cin >> choice1;
        switch (choice1)
        {
        case '1':  //Customer Management
            {
                char choice2 = '-';
                while (choice2 != '0') {
                    d.customer_management();
                    cout << "\n\t\t\t\t\t     Enter your choice: ";
                    cin >> choice2;
                    switch (choice2)
                    {
                    case '1': //Add Customer
                        {
                            string username, password, cnic, name, address, phone, email;
                            float balance;
                            cout << "\n\t\t\t\t\t     Enter username: ";
                            cin >> username;
                            cout << "\t\t\t\t\t     Enter password: ";
                            cin >> password;
                            cout << "\t\t\t\t\t     Enter CNIC: ";
                            cin >> cnic;
                            cout << "\t\t\t\t\t     Enter name: ";
                            cin >> name;
                            cout << "\t\t\t\t\t     Enter address: ";
                            cin >> address;
                            cout << "\t\t\t\t\t     Enter phone: ";
                            cin >> phone;
                            cout << "\t\t\t\t\t     Enter email: ";
                            cin >> email;
                            cout << "\t\t\t\t\t     Enter balance: ";
                            cin >> balance;
                            Customer customer = Customer(username, password, cnic, name, address, phone, email, balance);
                            customerList.addCustomer(customer);
                            system("pause");
                            break;
                        }
                    case '2': //Remove Customers by CNIC or Username
                        {
                            char choice3 = '-';
                            while (choice3 != '0') {
                                d.remove_customer();
                                cout << "\n\t\t\t\t\t     Enter your choice: ";
                                cin >> choice3;
                                switch (choice3)
                                {
                                case '1': //Delete Customer by CNIC
                                    {
                                        string cnic;
                                        cout << "\n\t\t\t\t\t     Enter CNIC: ";
                                        cin >> cnic;
                                        customerList.deleteCustomerByCnic(cnic);
                                        system("pause");
                                        break;
                                    }
                                case '2': //Delete Customer by Username
                                    {
                                        string username;
                                        cout << "\n\t\t\t\t\t     Enter username: ";
                                        cin >> username;
                                        customerList.deleteCustomer(username);
                                        system("pause");
                                        break;
                                    }
                                case '3': //Delete Customer by AccountNo
                                    {
                                        int accountno;
                                        cout << "\n\t\t\t\t\t     Enter AccountNo: ";
                                        cin >> accountno;
                                        customerList.deleteCustomerByAccountNo(accountno);
                                        system("pause");
                                        break;
                                    }
                                case '0': //Back to Customer Management
                                    {
                                        break;
                                    }
                                default: //Invalid choice
                                    {
                                        system("color 04");
                                        cout << "\n\t\t\t\t\t     Invalid choice!" << endl;
                                        system("pause");
                                        break;
                                    }
                                }
                            }
                            break;
                        }
                    case '3': //Display Customers 
                        {
                            customerList.displayCustomers();
                            system("pause");
                            break;
                        }
                    case '4': //Search Customer by Username or CNIC
                        {
                            char choice4 = '-';
                            while (choice4 != '0') {
                                d.search_customer();
                                cout << "\n\t\t\t\t\t     Enter your choice: ";
                                cin >> choice4;
                                switch (choice4)
                                {
                                case '1': //Search Customer by Username
                                    {
                                        string username;
                                        cout << "\n\t\t\t\t\t     Enter username: ";
                                        cin >> username;
                                        customerList.searchCustomer(username);
                                        system ("pause");
                                        break;
                                    }
                                case '2': //Search Customer by CNIC
                                    {
                                        string cnic;
                                        cout << "\n\t\t\t\t\t     Enter CNIC: ";
                                        cin >> cnic;
                                        customerList.searchCustomerByCnic(cnic);
                                        system("pause");
                                        break;
                                    }
                                case '3': //Search Customer by AccountNo
                                    {
                                        int accountno;
                                        cout << "\n\t\t\t\t\t     Enter AccountNo: ";
                                        cin >> accountno;
                                        customerList.searchCustomerByAccountNo(accountno);
                                        system("pause");
                                        break;
                                    }
                                case '0': //Back to Customer Management
                                    {
                                        break;
                                    }
                                default: //Invalid choice
                                    {
                                        system("color 04");
                                        cout << "\n\t\t\t\t\t     Invalid choice!" << endl;
                                        system("pause");
                                        break;
                                    }
                                }
                            }
                            break;
                        }
                    case '5': //Sort Customers
                        {
                            customerList.sortCustomers();
                            system("pause");
                            break;
                        }
                    case '6': //Update Customer 
                        {
                            char choice5 = '-';
                            
                                while (choice5 != '0') {
                                    d.update_customer();
                                    cout << "\n\t\t\t\t\t     Enter your choice: ";
                                    cin >> choice5;
                                    switch (choice5)
                                    {
                                    case '1': //Update Customer by CNIC
                                        {
                                            string cnic, username, password, name, address, phone, email;
                                            float balance;
                                            cout << "\n\t\t\t\t\t     Enter CNIC: ";
                                            cin >> cnic;
                                            cout << "\t\t\t\t\t     Enter username: ";
                                            cin >> username;
                                            cout << "\t\t\t\t\t     Enter password: ";
                                            cin >> password;
                                            cout << "\t\t\t\t\t     Enter name: ";
                                            cin >> name;
                                            cout << "\t\t\t\t\t     Enter address: ";
                                            cin >> address;
                                            cout << "\t\t\t\t\t     Enter phone: ";
                                            cin >> phone;
                                            cout << "\t\t\t\t\t     Enter email: ";
                                            cin >> email;
                                            cout << "\t\t\t\t\t     Enter balance: ";
                                            cin >> balance;
                                            Customer customer = Customer(username, password, cnic, name, address, phone, email, balance);
                                            customerList.updateCustomerByCnic(cnic, customer);
                                            system("pause");
                                            break;
                                        }
                                    case '2': //Update Customer by Username
                                        {
                                            string username, password, cnic, name, address, phone, email;
                                            float balance;
                                            cout << "\n\t\t\t\t\t     Enter username: ";
                                            cin >> username;
                                            cout << "\t\t\t\t\t     Enter password: ";
                                            cin >> password;
                                            cout << "\t\t\t\t\t     Enter CNIC: ";
                                            cin >> cnic;
                                            cout << "\t\t\t\t\t     Enter name: ";
                                            cin >> name;
                                            cout << "\t\t\t\t\t     Enter address: ";
                                            cin >> address;
                                            cout << "\t\t\t\t\t     Enter phone: ";
                                            cin >> phone;
                                            cout << "\t\t\t\t\t     Enter email: ";
                                            cin >> email;
                                            cout << "\t\t\t\t\t     Enter balance: ";
                                            cin >> balance;
                                            Customer customer = Customer(username, password, cnic, name, address, phone, email, balance);
                                            customerList.updateCustomer(username, customer);
                                            system("pause");
                                            break;
                                        }
                                    case '0': //Back to Customer Management
                                        {
                                            break;
                                        }
                                    default: //Invalid choice
                                        {
                                            system("color 04");
                                            cout << "\n\t\t\t\t\t     Invalid choice!" << endl;
                                            system("pause");
                                            break;
                                        }
                                    }
                                }
                            break;
                        }
                    case '0': //Back to Admin Page
                        {
                            break;
                        }
                    default: //Invalid choice
                        {
                            system("color 04");
                            cout << "\n\t\t\t\t\t     Invalid choice!" << endl;
                            system("pause");
                            break;
                        }
                    }
                }
                break;
            }
        case '2': //Loan Managers
            {
                char choice6 = '-';
                while (choice6 != '0') {
                    d.loan_manager();
                    cout << "\n\t\t\t\t\t     Enter your choice: ";
                    cin >> choice6;
                    switch (choice6)
                    {
                    case '1': //Add Loan Manager
                        {
                            string username, password, cnic, name, address, phone, email;
                            cin.ignore();
                            cout << "\n\t\t\t\t\t     Enter username: ";
                            getline(cin, username);
                            cout << "\t\t\t\t\t     Enter password: ";
                            getline(cin, password);
                            cout << "\t\t\t\t\t     Enter CNIC: ";
                            getline(cin, cnic);
                            cout << "\t\t\t\t\t     Enter name: ";
                            getline(cin, name);
                            cout << "\t\t\t\t\t     Enter address: ";
                            getline(cin, address);
                            cout << "\t\t\t\t\t     Enter phone: ";
                            getline(cin, phone);
                            cout << "\t\t\t\t\t     Enter email: ";
                            getline(cin, email);
                            LoanManager loanManager = LoanManager(username, password, cnic, name, address, phone, email);
                            loanManagerlist.addLoanManager(loanManager);
                            system("pause");
                            break;
                        }
                    case '2': //Remove Loan Manager
                        {
                            string username;
                            cin.ignore();
                            cout << "\n\t\t\t\t\t     Enter username: ";
                            getline(cin, username);
                            loanManagerlist.deleteLoanManager(username);
                            system("pause");
                            break;
                        }
                        case '3': //Display Loan Managers
                        {
                            loanManagerlist.displayLoanManagers();
                            system("pause");
                            break;
                        }
                        case '4': //Search Loan Manager
                        {
                            string username;
                            cin.ignore();
                            cout << "\n\t\t\t\t\t     Enter username: ";
                            getline(cin, username);
                            loanManagerlist.searchLoanManager(username);
                            system("pause");
                            break;
                        }
                        case '5': //Update Loan Manager
                        {
                            string username, password, cnic, name, address, phone, email;
                            cin.ignore();
                            cout << "\n\t\t\t\t\t     Enter username: ";
                            getline(cin, username);
                            cout << "\t\t\t\t\t     Enter password: ";
                            getline(cin, password);
                            cout << "\t\t\t\t\t     Enter CNIC: ";
                            getline(cin, cnic);
                            cout << "\t\t\t\t\t     Enter name: ";
                            getline(cin, name);
                            cout << "\t\t\t\t\t     Enter address: ";
                            getline(cin, address);
                            cout << "\t\t\t\t\t     Enter phone: ";
                            getline(cin, phone);
                            cout << "\t\t\t\t\t     Enter email: ";
                            getline(cin, email);
                            LoanManager loanManager = LoanManager(username, password, cnic, name, address, phone, email);
                            loanManagerlist.updateLoanManager(username, loanManager);
                            system("pause");
                            break;
                        }
                        case '0': //Back to Loan Manager
                        {
                            break;
                        }
                        default: //Invalid choice
                        {
                            system("color 04");
                            cout << "\n\t\t\t\t\t     Invalid choice!" << endl;
                            system("pause");
                            break;
                        }
                    }
                }
                break;
            }
        case '0': //Logout of Admin
            {
            cout << "\n\t\t\t\t\t        Logout successful!" << endl;
            Sleep(1000);
            d.log_out();
            break;
        }
        default: //Invalid choice
            {
            system("color 04");    
            cout << "\n\t\t\t\t\t     Invalid choice!" << endl;
            system("pause");
            break;
        }
        }
        }   
        break;
            }
            else {
                system("color 04");
                cout << "\n\t\t\t\t\t     Invalid username or password!" << endl;
                system("pause");
                break; 
            }
    }
    case '2': //Customer Login
        {
        string username, password;
        cin.ignore();
        cout << "\n\t\t\t\t\t     Enter username: ";
        cin >> username;
        cout << "\t\t\t\t\t     Enter password: ";
        cin >> password;
        if (customerList.login(username, password)) {
            cout << "\n\t\t\t\t\t        Login successful!" << endl;
            Customer customer = customerList.getCustomer(username);
            Sleep(1000);
            d.log_in();
            system ("cls");
            char choice8 = '-';
             while (choice8 != '0') {
                d.customer_page();
                cout << "\n\t\t\t\t\t     Enter your choice: ";
                cin >> choice8;
                switch (choice8)
                { //Customer Portal (Account Details, Transfer Money,Apply for Loan, Withdraw & Deposit, Display Balance, Customer Support (Add query), Logout)
                case '1': //Account Details
                    {
                        customer.displayCustomer();
                        system("pause");
                        break;
                    }
                case '2': //Transfer Money
                    {
                        string receiver;
                        float amount;
                        cin.ignore();
                        cout << "\n\t\t\t\t\t     Enter receiver username: ";
                        getline(cin, receiver);
                        Customer receiverCustomer = customerList.getCustomer(receiver);
                        cout << "\t\t\t\t\t     Enter amount: ";
                        cin >> amount;
                        if (amount > customer.getBalance()) {
                            system("color 04");
                            cout << "\n\t\t\t\t\t     Insufficient balance!" << endl;
                            system("pause");
                            break;
                        }
                        if (customerList.getCustomer(receiver).getUsername() == "") {
                            system("color 04");
                            cout << "\n\t\t\t\t\t     Receiver not found!" << endl;
                            system("pause");
                            break;
                        }
                        float newBalance = customer.getBalance() - amount;
                        customer.setBalance(newBalance);
                        customerList.updateCustomer(username, customer);

                        float receiverNewBalance = receiverCustomer.getBalance() + amount;
                        receiverCustomer.setBalance(receiverNewBalance);
                        customerList.updateCustomer(receiver, receiverCustomer);
                        system("color 02");

                        cout << "\n\t\t\t\t\t     Amount " << amount << " has been transferred successfully!" << endl;
                        system("pause");
                        system("color 07");
                        break;
                    }
                case '3': //Apply for Loan (New Loan, Check Status)
                    {
                        char choice9 = '-'; 
                        while (choice9 != '0') {
                            d.apply_loan();
                            cout << "\n\t\t\t\t\t     Enter your choice: ";
                            cin >> choice9;
                        switch (choice9)
                            {
                            case '1': //New Loan
                                {
                                    cin.ignore();
                                    float amount;
                                    cout << "\n\t\t\t\t\t     Enter loan amount: ";
                                    cin >> amount;
                                    loanQueue.enqueue(customer, "Pending", amount);
                                    system("color 02");
                                    cout << "\n\t\t\t\t\t     Loan request has been sent successfully!" << endl;
                                    system("pause");
                                    system("color 07");
                                    break;
                                }
                            case '2': //Check Status
                                {
                                    cin.ignore();
                                    loanQueue.displayCustomerLoans(customer.getUsername());
                                    system("pause");
                                    break;
                                }
                            case '0': //Back to Customer Portal
                                {
                                    cin.ignore();
                                    break;
                                }
                            default: //Invalid choice
                                {
                                    system("color 04");
                                    cout << "\n\t\t\t\t\t     Invalid choice!" << endl;
                                    system("pause");
                                    break;
                                }
                            }
                        }
                        break;
                    }
                case '4': //Withdraw & Deposit
                    {
                        cin.ignore();
                        char choice10 = '-';
                        while (choice10 != '0') {
                            d.withdraw_deposit();
                            cout << "\n\t\t\t\t\t     Enter your choice: ";
                            cin >> choice10;
                            switch (choice10)
                            {
                            case '1': //Withdraw
                                {
                                    cin.ignore();
                                    float amount;
                                    cout << "\n\t\t\t\t\t     Enter amount: ";
                                    cin >> amount;
                                    if (amount > customer.getBalance()) {
                                        system("color 04");
                                        cout << "\n\t\t\t\t\t     Insufficient balance!" << endl;
                                        system("pause");
                                        break;
                                    }
                                    float newBalance = customer.getBalance() - amount;
                                    customer.setBalance(newBalance);
                                    customerList.updateCustomer(username, customer);
                                    system("color 02");
                                    cout << "\n\t\t\t\t\t     Amount " << amount << " has been withdrawn successfully!" << endl;
                                    system("pause");
                                    system("color 07");
                                    break;
                                }
                            case '2': //Deposit
                                {
                                    cin.ignore();
                                    float amount;
                                    cout << "\n\t\t\t\t\t     Enter amount: ";
                                    cin >> amount;
                                    float newBalance = customer.getBalance() + amount;
                                    customer.setBalance(newBalance);
                                    customerList.updateCustomer(username, customer);
                                    system("color 02");
                                    cout << "\n\t\t\t\t\t     Amount " << amount << " has been deposited successfully!" << endl;
                                    system("pause");
                                    system("color 07");
                                    break;
                                }
                            case '0': //Back to Customer Portal
                                {
                                    cin.ignore();
                                    break;
                                }
                            default: //Invalid choice
                                {
                                    system("color 04");
                                    cout << "\n\t\t\t\t\t     Invalid choice!" << endl;
                                    system("pause");
                                    break;
                                }
                            break;
                            }
                        }
                        break;
                    }
                case '5': //Display Balance
                    {
                    customer.displayBalance();
                    system("pause");
                    break;
                }
                case '0': //Logout of Customer
                    {
                        cin.ignore();
                        cout << "\n\t\t\t\t\t        Logout successful!" << endl;
                        Sleep(1000);
                        d.log_out();
                        break;
                    }
                default: //Invalid choice
                    {
                        cin.ignore();
                        system("color 04");
                        cout << "\n\t\t\t\t\t     Invalid choice!" << endl;
                        system("pause");
                        break;
                    }
                }
            }  
        }
        else { //Invalid username or password
            system("color 04");
            cout << "\n\t\t\t\t\t     Invalid username or password!" << endl;
            system("pause");
            break;
        }
        break;
    }
    case '3': //Loan Manager 
    {
        string username, password;
        cin.ignore();
        cout << "\n\t\t\t\t\t     Enter username: ";
        cin >> username;
        cout << "\t\t\t\t\t     Enter password: ";
        cin >> password;
        if (loanManagerlist.login(username, password)) {
            cout << "\n\t\t\t\t\t        Login successful!" << endl;
            LoanManager loanManager = loanManagerlist.getLoanManager(username);
            Sleep(1000);
            d.log_in();
            system ("cls");
            char choice11 = '-';
            while (choice11 != '0') {
                d.loan_manager_page();
                cout << "\n\t\t\t\t\t     Enter your choice: ";
                cin >> choice11;
                switch (choice11)
                {
                case '1': //View Loan Requests
                    {
                        loanQueue.displayLoans();
                        system("pause");
                        break;
                    }
                case '2': //Approve Loan Requests
                    {
                        cin.ignore();
                        string customerUsername;
                        cout << "\n\t\t\t\t\t     Enter customer username: ";
                        getline(cin, customerUsername);
                        LoansQueueNode *loan = loanQueue.dequeue();
                        Customer customer = loan->customer;
                        customer.setBalance(customer.getBalance() + loan->amount);
                        customerList.updateCustomer(customer.getUsername(), customer);
                        system("color 02");
                        cout << "\n\t\t\t\t\t     Loan request has been approved successfully!" << endl;
                        system("pause");
                        system("color 07");
                        break;
                    }
                case '3': //Reject Loan Requests
                    {
                        cin.ignore();
                        LoansQueueNode *loan = loanQueue.dequeue();
                        system("color 02");
                        cout << "\n\t\t\t\t\t     Loan request has been rejected successfully!" << endl;
                        system("pause");
                        system("color 07");
                        break;
                    }
                case '0': //Logout of Loan Manager
                    {
                        cin.ignore();
                        cout << "\n\t\t\t\t\t        Logout successful!" << endl;
                        Sleep(1000);
                        d.log_out();
                        break;
                    }
                default: //Invalid choice
                    {
                        cin.ignore();
                        system("color 04");
                        cout << "\n\t\t\t\t\t     Invalid choice!" << endl;
                        system("pause");
                        break;
                    }
                }
            }
        }
        else { //Invalid username or password
            system("color 04");
            cout << "\n\t\t\t\t\t     Invalid username or password!" << endl;
            system("pause");
            break;
        }

        break;
    }
    case '0':
        {
        cin.ignore();
        d.system_exit();
        system ("color 07");
        break;
    }
    default:
        {
        system("color 04");
        cout << "\n\t\t\t\t\t     Invalid choice!" << endl;
        system("pause");
        break;
    }
    }
}
    return  0;
}
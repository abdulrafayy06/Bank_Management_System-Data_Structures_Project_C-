#ifndef CUSTOMER_H
#define CUSTOMER_H

#include<iostream> 
#include<string>
#include "User.h"
using namespace std;

class Customer : public User
{
private:
    static int nextaccountno;
    int accountno;
    float balance;

public:
    Customer() : User() {
        balance = 0.0;
        accountno = ++nextaccountno;
    };
    Customer(string username, string password, string cnic, string name, string address, string phone, string email, float balance) : User(username, password, cnic, name, address, phone, email) {
        this->accountno = ++nextaccountno;
        this->balance = balance;
    };

    void displayCustomer() {
        cout << "--------CUSTOMER DETAILS-----------" << endl;
        cout << "Username: " << getUsername() << endl;
        cout << "Password: " << getPassword() << endl;
        cout << "CNIC: " << getCnic() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Address: " << getAddress() << endl;
        cout << "Account No: " << getAccountNo() << endl;
        cout << "Phone: " << getPhone() << endl;
        cout << "Email: " << getEmail() << endl;
        cout << "Balance: " << getBalance() << endl;
        cout << "--------------------------------" << endl;
    }

    float getBalance() {
        return balance;
    }

    void setBalance(float balance) {
        this->balance = balance;
    }

    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }

    void deposit(float amount) {
        balance += amount;
    }

    void withdraw(float amount) {
        balance -= amount;
    }

    void transfer(float amount, Customer customer) {
        balance -= amount;
        customer.deposit(amount);
    }

    void setAccountNo(int accountno) {
        this->accountno = accountno;
    }

    int getAccountNo() {
        return accountno;
    }
};
int Customer::nextaccountno = 0;

#endif
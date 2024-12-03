//Stack to store the history of the Loan Manager 

#ifndef HISTORYSTACKLOAN_H
#define HISTORYSTACKLOAN_H


#include <iostream>
#include <string>
#include "Customer.h"

using namespace std;

class StackNodeLoan {   
    public:
    Customer customer;
    string status;
    StackNodeLoan *next;

    StackNodeLoan() {
        customer = Customer();
        status = "NULL";
        next = NULL;
    }
};

class HistoryStackLoan
{
public:
    StackNodeLoan *top;
    int size;

    HistoryStackLoan()
    {
        top = NULL;
        size = 0;
    }

    void push(StackNodeLoan *node)
    {
        if (top == NULL)
        {
            top = node;
        }
        else
        {
            node->next = top;
            top = node;
        }
        size++;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "\n\t\tStack is empty!" << endl;
        }
        else
        {
            StackNodeLoan *temp = top;
            top = top->next;
            delete temp;
            size--;
        }
    }

    void displayHistory()
    {
        StackNodeLoan *current = top;
        while (current != NULL)
        {
            cout << "\n\t----------------------------- " << endl;
            cout << "\n\t\tCustomer Name: " << current->customer.getName() << endl;
            cout << "\n\t\tCustomer AccountNo: " << current->customer.getAccountNo() << endl;
            cout << "\n\t\tCustomer Username: " << current->customer.getUsername() << endl;
            cout << "\n\t\tStatus: " << current->status << endl;
            current = current->next;
        }
    }
};

#endif
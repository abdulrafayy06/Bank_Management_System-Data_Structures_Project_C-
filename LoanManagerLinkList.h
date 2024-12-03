#include<iostream>
#include<string>
#include "LoanManager.h"

using namespace std;

class LoanManagerNode {
    public:
    LoanManager loanManager;
    LoanManagerNode *next;

    LoanManagerNode() {
        loanManager = LoanManager();
        next = NULL;
    }
};

class LoanManagerLinkList {
    public:
    LoanManagerNode *head;
    LoanManagerNode *tail;
    int size;

    LoanManagerLinkList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void addLoanManager(LoanManager loanManager) {
        LoanManagerNode *newNode = new LoanManagerNode();
        newNode->loanManager = loanManager;
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
        cout << "\n\t\tLoan Manager " << loanManager.getName() << " has been added successfully!" << endl;
    }

    void displayLoanManagers() {
        LoanManagerNode *current = head;
        while (current != NULL) {
            current->loanManager.displayLoanManager();
            current = current->next;
        }
    }

    //login function
    bool login(string username, string password) {
        LoanManagerNode *current = head;
        while (current != NULL) {
            if (current->loanManager.getUsername() == username && current->loanManager.getPassword() == password) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    LoanManager getLoanManager(string username) {
        LoanManagerNode *current = head;
        while (current != NULL) {
            if (current->loanManager.getUsername() == username) {
                return current->loanManager;
            }
            current = current->next;
        }
        return LoanManager();
    }


    void searchLoanManager(string username) {
        LoanManagerNode *current = head;
        while (current != NULL) {
            if (current->loanManager.getUsername() == username) {
                current->loanManager.displayLoanManager();
                return;
            }
            current = current->next;
        }
        cout << "\n\t\tLoan Manager " << username << " not found!" << endl;
    }

    void deleteLoanManager(string username) {
        LoanManagerNode *current = head;
        LoanManagerNode *previous = NULL;
        while (current != NULL) {
            if (current->loanManager.getUsername() == username) {
                if (previous == NULL) {
                    head = current->next;
                }
                else {
                    previous->next = current->next;
                }
                size--;
                delete current;
                cout << "\n\t\tLoan Manager " << username << " has been deleted successfully!" << endl;
                return;
            }
            previous = current;
            current = current->next;
        }
        cout << "\n\t\tLoan Manager " << username << " not found!" << endl;
    }

    void updateLoanManager(string username, LoanManager loanManager) {
        LoanManagerNode *current = head;
        while (current != NULL) {
            if (current->loanManager.getUsername() == username) {
                current->loanManager = loanManager;
                cout << "\n\t\tLoan Manager " << username << " has been updated successfully with new details!" << endl;
                return;
            }
            current = current->next;
        }
        cout << "\n\t\tLoan Manager " << username << " not found!" << endl;
    }
};
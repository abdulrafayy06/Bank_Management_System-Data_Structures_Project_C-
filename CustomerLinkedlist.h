#include <iostream>
#include <string>
#include "CustomerNode.h"
using namespace std;

class CustomerLinkedlist
{
public:
    CustomerNode *head;
    CustomerNode *tail;
    int size;

    CustomerLinkedlist()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void addCustomer(Customer customer)
    {
        CustomerNode *newNode = new CustomerNode(customer);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
        cout << "\n\t\tAccount for " << customer.getName() << " has been created successfully!" << endl;
    }

    void displayCustomers()
    {
        CustomerNode *current = head;
        while (current != NULL)
        {
            cout << "\n\t----------------------------- " << endl;
            cout << "\n\t\tAccount No: " << current->customer.getAccountNo() << endl;
            cout << "\n\t\tUsername: " << current->customer.getUsername() << endl;
            cout << "\t\tCNIC: " << current->customer.getCnic() << endl;
            cout << "\t\tName: " << current->customer.getName() << endl;
            cout << "\t\tAddress: " << current->customer.getAddress() << endl;
            cout << "\t\tPhone: " << current->customer.getPhone() << endl;
            cout << "\t\tEmail: " << current->customer.getEmail() << endl;
            cout << "\t\tBalance: " << current->customer.getBalance() << endl;
            current = current->next;
        }
    }

    //Get customer by username
    Customer getCustomer(string username)
    {
        CustomerNode *current = head;
        while (current != NULL)
        {
            if (current->customer.getUsername() == username)
            {
                return current->customer;
            }
            current = current->next;
        }
        return Customer();
    }

    //Delete Customer by account number
    void deleteCustomerByAccountNo(int accountno)
    {
        CustomerNode *current = head;
        CustomerNode *previous = NULL;
        while (current != NULL)
        {
            if (current->customer.getAccountNo() == accountno)
            {
                if (previous == NULL)
                {
                    head = current->next;
                }
                else
                {
                    previous->next = current->next;
                }
                size--;
                delete current;
                cout << "\n\t\tAccount for Account No " << accountno << " has been deleted successfully!" << endl;
                return;
            }
            previous = current;
            current = current->next;
        }
        cout << "\n\t\tAccount for Account No " << accountno << " not found!" << endl;
    }

    //Login Customer by username and password
    bool login(string username, string password)
    {
        CustomerNode *current = head;
        while (current != NULL)
        {
            if (current->customer.getUsername() == username && current->customer.getPassword() == password)
            {
                return true;
            }
            current = current->next;
        }
        return false;
    }


    //Delete Customer by cnic
    void deleteCustomerByCnic(string cnic)
    {
        CustomerNode *current = head;
        CustomerNode *previous = NULL;
        while (current != NULL)
        {
            if (current->customer.getCnic() == cnic)
            {
                if (previous == NULL)
                {
                    head = current->next;
                }
                else
                {
                    previous->next = current->next;
                }
                size--;
                delete current;
                cout << "\n\t\tAccount for " << cnic << " has been deleted successfully!" << endl;
                return;
            }
            previous = current;
            current = current->next;
            cout << "\n\t\tAccount for " << cnic << " not found!" << endl;
        }
    }

    //Delete Customer by username
    void deleteCustomer(string username)
    {
        CustomerNode *current = head;
        CustomerNode *previous = NULL;
        while (current != NULL)
        {
            if (current->customer.getUsername() == username)
            {
                if (previous == NULL)
                {
                    head = current->next;
                }
                else
                {
                    previous->next = current->next;
                }
                size--;
                delete current;
                cout << "\n\t\tAccount for " << username << " has been deleted successfully!" << endl;
                return;
            }
            previous = current;
            current = current->next;
            cout << "\n\t\tAccount for " << username << " not found!" << endl;
        }
    }

    //Update Customer by username
    void updateCustomer(string username, Customer customer)
    {
        CustomerNode *current = head;
        while (current != NULL)
        {
            if (current->customer.getUsername() == username)
            {
                current->customer = customer;
                cout << "\n\t\tAccount for " << username << " has been updated successfully!" << endl;
                return;
            }
            current = current->next;
        }
        cout << "\n\t\tAccount for " << username << " not found!" << endl;
    }

    //Update Customer by cnic
    void updateCustomerByCnic(string cnic, Customer customer)
    {
        CustomerNode *current = head;
        while (current != NULL)
        {
            if (current->customer.getCnic() == cnic)
            {
                current->customer = customer;
                cout << "\n\t\tAccount for " << cnic << " has been updated successfully!" << endl;
                return;
            }
            current = current->next;
        }
        cout << "\n\t\tAccount for " << cnic << " not found!" << endl;
    }

    

    //Binary Search Customer by username
    void searchCustomer(string username)
    {   
        sortCustomers();
        CustomerNode *current = head;
        while (current != NULL)
        {
            if (current->customer.getUsername() == username)
            {
                current->customer.displayCustomer();
            }
            current = current->next;
        }
        cout << "\n\t\tAccount for username " << username << " not found!" << endl;
    }
    
    //Search Customer by account number
    Customer searchCustomerByAccountNo(int accountno)
    {
        CustomerNode *current = head;
        while (current != NULL)
        {
            if (current->customer.getAccountNo() == accountno)
            {
                return current->customer;
            }
            current = current->next;
        }
        cout << "\n\t\tAccount for Account No " << accountno << " not found!" << endl;
        return Customer();
    }

    //Update Customer by account number
    void updateCustomerByAccountNo(int accountno, Customer customer)
    {
        CustomerNode *current = head;
        while (current != NULL)
        {
            if (current->customer.getAccountNo() == accountno)
            {
                current->customer = customer;
                cout << "\n\t\tAccount for Account No " << accountno << " has been updated successfully!" << endl;
                return;
            }
            current = current->next;
        }
        cout << "\n\t\tAccount for Account No " << accountno << " not found!" << endl;
    }
    
    //Withdraw money from customer account
    void withdrawMoney(int accountno, float amount)
    {
        Customer customer = searchCustomerByAccountNo(accountno);
        if (customer.getBalance() >= amount)
        {
            customer.withdraw(amount);
            updateCustomerByAccountNo(accountno, customer);
            cout << "\n\t\tAmount " << amount << " has been withdrawn successfully!" << endl;
        }
        else
        {
            cout << "\n\t\tInsufficient balance!" << endl;
        }
    }

    //Deposit money to customer account
    void depositMoney(int accountno, float amount)
    {
        Customer customer = searchCustomerByAccountNo(accountno);
        customer.deposit(amount);
        updateCustomerByAccountNo(accountno, customer);
        cout << "\n\t\tAmount " << amount << " has been deposited successfully!" << endl;
    }

    //Linear Search Customer by cnic
    void searchCustomerByCnic(string cnic)
    {
        CustomerNode *current = head;
        while (current != NULL)
        {
            if (current->customer.getCnic() == cnic)
            {
                current->customer.displayCustomer();
            }
            current = current->next;
        }
        cout << "\n\t\tAccount for CNIC" << cnic << " not found!" << endl;
    }

    //Bubble Sort Customers by username
    void sortCustomers()
    {
        CustomerNode *current = head;
        Customer temp;
        while (current != NULL)
        {
            CustomerNode *next = current->next;
            while (next != NULL)
            {
                if (current->customer.getUsername() > next->customer.getUsername())
                {
                    temp = current->customer;
                    current->customer = next->customer;
                    next->customer = temp;
                }
                next = next->next;
            }
            current = current->next;
        }
        cout << "\n\t\tCustomers have been sorted successfully!" << endl;
    }
};
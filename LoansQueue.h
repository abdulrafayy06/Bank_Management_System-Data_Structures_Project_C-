#include <iostream>
#include <string>

using namespace std;

class LoansQueueNode {
    public:
    Customer customer;
    float amount;
    string status;
    LoansQueueNode *next;  // Correct pointer type

    LoansQueueNode(Customer customer, string status = "NULL") {
        this->customer = customer;
        this->amount = 0;
        this->status = status;
        this->next = nullptr;
    }
};

class LoansQueue {
    public:
    LoansQueueNode *front;
    LoansQueueNode *rear;
    int size;

    LoansQueue() {
        front = nullptr;
        rear = nullptr;
        size = 0;
    }

    void enqueue(Customer customer, string status = "NULL") {
        LoansQueueNode *node = new LoansQueueNode(customer, status);
        if (front == nullptr) {
            front = node;
            rear = node;
        } else {
            rear->next = node;
            rear = node;
        }
        size++;
    }

    LoansQueueNode *dequeue() {
        if (front == nullptr) {
            cout << "\n\t\tQueue is empty!" << endl;
            return nullptr;
        } else {
            LoansQueueNode *temp = front;
            front = front->next;
            if (front == nullptr) {
                rear = nullptr;
            }
            size--;
            return temp;
        }
    }

    //Display all loan requests
    void displayLoans() {
        LoansQueueNode *current = front;
        while (current != nullptr) {
            cout << "\n\t----------------------------- " << endl;
            cout << "\n\t\tCustomer Name: " << current->customer.getName() << endl;
            cout << "\t\tCustomer AccountNo: " << current->customer.getAccountNo() << endl;
            cout << "\t\tCustomer Username: " << current->customer.getUsername() << endl;
            cout << "\t\tStatus: " << current->status << endl;
            current = current->next;
        }
    }

    //Display only particlar customer loan requests
    void displayCustomerLoans(string username) {
        LoansQueueNode *current = front;
        while (current != nullptr) {
            if (current->customer.getUsername() == username) {
                cout << "\n\t----------------------------- " << endl;
                cout << "\n\t\tCustomer Name: " << current->customer.getName() << endl;
                cout << "\t\tCustomer AccountNo: " << current->customer.getAccountNo() << endl;
                cout << "\t\tCustomer Username: " << current->customer.getUsername() << endl;
                cout << "\t\tStatus: " << current->status << endl;
            }
            current = current->next;
        }
    }

    void enqueue(Customer customer, string status, float amount) {
        LoansQueueNode *node = new LoansQueueNode(customer, status);
        if (front == nullptr) {
            front = node;
            rear = node;
        } else {
            rear->next = node;
            rear = node;
        }
        size++;
    }

    //Display all loan requests

    void displayQueue() {
        LoansQueueNode *current = front;
        while (current != nullptr) {
            cout << "\n\t----------------------------- " << endl;
            cout << "\n\t\tCustomer Name: " << current->customer.getName() << endl;
            cout << "\t\tCustomer AccountNo: " << current->customer.getAccountNo() << endl;
            cout << "\t\tCustomer Username: " << current->customer.getUsername() << endl;
            cout << "\t\tStatus: " << current->status << endl;
            current = current->next;
        }
    }
};
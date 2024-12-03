#include <iostream>
#include <string>
#include "Customer.h"
using namespace std;

class CustomerNode
{
public:
    Customer customer;
    CustomerNode *next;
    CustomerNode(Customer customer)
    {
        this->customer = customer;
        this->next = NULL;
    }
};
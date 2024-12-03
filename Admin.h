#include <iostream>
#include <string>
#include "User.h"
using namespace std;

class Admin : public User
{

public:
	Admin() : User() {};
	Admin(string username, string password) : User(username, password, "NULL", "Admin", "NULL", "NULL", "NULL") {};
	void displayAdmin() {
		cout << "--------ADMIN DETAILS-----------" << endl;
		cout << "Username: " << getUsername() << endl;
		cout << "Password: " << getPassword() << endl;
		cout << "CNIC: " << getCnic() << endl;
		cout << "Name: " << getName() << endl;
		cout << "Address: " << getAddress() << endl;
		cout << "Phone: " << getPhone() << endl;
		cout << "Email: " << getEmail() << endl;
		cout << "--------------------------------" << endl;
	}

	bool login(string username, string password) {
		if (username == getUsername() && password == getPassword()) {
			return true;
		}
		else {
			return false;
		}
	}
};
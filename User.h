#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using namespace std;

class User
{
private:
	string username;
	string password;
	string cnic;
	string name;
	string address;
	string phone;
	string email;

public:
	User() {
        username = "";
        password = "";
        cnic = "";
        name = "";
        address = "";
        phone = "";
        email = "";
    };
	User(string username, string password, string cnic, string name, string address, string phone, string email) {
        this->username = username;
        this->password = password;
        this->cnic = cnic;
        this->name = name;
        this->address = address;
        this->phone = phone;
        this->email = email;
    };


	string getUsername(){
        return username;
    };
	string getPassword() {
        return password;
    };
	string getCnic() {
        return cnic;
    };
	string getName() {
        return name;
    };
	string getAddress() {
        return address;
    };
	string getPhone() {
        return phone;
    };
	string getEmail() {
        return email;
    };

	void setUsername(string username){
        this->username = username;
    };
	void setPassword(string password) {
        this->password = password;
    };
	void setCnic(string cnic){
        this->cnic = cnic;
    };
	void setName(string name){
        this->name = name;
    };
	void setAddress(string address){
        this->address = address;
    };
	void setPhone(string phone){
        this->phone = phone;
    };
	void setEmail(string email){
        this->email = email;
    };
};

#endif
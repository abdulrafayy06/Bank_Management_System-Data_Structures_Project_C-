#include <iostream>
#include <string>

using namespace std;

class design {
private:
    char load = 219;
    char lod = 254;

public:

    // Function to print welcome page
    void welcome_page() {
        system("cls");
        system("color 0E");
		Sleep(500); // Sleep for 500 milliseconds
		cout << "\n";
		for (int i = 0; i < 119; i++) // Loop to print line
        {
			cout << lod;
		}
		Sleep(100);
        //Line 1: Welcome
		cout << "\n\n\n\t           " << lod << "         " << lod << "   " << lod << " " << lod << " " << lod << " " << lod << "    " << lod << "            " << lod << " " << lod << " " << lod << " " << lod << "        " << lod << "  " << lod << "       " << lod << "         " << lod << "   " << lod << " " << lod << " " << lod << " " << lod;
		Sleep(100);
        //Line 2: Welcome
		cout << "\n\t           " << lod << "         " << lod << "   " << lod << "          " << lod << "          " << lod << "             " << lod << "        " << lod << "    " << lod << " " << lod << "     " << lod << " " << lod << "   " << lod;
		Sleep(100);
        //Line 3: Welcome
		cout << "\n\t           " << lod << "    " << lod << "    " << lod << "   " << lod << "          " << lod << "         " << lod << "             " << lod << "          " << lod << "   " << lod << "  " << lod << "   " << lod << "  " << lod << "   " << lod;
		Sleep(100);
        //Line 4: Welcome
		cout << "\n\t           " << lod << "   " << lod << " " << lod << "   " << lod << "   " << lod << " " << lod << " " << lod << " " << lod << "    " << lod << "         " << lod << "             " << lod << "          " << lod << "   " << lod << "    " << lod << "    " << lod << "   " << lod << " " << lod << " " << lod << " " << lod;
		Sleep(100);
        //Line 5: Welcome
		cout << "\n\t           " << lod << "  " << lod << "   " << lod << "  " << lod << "   " << lod << "          " << lod << "         " << lod << "             " << lod << "          " << lod << "   " << lod << "         " << lod << "   " << lod;
		Sleep(100);
        //Line 6: Welcome
		cout << "\n\t           " << lod << " " << lod << "     " << lod << " " << lod << "   " << lod << "          " << lod << "          " << lod << "             " << lod << "        " << lod << "    " << lod << "         " << lod << "   " << lod;
		Sleep(100);
        //Line 7: Welcome
		cout << "\n\t           " << lod << "         " << lod << "   " << lod << " " << lod << " " << lod << " " << lod << "    " << lod << " " << lod << " " << lod << " " << lod << "      " << lod << " " << lod << " " << lod << " " << lod << "        " << lod << "  " << lod << "       " << lod << "         " << lod << "   " << lod << " " << lod << " " << lod << " " << lod << "\n\n";
		Sleep(100);
		cout << "\n\n";
		for (int i = 0; i < 119; i++) // Loop to print line 
        {
			cout << lod;
		}
		cout << "\n\t\t             " << load << "\t\t\t\t\t\t\t\t\t " << load;
		cout << "\n\t\t             " << load << "\t\t\t   ";
		string bank = "Bank Management System";
		for (int i = 0; i < bank.length(); i++) {
			Sleep(10);
			cout << bank[i];
		}
		cout << "\t\t\t " << load;
		cout << "\n\t\t             " << load << "\t\t\t\t\t\t\t\t\t " << load;
		cout << "\n\t\t             " << load;
		cout << "";
		for (int i = 0; i < 67; i++) {
			cout << lod;
		}
		cout << load;
		cout << "\n\t\t             " << load << "\t\t\t\t\t\t\t\t\t " << load;
		cout << "\n\t\t             " << load << "\t";
		string d = "\t\t\tTeam Members:";
		for (int i = 0; i < d.length(); i++) {
			Sleep(10);
			cout << d[i];
		}
        cout << "\t\t\t\t " << load<<endl;
		cout << "\t  ";
        cout << "\t\t     " << load << "\t\t   ";
		string a = "Abdul Rafay (54689) & Hassan Zahid (54481)";
		for (int i = 0; i < a.length(); i++) {
			Sleep(10);
			cout << a[i];
		}
		cout << "\t\t " << load;
		cout << "\n\t\t             " << load << "\t\t\t\t ";
		string co = "Course Name:";
		for (int i = 0; i < co.length(); i++) {
			Sleep(10);
			cout << co[i];
		}
        cout << "\t\t\t\t " << load;
        cout << "\n\t\t\t     " << load<< "\t\t\t       ";
		string c = "Data Structures";
		for (int i = 0; i < c.length(); i++) {
			Sleep(10);
			cout << c[i];
		}
		cout << "\t\t\t\t " << load;
		cout << "\n\t\t             " << load << "\t\t\t  ";
		string ins = "Theory and Lab Instructors:";
		for (int i = 0; i < ins.length(); i++) {
			Sleep(10);
			cout << ins[i];
		}
        cout << "\t\t\t " << load;
        cout << "\n\t\t             " << load<< "\t\t      ";
		string t = "Sir Waqar Arshad & Sir Hassaan Ali Shah";
		for (int i = 0; i < t.length(); i++) {
			Sleep(10);
			cout << t[i];
		}
		cout << "\t\t " << load;
		cout << "\n\t\t             " << load << "\t\t\t\t\t\t\t\t\t " << load<<endl;
		Sleep(20);
		for (int i = 0; i < 119; i++) {
			cout << lod;
		}
		Sleep(500);
		string uni = "Riphah International University I-14 Campus, Islamabad";
		cout << "\n\t\t\t\t";
		for (int i = 0; i < uni.length(); i++) {
			Sleep(30);
			cout << uni[i];
		}
		cout << "\n";
		Sleep(100);
		for (int i = 0; i < 119; i++) {
			cout << lod;
		}
		cout << endl;
        system("pause");
    }


    // Function to print customer management page
    void customer_management() {
        system("color 07");
        system("cls");
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   BANKING MANAGEMENT SYSTEM    " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load;
        for (int i = 0; i <= 31; i++)
        {
            cout << lod;
        }
        cout << load << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << " (1) Add Customer       " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << " (2) Delete Customer    " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << " (3) Display Customers  " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << " (4) Search Customer    " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << " (5) Sort Customers      " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << " (0) Back               " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
    }
    

    //Function to print Menu 
    void home_page() {
        system("color 07");
        system("cls");
		cout << "\n";
		cout << "\t\t\t\t\t";
		for (int i = 0; i <= 33; i++)
		{
			cout << load;
		}
		cout << "\n";
		cout << "\t\t\t\t\t" << load << "                                " << load << endl;
		cout << "\t\t\t\t\t" << load << "   BANKING MANAGEMENT SYSTEM    " << load << endl;
		cout << "\t\t\t\t\t" << load << "                                " << load << endl;
		cout << "\t\t\t\t\t" << load;
		for (int i = 0; i <= 31; i++)
		{
			cout << lod;
		}
		cout << load << "\n";
		cout << "\t\t\t\t\t" << load << "                                " << load << endl;
		cout << "\t\t\t\t\t" << load << "   ";
		for (int i = 0; i <= 25; i++)
		{
			cout << load;
		}
		cout << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   " << load << "       Login Form       " << load << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   ";
		for (int i = 0; i <= 25; i++)
		{
			cout << load;
		}
		cout << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "                                " << load << endl;
		cout << "\t\t\t\t\t" << load << "   ";
		for (int i = 0; i <= 25; i++)
		{
			cout << load;
		}
		cout << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   " << load << "  (1) Admin login       " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "  (2) Customer login    " << load << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   " << load << "  (3) LM Officier       " << load << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   " << load << "  (0) Exit Program      " << load << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   ";
		for (int i = 0; i <= 25; i++)
		{
			cout << load;
		}
		cout << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "                                " << load << endl;
		cout << "\t\t\t\t\t";
		for (int i = 0; i <= 33; i++)
		{
			cout << load;
		}
		cout << "\n";
	}

    void admin_page() {
        system("color 07");
        system("cls");
		cout << "\n";
		cout << "\t\t\t\t\t";
		for (int i = 0; i <= 33; i++)
		{
			cout << load;
		}
		cout << "\n";
		cout << "\t\t\t\t\t" << load << "                                " << load << endl;
		cout << "\t\t\t\t\t" << load << "   BANKING MANAGEMENT SYSTEM    " << load << endl;
		cout << "\t\t\t\t\t" << load << "                                " << load << endl;
		cout << "\t\t\t\t\t" << load;
		for (int i = 0; i <= 31; i++)
		{
			cout << lod;
		}
		cout << load << "\n";
		cout << "\t\t\t\t\t" << load << "                                " << load << endl;
		cout << "\t\t\t\t\t" << load << "   ";
		for (int i = 0; i <= 25; i++)
		{
			cout << load;
		}
		cout << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   " << load << "       Admin Portal     " << load << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   ";
		for (int i = 0; i <= 25; i++)
		{
			cout << load;
		}
		cout << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "                                " << load << endl;
		cout << "\t\t\t\t\t" << load << "   ";
		for (int i = 0; i <= 25; i++)
		{
			cout << load;
		}
		cout << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   " << load << "  (1) Customer          " << load << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   " << load << "  (2) Loan Managers     " << load << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   " << load << "  (0) Log out           " << load << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "   ";
		for (int i = 0; i <= 25; i++)
		{
			cout << load;
		}
		cout << "   " << load << endl;
		cout << "\t\t\t\t\t" << load << "                                " << load << endl;
		cout << "\t\t\t\t\t";
		for (int i = 0; i <= 33; i++)
		{
			cout << load;
		}
		cout << "\n";
    }

    //Function to print Customer Management Page by Admin (remove customer by username or cnic)
    void remove_customer() { 
        system("color 07");
        system("cls");
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   BANKING MANAGEMENT SYSTEM    " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load;
        for (int i = 0; i <= 31; i++)
        {
            cout << lod;
        }
        cout << load << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << " (1) Delete by CNIC     " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << " (2) Delete by Username " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << " (3) Delete by AccountNo" << load << "   " << load << endl;   
        cout << "\t\t\t\t\t" << load << "   " << load << " (0) Back               " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";   
    }

    //Function to print Customer Management Page by Admin (search customer by cnic or username)
    void search_customer () {
        system("color 07");
        system("cls");
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   BANKING MANAGEMENT SYSTEM    " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load;
        for (int i = 0; i <= 31; i++)
        {
            cout << lod;
        }
        cout << load << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << " (1) Search by CNIC     " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << " (2) Search by Username " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << " (3) Search by AccountNo" << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << " (0) Back               " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
    }

    //Function to print Customer Management Page by Admin (update customer by username or cnic)
    void update_customer() {
        system("color 07");
        system("cls");
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   BANKING MANAGEMENT SYSTEM    " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load;
        for (int i = 0; i <= 31; i++)
        {
            cout << lod;
        }
        cout << load << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << " (1) Update by CNIC " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << " (2) Update by Username " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << " (0) Back " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
    }

    //Function to print Loan Officiers Management Page by Admin
    void loan_manager() {
        system("color 07");
        system("cls");
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   BANKING MANAGEMENT SYSTEM    " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load;
        for (int i = 0; i <= 31; i++)
        {
            cout << lod;
        }
        cout << load << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(1) Add Loan Officer    " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(2) Remove Loan Officer " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(3) Display all Officers" << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(4) Search Loan Officer " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(5) Update Loan Officer " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(0) Back                " << load << "   " << load << endl;      
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
    }

    //Function to print Customer Support Management Page by Admin
    void customer_support() {
        system("color 07");
        system("cls");
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   BANKING MANAGEMENT SYSTEM    " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load;
        for (int i = 0; i <= 31; i++)
        {
            cout << lod;
        }
        cout << load << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(1) Add Support Staff   " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(2) Remove Support Staff" << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(3) Display all Staff   " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(4) Search Support Staff" << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(5) Update Support Staff" << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(0) Back                " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
    }

    void customer_page() {
        system("color 07");
        system("cls");
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   BANKING MANAGEMENT SYSTEM    " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load;
        for (int i = 0; i <= 31; i++)
        {
            cout << lod;
        }
        cout << load << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "       Customer Portal  " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "  (1) Account Details   " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "  (2) Transfer Money    " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "  (3) Apply for Loan    " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "  (4) Withdraw & Deposit" << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "  (5) Balance           " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "  (0) Log out           " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
    }

    //Function to print Customer Suppport Officer choices
    void customer_support_officer_page() {
        system("color 07");
        system("cls");
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   BANKING MANAGEMENT SYSTEM    " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load;
        for (int i = 0; i <= 31; i++)
        {
            cout << lod;
        }
        cout << load << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(1) View All Queries    " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(2) Change Query Status " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(3) Logout              " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
    }

    //Function to print Loan choices for customer
    void apply_loan() {
        system("color 07");
        system("cls");
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   BANKING MANAGEMENT SYSTEM    " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load;
        for (int i = 0; i <= 31; i++)
        {
            cout << lod;
        }
        cout << load << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(1) New Loan            " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(2) Loan Applications   " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(0) Back                " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
    }

    void loan_manager_page() {
        system("color 07");
        system("cls");
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   BANKING MANAGEMENT SYSTEM    " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load;
        for (int i = 0; i <= 31; i++)
        {
            cout << lod;
        }
        cout << load << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "       Loan Manager      " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "  (1) Loan Applications " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "  (2) Approve Loan       " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "  (3) Reject Loan        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "  (0) Log out            " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
    }

    //Function to print Withdraw & Deposit choices for customer
    void withdraw_deposit() {
        system("color 07");
        system("cls");
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   BANKING MANAGEMENT SYSTEM    " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load;
        for (int i = 0; i <= 31; i++)
        {
            cout << lod;
        }
        cout << load << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(1) Withdraw Money      " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(2) Deposit Money       " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(0) Back                " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
    }

    //Function to print Customer Support choices for customer
    void support_query() {
        system("color 07");
        system("cls");
        cout << "\n";
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   BANKING MANAGEMENT SYSTEM    " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load;
        for (int i = 0; i <= 31; i++)
        {
            cout << lod;
        }
        cout << load << "\n";
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(1) Raise Query         " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(2) Check Query Status  " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "(0) Back                " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   " << load << "                        " << load << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "   ";
        for (int i = 0; i <= 25; i++)
        {
            cout << load;
        }
        cout << "   " << load << endl;
        cout << "\t\t\t\t\t" << load << "                                " << load << endl;
        cout << "\t\t\t\t\t";
        for (int i = 0; i <= 33; i++)
        {
            cout << load;
        }
        cout << "\n";
    }

void log_in() {
        system("cls");
		system("color 02");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLoading account madules....\n\n";
		for (int i = 0; i < 40; i++)
		{
			Sleep(30);
			cout << load;
		}
		for (int i = 0; i < 30; i++)
		{
			Sleep(20);
			cout << load;
		}
		for (int i = 0; i < 30; i++)
		{
			Sleep(10);
			cout << load;
		}
		for (int i = 0; i < 20; i++)
		{
			cout << load;
		}
	}

    void printLine(int n, char c) {
        for (int i = 0; i < n; i++) {
            cout << c;
        }
        cout << endl;
    }

    void printHeader(string s) {
        printLine(50, '-');
        cout << s << endl;
        printLine(50, '-');
    }

    void printFooter() {
        printLine(50, '-');
    }

void log_out() {
        system("cls");
		system("color 02");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLog Out....\n\n";
		for (int i = 0; i < 40; i++)
		{
			Sleep(30);
			cout << load;
		}
		for (int i = 0; i < 30; i++)
		{
			Sleep(20);
			cout << load;
		}
		for (int i = 0; i < 30; i++)
		{
			Sleep(10);
			cout << load;
		}
		for (int i = 0; i < 20; i++)
		{
			cout << load;
		}
	}

void system_exit() {
        system("cls");
		system("color 02");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t     Exiting...Good Bye!\n\n";
		for (int i = 0; i < 40; i++)
		{
			Sleep(30);
			cout << load;
		}
		for (int i = 0; i < 30; i++)
		{
			Sleep(20);
			cout << load;
		}
		for (int i = 0; i < 30; i++)
		{
			Sleep(10);
			cout << load;
		}
		for (int i = 0; i < 20; i++)
		{
			cout << load;
		}
	}
};
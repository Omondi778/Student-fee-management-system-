C++
#include <iostream>
using namespace std;

class Student
{
    string name, admissionNumber;
    double feeBalance, payment;

public:

    // Function to input student details
    void inputStudent()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter admission number: ";
        cin >> admissionNumber;

        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    // Function to make fee payment
    void makePayment()
    {
        cout << "Enter amount to pay: ";
        cin >> payment;

        if (payment > 0 && payment <= feeBalance)
        {
            feeBalance = feeBalance - payment;
            cout << "Payment successful!" << endl;
        }
        else
        {
            cout << "Invalid payment amount!" << endl;
        }
    }

    // Function to display fee status
    void displayStatus()
    {
        cout << "\n------ STUDENT FEE STATUS ------" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Remaining Fee Balance: KSh " << feeBalance << endl;
    }
};

int main()
{
    Student s;

    s.inputStudent();

    s.makePayment();

    s.displayStatus();

    return 0;
}

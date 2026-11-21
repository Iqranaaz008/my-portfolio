#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int roll;
    int choice;

    cout << "=== Student Management System ===" << endl;
    cout << "Enter Student Name: ";
    getline(cin, name);
    cout << "Enter Roll No: ";
    cin >> roll;

    cout << "\n--- Student Added Successfully ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Roll No: " << roll << endl;
    cout << "Course: BCA" << endl;

    return 0;
}

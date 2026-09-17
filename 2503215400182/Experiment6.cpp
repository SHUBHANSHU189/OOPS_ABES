#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:

    // 1. Default Constructor
    Student() {
        roll = 0;
        name = "Unknown";
        cout << "Default constructor called" << endl;
    }

    // 2. Parameterized Constructor
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized constructor called" << endl;
    }

    // 3. Copy Constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        cout << "Copy constructor called" << endl;
    }

    // Display function
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {

    cout << "Creating student 1:" << endl;
    Student s1;
    s1.display();

    cout << "\nCreating student 2:" << endl;
    Student s2(101, "Rahul");
    s2.display();

    cout << "\nCreating student 3 by copying student 2:" << endl;
    Student s3 = s2;
    s3.display();

    cout << "\nEnd of main()" << endl;

    return 0;
}
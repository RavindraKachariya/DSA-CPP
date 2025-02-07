#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Constructor to initialize student details
    Student(string n, int r, float m)
    {
        name = n;
        rollNumber = r;
        marks = m;
    }

    // Function to display student details
    void displayDetails()
    {
        cout << "Student Name : " << name << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    // Creating an object of Student class
    Student student1("Ravindra", 101, 92.5);

    // Displaying details
    student1.displayDetails();

    return 0;
}

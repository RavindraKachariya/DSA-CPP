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
        cout << "Constructor called for " << name << endl;
    }

    // Destructor to clean up resources
    ~Student()
    {
        cout << "Destructor called for " << name << endl;
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
    // Creating an object of Student class (stack allocation)
    Student student1("Ravindra", 101, 92.5);
    student1.displayDetails();

    cout << endl;

    // Creating a heap-allocated object
    Student *student2 = new Student("Amit", 102, 88.3);
    student2->displayDetails();

    // Deleting the dynamically allocated object
    delete student2;

    return 0;
}

#include <iostream>
using namespace std;

// Base class for Addition
class Addition
{
public:
    int a, b;

    // Constructor to initialize values
    Addition(int x, int y)
    {
        a = x;
        b = y;
    }

    int add()
    {
        return a + b;
    }
};

// Base class for Subtraction
class Subtraction
{
public:
    int a, b;

    // Constructor to initialize values
    Subtraction(int x, int y)
    {
        a = x;
        b = y;
    }

    int subtract()
    {
        return a - b;
    }
};

// Derived class inheriting from both Addition and Subtraction
class Calculator : public Addition, public Subtraction
{
public:
    // Constructor initializing both base classes
    Calculator(int x, int y) : Addition(x, y), Subtraction(x, y) {}

    void displayResults()
    {
        cout << "Addition : " << add() << endl;
        cout << "Subtraction : " << subtract() << endl;
    }
};

int main()
{
    Calculator obj(50, 20);
    obj.displayResults();
    return 0;
}

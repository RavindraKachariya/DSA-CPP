#include <iostream>
using namespace std;

// Base class for Addition
class Addition
{
public:
    int num1, num2;

    // Constructor to initialize values
    Addition(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    int add()
    {
        return num1 + num2;
    }
};

// Intermediate class for Subtraction (inherits from Addition)
class Subtraction : public Addition
{
public:
    // Constructor calling base class constructor
    Subtraction(int a, int b) : Addition(a, b) {}

    int subtract()
    {
        return num1 - num2;
    }
};

// Derived class for Multiplication (inherits from Subtraction)
class Multiplication : public Subtraction
{
public:
    // Constructor calling Subtraction class constructor
    Multiplication(int a, int b) : Subtraction(a, b) {}

    int multiply()
    {
        return num1 * num2;
    }
};

int main()
{
    Multiplication obj(10, 5);
    cout << "Addition: " << obj.add() << endl;
    cout << "Subtraction: " << obj.subtract() << endl;
    cout << "Multiplication: " << obj.multiply() << endl;
    return 0;
}

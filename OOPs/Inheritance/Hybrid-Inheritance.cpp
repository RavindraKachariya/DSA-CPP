#include <iostream>
using namespace std;

// Base class (Parent)
class Arithmetic
{
public:
    int num1, num2;

    // Constructor to initialize values
    Arithmetic(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    int add()
    {
        return num1 + num2;
    }
};

// Intermediate class (inherits Arithmetic)
class Subtraction : public Arithmetic
{
public:
    // Constructor calling base class constructor
    Subtraction(int a, int b) : Arithmetic(a, b) {}

    int subtract()
    {
        return num1 - num2;
    }
};

// Another base class (Independent class)
class Multiplication
{
public:
    int multiply(int a, int b)
    {
        return a * b;
    }
};

// Derived class (inherits from both Subtraction and Multiplication)
class Calculator : public Subtraction, public Multiplication
{
public:
    // Constructor calling Subtraction class constructor
    Calculator(int a, int b) : Subtraction(a, b) {}

    void displayResults()
    {
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply(num1, num2) << endl;
    }
};

int main()
{
    Calculator obj(10, 5);
    obj.displayResults();
    return 0;
}

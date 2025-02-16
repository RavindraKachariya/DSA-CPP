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

// Derived class 1 (inherits Arithmetic)
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

// Derived class 2 (inherits Arithmetic)
class Multiplication : public Arithmetic
{
public:
    // Constructor calling base class constructor
    Multiplication(int a, int b) : Arithmetic(a, b) {}

    int multiply()
    {
        return num1 * num2;
    }
};

int main()
{
    Subtraction obj1(20, 10);
    Multiplication obj2(20, 10);

    cout << "Addition : " << obj1.add() << endl;
    cout << "Subtraction : " << obj1.subtract() << endl;
    cout << "Multiplication : " << obj2.multiply() << endl;

    return 0;
}

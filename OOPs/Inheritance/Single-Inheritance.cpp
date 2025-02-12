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

// Derived class for Subtraction
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

int main()
{
    Subtraction obj(20, 10);
    cout << "Addition : " << obj.add() << endl;
    cout << "Subtraction : " << obj.subtract() << endl;
    return 0;
}

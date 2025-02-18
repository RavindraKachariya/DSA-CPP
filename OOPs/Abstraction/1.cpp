#include <iostream>
using namespace std;

// Abstract class
class Sum
{
public:
    // Pure virtual function
    virtual int add(int a, int b) = 0;
};

// Derived class implementing the abstraction
class Calculate : public Sum
{
public:
    int add(int a, int b) override
    {
        return a + b;
    }
};

int main()
{
    // Create an object of the derived class
    Sum *obj = new Calculate();

    // Call the add function
    int result = obj->add(10, 20);

    cout << "Sum : " << result << endl; // Output: Sum: 30

    delete obj; // Free memory
    return 0;
}

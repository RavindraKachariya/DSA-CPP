#include <iostream>
using namespace std;

// Compile-time Polymorphism : Function Overloading
class Math
{
public:
    // Overloaded functions (same name, different parameters)
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

// Base class
class Animal
{
public:
    virtual void sound()
    { // Virtual function (Overridden)
        cout << "Animals make sounds!" << endl;
    }
};

// Derived class (Overriding sound method)
class Dog : public Animal
{
public:
    void sound() override
    { // Function Overriding (Runtime Polymorphism)
        cout << "Dog barks!" << endl;
    }
};

// Derived class (Overriding sound method)
class Cat : public Animal
{
public:
    void sound() override
    {
        cout << "Cat meows!" << endl;
    }
};

int main()
{
    // Demonstrating Function Overloading
    Math math;
    cout << "Sum (int) : " << math.add(5, 10) << endl;
    cout << "Sum (double) : " << math.add(5.5, 2.2) << endl;
    cout << "Sum (3 integers) : " << math.add(1, 2, 3) << endl;

    // Demonstrating Function Overriding
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();

    animal1->sound(); // Calls Dog's sound()
    animal2->sound(); // Calls Cat's sound()

    delete animal1;
    delete animal2;

    return 0;
}

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    // Inserting elements
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10); // Duplicate, will not be inserted

    // Printing the set
    cout << "Set elements: ";
    for (int x : s)
    {
        cout << x << " ";
    }
    cout << endl;

    // Finding an element
    if (s.find(10) != s.end())
    {
        cout << "10 is present in the set" << endl;
    }
    else
    {
        cout << "10 is not in the set" << endl;
    }

    // Erasing an element
    s.erase(5);
    cout << "After erasing 5: ";
    for (int x : s)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

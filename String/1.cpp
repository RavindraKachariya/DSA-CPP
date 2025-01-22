#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    cin >> str;

    cout << str[0] << endl; // first letter print in string

    for (char c : str)
    {
        cout << c;
    }

    return 0;
}

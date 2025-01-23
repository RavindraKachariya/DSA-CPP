// Reverse a String

#include <iostream>
#include <string>
using namespace std;

string reverseString(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
    return str;
}

int main()
{
    cout << "Reverse String : " << reverseString("hello") << endl;
    return 0;
}

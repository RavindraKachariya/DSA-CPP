#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    string str = "racecar";
    unordered_map<char, int> myMap;

    for (char c : str)
    {
        myMap[c]++;
    }

    int count = 0;

    for (auto pair : myMap)
    {
        if (pair.second % 2 != 0)
        {
            count++;
        }
    }

    if (count < 2)
    {
        cout << "We can make a Palindrome" << endl;
    }
    else
    {
        cout << "We can't make a Palindrome" << endl;
    }

    return 0;
}

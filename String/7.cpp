// Generate All Substrings of a String

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> generateSubstrings(string str)
{
    vector<string> substrings;
    for (size_t i = 0; i < str.length(); i++)
    {
        string sub = "";
        for (size_t j = i; j < str.length(); j++)
        {
            sub += str[j];
            substrings.push_back(sub);
        }
    }
    return substrings;
}

int main()
{
    vector<string> substrings = generateSubstrings("abc");
    cout << "Substrings of abc : ";
    for (string sub : substrings)
    {
        cout << sub << " ";
    }
    cout << endl;
    return 0;
}

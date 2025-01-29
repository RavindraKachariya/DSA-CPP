// Generate All Substrings of a String

#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPalindrome(string str)
{
    int start = 0, end = str.length() - 1;
    while (start < end)
    {
        if (str[start] != str[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

vector<string> generateSubstrings(string str)
{
    vector<string> substrings;
    for (int i = 0; i < str.length(); i++)
    {
        string substr = "";
        for (int j = i; j < str.length(); j++)
        {
            substr += str[j];
            substrings.push_back(substr);
        }
    }
    return substrings;
}

int main()
{
    string input = "abc";
    vector<string> substrings = generateSubstrings(input);

    cout << "Substrings of " << input << ": ";
    for (string sub : substrings)
    {
        cout << sub << " ";
    }
    cout << endl;

    int count = 0;
    for (string sub : substrings)
    {
        if (isPalindrome(sub))
        {
            count++;
        }
    }

    cout << "Count of palindromic substrings: " << count << endl;

    int maxLength = 0;
    string longestPalindrome = "";

    for (string sub : substrings)
    {
        if (isPalindrome(sub) && sub.length() > maxLength)
        {
            maxLength = sub.length();
            longestPalindrome = sub;
        }
    }

    cout << "Longest palindromic substring: " << longestPalindrome << endl;

    return 0;
}

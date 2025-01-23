// Check if Two Strings are Anagrams

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool areAnagrams(string str1, string str2)
{
    if (str1.length() != str2.length())
        return false;

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}

int main()
{
    cout << "Are Anagrams (listen, silent) : " << (areAnagrams("listen", "silent") ? "True" : "False") << endl;
    cout << "Are Anagrams (hello, world) : " << (areAnagrams("hello", "world") ? "True" : "False") << endl;
    return 0;
}

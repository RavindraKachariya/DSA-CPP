// Count the Vowel & Consonant in String

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    cin >> str;

    int Vcount = 0;
    int Ccount = 0;

    for (char c : str)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            Vcount++;
        }
        else
        {
            Ccount++;
        }
    }

    cout << "Vowel : " << Vcount << endl;
    cout << "Consonant : " << Ccount << endl;

    return 0;
}

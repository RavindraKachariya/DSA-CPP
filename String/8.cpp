#include <iostream>
#include <string>

using namespace std;

string convertString(const string &input)
{
    string word, result;
    for (size_t i = 0; i < input.length(); ++i)
    {
        if (isspace(input[i]))
        {
            if (!word.empty())
            {
                // Process the word and add it to the result
                if (islower(word[0]))
                {
                    word[0] = toupper(word[0]);
                }
                else if (isupper(word[0]))
                {
                    word[0] = tolower(word[0]);
                }
                result += word + " ";
                word.clear();
            }
        }
        else
        {
            word += input[i];
        }
    }

    // Process the last word
    if (!word.empty())
    {
        if (islower(word[0]))
        {
            word[0] = toupper(word[0]);
        }
        else if (isupper(word[0]))
        {
            word[0] = tolower(word[0]);
        }
        result += word;
    }

    return result;
}

int main()
{
    string input = "rect Js Hello";
    string output = convertString(input);

    cout << "Original string: " << input << endl;
    cout << "Converted string: " << output << endl;

    return 0;
}
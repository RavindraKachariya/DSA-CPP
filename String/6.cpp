// Reverse Words in a Sentence

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string reverseWords(string sentence)
{
    vector<string> words;
    string word = "";
    for (char c : sentence)
    {
        if (c == ' ')
        {
            words.push_back(word);
            word = "";
        }
        else
        {
            word += c;
        }
    }
    words.push_back(word); // Add the last word

    reverse(words.begin(), words.end());

    string reversedSentence = "";
    for (size_t i = 0; i < words.size(); i++)
    {
        reversedSentence += words[i];
        if (i != words.size() - 1)
            reversedSentence += " ";
    }
    return reversedSentence;
}

int main()
{
    cout << "Reverse Words (I love DSA) : " << reverseWords("I love DSA") << endl;
    return 0;
}

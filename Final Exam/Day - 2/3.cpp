// Print Characters with Frequency in a String

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string str;
    cout << "Enter a string : ";
    getline(cin, str);
    
    unordered_map<char, int> map;
    
    for(char c : str)
    {
        if(map.find(c) != map.end())
        {
            map[c] = map[c] + 1;
        }
        else
        {
            map [c] = 1;
        }
    }

    for(auto pair : map)
    {
        cout << pair.first << "->" << pair.second << endl;
    }
    
    return 0;
}

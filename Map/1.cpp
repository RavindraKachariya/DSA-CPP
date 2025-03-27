#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<char, int> myMap;

    myMap['A'] = 10;
    myMap['B'] = 20;
    myMap['C'] = 30;
    myMap.insert({'D', 40});

    cout << "Value at key 'B' : " << myMap['B'] << endl;

    cout << "Unordered Map contents :" << endl;
    for (auto it : myMap)
    {
        cout << "Key : " << it.first << ", Value : " << it.second << endl;
    }

    char key = 'C';
    if (myMap.find(key) != myMap.end())
    {
        cout << "Key '" << key << "' exists with value : " << myMap[key] << endl;
    }
    else
    {
        cout << "Key '" << key << "' not found" << endl;
    }

    myMap.erase('B');
    cout << "After erasing key 'B' :" << endl;
    for (auto it : myMap)
    {
        cout << "Key : " << it.first << ", Value : " << it.second << endl;
    }

    return 0;
}

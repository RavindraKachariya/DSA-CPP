#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    cout << "Before push back size = " << vec.size() << endl;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);

    cout << "Afte push back size = " << vec.size() << endl;

    vec.pop_back(); // 45

    cout << vec.front() << endl; // 25

    cout << vec.back() << endl; // 35

    cout << vec.at(0) << endl; // 25

    return 0;
}
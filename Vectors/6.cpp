#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    for (int i = 0; i < 5; i++)
    {
        int e;
        cin >> e;
        vec.push_back(e);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    vec.insert(vec.begin() + 2, 6);

    for (int ele : vec)
    {
        cout << ele << " ";
    }
    cout << endl;

    vec.erase(vec.end() - 2);

    int v = 0;
    while (v < vec.size())
    {
        cout << vec[v++] << " ";
    }

    return 0;
}
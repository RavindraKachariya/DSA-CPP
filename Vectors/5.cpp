#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ans = 0;

    vector<int> vec = {1, 2, 3, 4, 5};

    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;


    vector<int>::reverse_iterator i;
    for (i = vec.rbegin(); i != vec.rend(); i++)
    {
        cout << *(i) << " ";
    }

    return 0;
}
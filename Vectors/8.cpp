#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(6);

    for (int i = 0; i < 6; i++)
    {
        cin >> vec[i];
    }

    cout << "Enter X : ";
    int x;
    cin >> x;

    int occurences = 0;

    for (int ele : vec)
    {
        if (ele == x)
        {
            occurences++;
        }
    }
    cout << occurences << endl;

    return 0;
}
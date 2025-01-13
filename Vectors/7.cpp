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

    int occurence = -1;
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     if (vec[i] == x)
    //     {
    //         occurence = i;
    //     }
    // }

    for (int i = vec.size() - 1; i >= 0; i--)
    {
        if (vec[i] == x)
        {
            occurence = i;
            break;
        }
    }

    cout << occurence << endl;

    return 0;
}
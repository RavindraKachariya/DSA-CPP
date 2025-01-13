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

    int count = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] > x)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
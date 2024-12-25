#include <iostream>
using namespace std;

int main()
{
    int i, arr[5] = {5, 10, 20, -1, 100};
    int t, r = -1;
    cin >> t;

    for (i = 0; i < 5; i++)
    {
        if (arr[i] == t)
        {
            r = i;
        }
    }
    cout << r << endl;

    return 0;
}
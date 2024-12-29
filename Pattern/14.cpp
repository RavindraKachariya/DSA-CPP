#include <iostream>
using namespace std;

/*
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
 */

int main()
{
    int i, j, s, n;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (i = n - 1; i >= 1; i--)
    {
        for (s = i; s <= n - 1; s++)
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

/*
        5 
      4 5 
    3 4 5 
  2 3 4 5 
1 2 3 4 5 
 */

int main()
{
    int i, j, n;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
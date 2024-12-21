#include <iostream>
using namespace std;

/*
          1 
        1 2 3 
      1 2 3 4 5 
    1 2 3 4 5 6 7 
  1 2 3 4 5 6 7 8 9 
 */

int main()
{
    int i, j, s;

    for (i = 1; i <= 5; i++)
    {
        for (s = 5; s >= i; s--)
        {
            cout << "  ";
        }
        for (j = 1; j <= (i * 2) - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
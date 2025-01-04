#include <iostream>
using namespace std;

/*
  5 4 3 2 1 
    4 3 2 1 
      3 2 1 
        2 1 
          1 
 */

int main()
{
    int i, j, s;

    for (i = 5; i >= 1; i--)
    {
        for (s = 5; s >= i; s--)
        {
            cout << "  ";
        }
        for (j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

/*
          * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * * 
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
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

/*
1 0 1 0 1 
  1 0 1 0 
    1 0 1 
      1 0 
        1 
*/

int main()
{
    int i, j, s, space = 0;

    for (i = 1; i <= 5; i++)
    {
        for (s = 1; s <= space; s++)
        {
            cout << "  ";
        }
        space++;
        for (j = 5; j >= i; j--)
        {
            (j % 2 == 0)
                ? cout << "0 "
                : cout << "1 ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

/*
        5 
      4 5 4 
    3 4 5 4 3 
  2 3 4 5 4 3 2 
1 2 3 4 5 4 3 2 1 
*/

int main()
{
    int i, j, s;

    for (i = 5; i >= 1; i--)
    {
        for (s = 1; s <= i - 1; s++)
        {
            cout << "  ";
        }
        for (j = i; j <= 5; j++)
        {
            cout << j << " ";
        }
        for (j = 4; j >= i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

/*
41
41 42
41 42 43
41 42 43 44
41 42 43 44 45
*/

int main()
{
    int i, j, n = 11;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }

    return 0;
}
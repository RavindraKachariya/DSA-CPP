#include <iostream>
using namespace std;

/*
11 
12 13 
14 15 16 
17 18 19 20 
21 22 23 24 25 
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
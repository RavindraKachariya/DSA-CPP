#include <iostream>
using namespace std;

/*
A
B B
C C C
D D D D
E E E E E
*/

int main()
{
    int i, j, n;
    char ch = 'A';
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }

    return 0;
}
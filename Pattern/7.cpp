#include <iostream>
using namespace std;

/*
A 
B C 
D E F 
G H I J 
K L M N O 
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
            cout << ch++ << " ";
        }
        cout << endl;
    }

    return 0;
}
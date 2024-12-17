#include <iostream>
using namespace std;

int main()
{
    int i, j, n, sum = 0, count = 0;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            sum = i + j;
        }
    }
    cout << sum << endl;
    if (sum % 3 == 0 && sum % 5 == 0)
    {
        count++;
    }
    cout << count << endl;

    return 0;
}
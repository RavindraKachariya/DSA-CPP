#include <iostream>
using namespace std;

int main()
{
    int i, j, n1 ,n2,count=0;
    cin >> n1;
    cin >> n2;

    for (i = 1; i <= n1; i++)
    {
        for (j = 1; j <= n2; j++)
        {
            if(j-i==0)
            {
                count++;
            }
        }
    }
    cout << count;

    return 0;
}
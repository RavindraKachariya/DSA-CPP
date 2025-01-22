#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter R : ";
    cin >> r;
    cout << "Enter C : ";
    cin >> c;

    vector<vector<int>> a(r, vector<int>(c));
    int max = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    cout << "The Largest Element Is : " << max << endl;

    return 0;
}

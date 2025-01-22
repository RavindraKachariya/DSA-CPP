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
    vector<vector<int>> b(c, vector<int>(r));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "a[" << i << "][" << j << "] : ";
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

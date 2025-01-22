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

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    int r1, r_sum = 0;
    cout << "Enter Row Number : ";
    cin >> r1;
    cout << "Elements of Row " << r1 << " : ";
    for (int i = 0; i < c; i++)
    {
        cout << a[r1][i] << ", ";
        r_sum += a[r1][i];
    }
    cout << endl;
    cout << "The Sum of Row " << r1 << " : " << r_sum << endl;

    int c1, c_sum = 0;
    cout << "Enter Column Number : ";
    cin >> c1;
    cout << "Elements of Column " << c1 << " : ";
    for (int i = 0; i < r; i++)
    {
        cout << a[i][c1] << ", ";
        c_sum += a[i][c1];
    }
    cout << endl;
    cout << "The Sum of Column " << c1 << " : " << c_sum << endl;

    return 0;
}

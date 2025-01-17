#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ans = 0;

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0 || j == 0 || i == 3 - 1 || j == 3 - 1)
            {
                cout << matrix[i][j] << " ";
            }
            else
            {
                cout << " " << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
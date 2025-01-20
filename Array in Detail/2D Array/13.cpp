// Print Reverse N

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printReversedPattern(vector<vector<int>>& arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1 || i == j)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << " " << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    printReversedPattern(matrix);

    return 0;
}

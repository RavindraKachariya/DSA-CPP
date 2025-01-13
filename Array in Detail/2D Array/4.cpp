#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ans = 0;

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        cout << matrix[i][i];
        cout << endl;
    }

    return 0;
}
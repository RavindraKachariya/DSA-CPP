// Spiral Matrix

#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(const vector<vector<int>> &matrix)
{
    vector<int> result;
    if (matrix.empty())
        return result;

    int rows = matrix.size();
    int cols = matrix[0].size();
    int top = 0, left = 0, bottom = rows - 1, right = cols - 1;

    while (top <= bottom && left <= right)
    {
        // Traverse from left to right
        for (int i = left; i <= right; i++)
        {
            result.push_back(matrix[top][i]);
        }
        top++;

        // Traverse from top to bottom
        for (int i = top; i <= bottom; i++)
        {
            result.push_back(matrix[i][right]);
        }
        right--;

        // Traverse from right to left
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        // Traverse from bottom to top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return result;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    vector<int> result = spiralOrder(matrix);
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

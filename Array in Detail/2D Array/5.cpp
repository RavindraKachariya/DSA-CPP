#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < matrix.size(); ++i)
    {
        int max_value = matrix[i][0];
        for (int j = 1; j < matrix[i].size(); ++j)
        {
            if (matrix[i][j] > max_value)
            {
                max_value = matrix[i][j];
            }
        }
        cout << "Row " << i + 1 << " max value: " << max_value << endl;
    }

    return 0;
}
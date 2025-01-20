// Print Max 1 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 5},
        {1, 2, 1, 2},
        {1, 2, 5, 6},
        {1, 1, 1, 2}};

    int maxCount = 0;
    int maxRow = -1;
    for (int i = 0; i < matrix.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 1)
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxRow = i;
        }
    }
    cout << "Row with the maximum number of 1 : " << maxRow + 1 << endl;
    cout << "Maximum count of 1 : " << maxCount << endl;

    return 0;
}

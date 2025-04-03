// Find All Prime Numbers in a 2D Array

#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> findPrimesIn2DArray(vector<vector<int>> &arr)
{
    vector<int> primes;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (isPrime(arr[i][j]))
            {
                primes.push_back(arr[i][j]);
            }
        }
    }
    return primes;
}

int main()
{
    vector<vector<int>> arr = {{2, 4, 6}, {3, 5, 8}, {9, 11, 12}};

    vector<int> primes = findPrimesIn2DArray(arr);

    cout << "Prime numbers in the array : ";

    for (int i = 0; i < primes.size(); i++)
    {
        cout << primes[i] << " ";
    }
    cout << endl;

    return 0;
}

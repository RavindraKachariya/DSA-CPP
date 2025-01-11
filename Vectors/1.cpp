#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3};

    cout << "index Wise Print : " << vec[0] << endl;

    cout << "using Loop" << endl;

    for (int i : vec)
    {
        cout << i << endl;
    }

    return 0;
}
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<char> stk;
    string str = "test";

    for (int i = 0; i < str.size(); i++)
    {
        stk.push(str[i]);
    }

    string str2 = "";

    while (!(stk.empty()))
    {
        str2 += stk.top();
        stk.pop();
    }
    cout << str2 << endl;

    return 0;
}
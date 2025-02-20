#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);

    cout << stk.top() << endl;
    cout << stk.size() << endl;
    cout << stk.empty() << endl;

    stk.pop();
    cout << stk.top() << endl;
    
    return 0;
}
<<<<<<< HEAD
#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s)
{
    stack<char> stk;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            stk.push(c);
        }
        else
        {
            if (stk.empty())
            {
                return false;
            }
            char top = stk.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '['))
            {
                stk.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return stk.empty();
}

int main()
{
    string s;
    cout << "Enter a string of parentheses: ";
    cin >> s;

    if (isValid(s))
    {
        cout << "Valid Parentheses" << endl;
    }
    else
    {
        cout << "Invalid Parentheses" << endl;
    }
    
    return 0;
}
=======
#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s)
{
    stack<char> stk;
    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            stk.push(c);
        }
        else
        {
            if (stk.empty())
            {
                return false;
            }
            char top = stk.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '['))
            {
                stk.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return stk.empty();
}

int main()
{
    string s;
    cout << "Enter a string of parentheses: ";
    cin >> s;

    if (isValid(s))
    {
        cout << "Valid Parentheses" << endl;
    }
    else
    {
        cout << "Invalid Parentheses" << endl;
    }
    
    return 0;
}
>>>>>>> 04ffbba (Add | Stack Exam)

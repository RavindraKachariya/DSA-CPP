#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int mod(int a, int b)
{
    if (b != 0)
    {
        return a % b;
    }
    else
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

void calc(int a, int b)
{
    int n, ans;
    while (true)
    {
        cout << "\n1. For +\n";
        cout << "2. For -\n";
        cout << "3. For *\n";
        cout << "4. For /\n";
        cout << "5. For %\n";
        cout << "0. For Exit\n";
        cout << "\nEnter Your Choice: ";
        cin >> n;

        switch (n)
        {
        case 1:
            ans = sum(a, b);
            cout << "Result: " << ans << endl;
            break;

        case 2:
            ans = sub(a, b);
            cout << "Result: " << ans << endl;
            break;

        case 3:
            ans = mult(a, b);
            cout << "Result: " << ans << endl;
            break;

        case 4:
            ans = divide(a, b);
            if (b != 0)
            {
                cout << "Result: " << ans << endl;
            }
            break;

        case 5:
            ans = mod(a, b);
            if (b != 0)
            {
                cout << "Result: " << ans << endl;
            }
            break;

        case 0:
            return;

        default:
            cout << "\n\tInvalid Input\n";
            break;
        }
    }
}

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    calc(a, b);
    return 0;
}

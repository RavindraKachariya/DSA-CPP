#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter A :";
    cin >> a;
    cout << "Enter B :";
    cin >> b;
    cout << "Enter C :";
    cin >> c;

    (a > b)
        ? (a > c)
            ? cout << "A is Big"
            : cout << "C is Big"
        : (b > c)
            ? cout << "B is Big"
            : cout << "C is Big";

    return 0;
}

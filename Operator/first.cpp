#include <iostream>
using namespace std;

int main()
{
    int a, b, c, sum;
    float dis;
    float d, e;

    cout << "Enter A:";
    cin >> a;
    cout << "Enter B:";
    cin >> b;
    cout << "Enter C:";
    cin >> c;

    sum = a + b + c;

    cout << "Total : " << sum << endl;

    cout << "Enter Disscount : ";
    cin >> dis;
    d = sum * dis / 100;
    cout << "Total Disscount : " << sum - d << endl;

    e = sum - d;
    e += e * 0.18;
    cout << "Total Gst : " << e << endl;

    return 0;
}
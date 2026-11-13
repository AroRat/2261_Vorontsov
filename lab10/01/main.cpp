#include <iostream>

using namespace std;

int main()
{
    {
        int a = 10, b = 20;
        int *p = &a, *q = &b;
        p = q;
        cout << *p << ' ' << *q << endl;
        cout << a << ' ' << b << ' ' << p << ' ' << q << endl;
    }
    {
        int a = 10, b = 20;
        int *p = &a, *q = &b;
        *p = *q;
        cout << *p << ' ' << *q << endl;
        cout << a << ' ' << b << ' ' << p << ' ' << q << endl;
    }
    return 0;
}
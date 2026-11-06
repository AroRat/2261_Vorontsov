#include <iostream>

using namespace std;

int main() {
    {
        int n = 5;
        for (int i = 0; i < n; i++) {
            cout << n << "|" << i << " ";
            n++;
            if (n == 8) break;
        }
    }
    cout << endl;
    {
        int n = 5;
        int __i = 0, __n = n;
        for (const int &i = __i; i < __n; __i++) {
            cout << n << "|" << i << " ";
            n++;
        }
    }
}
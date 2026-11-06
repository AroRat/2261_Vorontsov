#include <iostream>

using namespace std;

int main() {
    {
        for (int i = 0; i < 5; i++) {
            i++;
            cout << i << " ";
        }
    }
    cout << endl;
    {
        int __i = 0, __n = 5;
        for (const int &i = __i; i < __n; __i++) {
            // i++;
            cout << i << " ";
        }
    }
}
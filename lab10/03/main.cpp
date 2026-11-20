#include <iostream>

int main() {
    int x = 10, y = 5;
    int result = x * y;
    int* p = &x;
    std::cout << *p << std::endl;
    int& ref = x;
    int a = 6 & 3;
    std::cout << result << std::endl;
    std::cout << a << std::endl;
}
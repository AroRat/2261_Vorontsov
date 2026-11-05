#include <iostream>
#include <vector>

int main()
{
    std::vector<int> a;
    int x;
    while (std::cin >> x)
    {
        a.push_back(x);
    }
    bool isNegative = false;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < 0)
        {
            std::cout << a[i];
            isNegative = true;
            break;
        }
    }
    if (!isNegative)
    {
        std::cout << "Negative numbers is not found";
    }
}
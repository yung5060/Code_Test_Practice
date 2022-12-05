#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans *= (a - i);
        ans /= (i + 1);
    }
    std::cout << ans;
}
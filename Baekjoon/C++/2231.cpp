#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    int ans = 0;
    for (int i = N - 1; i >= 1; i--)
    {
        int num1 = i, num2 = i;
        while (num2 > 0)
        {
            num1 += num2 % 10;
            num2 /= 10;
        }
        if (num1 == N)
        {
            ans = i;
        }
    }
    std::cout << ans;
}
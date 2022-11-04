#include <iostream>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int N;
    std::cin >> N;
    std::cout << factorial(N) << std::endl;
}
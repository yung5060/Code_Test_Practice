#include <iostream>
#include <vector>

int GCD(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    return GCD(b, a % b);
}

int main()
{
    int N, first, num;
    std::cin >> N;
    std::cin >> first;
    std::vector<int> num_list;
    for (int i = 0; i < N - 1; i++)
    {
        std::cin >> num;
        int gcd = GCD(first, num);
        std::cout << first / gcd << '/' << num / gcd << '\n';
    }
}
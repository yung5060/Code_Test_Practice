#include <iostream>

long long count(int n, int x)
{
    int cnt = 0;
    for (long long i = x; n / i >= 1; i *= x)
    {
        cnt += n / i;
    }
    return cnt;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;
    long long five_cnt, two_cnt;
    five_cnt = count(n, 5) - count(n - m, 5) - count(m, 5);
    two_cnt = count(n, 2) - count(n - m, 2) - count(m, 2);
    std::cout << std::min(five_cnt, two_cnt);
}
#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N, cnt = 0;
    std::cin >> N;
    for (int i = 5; i <= N; i += 5)
    {
        int k = i;
        while (k % 5 == 0)
        {
            k /= 5;
            cnt++;
        }
    }
    std::cout << cnt;
}
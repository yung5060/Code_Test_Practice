#include <iostream>

int main()
{
    int K, N, M;
    std::cin >> K;
    for (int i = 0; i < K; i++)
    {
        std::cin >> N >> M;
        N = (N < M - N) ? N : M - N;
        int ans = 1;
        for (int j = 0; j < N; j++)
        {
            ans *= M - j;
            ans /= j + 1;
        }
        std::cout << ans << '\n';
    }
}
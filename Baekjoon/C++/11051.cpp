#include <iostream>

int bnc[1001][1001] = {
    0,
};

int main()
{
    int n, k;
    std::cin >> n >> k;
    bnc[1][1] = 1;
    bnc[1][0] = 1;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (j == 0 || i == j)
            {
                bnc[i][j] = 1;
                continue;
            }
            bnc[i][j] = bnc[i - 1][j - 1] % 10007 + bnc[i - 1][j] % 10007;
        }
    }
    std::cout << bnc[n][k] % 10007;
}
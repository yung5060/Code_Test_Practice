#include <iostream>
#include <vector>
#include <string>

int main()
{
    int N, M;
    std::cin >> N >> M;
    std::vector<std::string> chess;
    for (int i = 0; i < N; i++)
    {
        std::string oneLine;
        for (int j = 0; j < M; j++)
        {
            char c;
            std::cin >> c;
            oneLine.push_back(c);
        }
        chess.push_back(oneLine);
    }
    int paint = 64;
    for (int i = 0; i <= N - 8; i++)
    {
        for (int j = 0; j <= M - 8; j++)
        {
            int cnt1 = 0, cnt2 = 0;
            for (int k = i; k < i + 8; k++)
            {
                for (int l = j; l < j + 8; l++)
                {
                    char correct = ((k - i + l - j) & 1) ? 'W' : 'B';
                    if (chess[k][l] != correct)
                    {
                        cnt1++;
                    }
                    else
                    {
                        cnt2++;
                    }
                }
            }
            int cnt = (cnt1 < cnt2) ? cnt1 : cnt2;
            if (paint > cnt)
            {
                paint = cnt;
            }
        }
    }
    std::cout << paint;
}
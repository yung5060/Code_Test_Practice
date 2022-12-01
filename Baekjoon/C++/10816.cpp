#include <iostream>
#include <map>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::map<int, int> cardMap;
    int N, M, tmp;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        if (cardMap.find(tmp) != cardMap.end())
        {
            cardMap[tmp]++;
        }
        else
        {
            cardMap.insert({tmp, 1});
        }
    }
    std::cin >> M;
    for (int i = 0; i < M; i++)
    {
        std::cin >> tmp;
        if (cardMap.find(tmp) == cardMap.end())
        {
            std::cout << 0 << " ";
        }
        else
        {
            std::cout << cardMap[tmp] << " ";
        }
    }
}
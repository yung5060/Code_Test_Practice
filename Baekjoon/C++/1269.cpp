#include <iostream>
#include <map>

int main()
{
    int N, M, num, cnt = 0;
    std::cin >> N >> M;
    std::map<int, int> int_map;
    for (int i = 0; i < N + M; i++)
    {
        std::cin >> num;
        if (int_map.find(num) == int_map.end())
        {
            int_map.insert({num, 1});
        }
        else
        {
            cnt++;
        }
    }
    std::cout << N + M - 2 * cnt;
}
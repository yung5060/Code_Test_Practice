#include <iostream>
#include <set>
#include <string>

int main()
{
    int N, M;
    std::cin >> N >> M;
    std::set<std::string> stringSet;
    std::string tmp;
    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        stringSet.insert(tmp);
    }
    int cnt = 0;
    for (int i = 0; i < M; i++)
    {
        std::cin >> tmp;
        if (stringSet.find(tmp) != stringSet.end())
        {
            cnt++;
        }
    }
    std::cout << cnt;
}
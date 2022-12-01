#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<std::string, int> name_map;
    int N, M, cnt = 0;
    std::cin >> N >> M;
    std::string name;
    for (int i = 0; i < N + M; i++)
    {
        std::cin >> name;
        if (name_map.find(name) != name_map.end())
        {
            name_map[name]++;
            cnt++;
        }
        else
        {
            name_map.insert({name, 1});
        }
    }
    std::cout << cnt << '\n';
    for (const auto &it : name_map)
    {
        if (it.second == 2)
        {
            std::cout << it.first << '\n';
        }
    }
}
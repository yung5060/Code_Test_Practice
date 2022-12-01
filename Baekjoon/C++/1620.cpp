#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <cmath>
#include <map>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::map<std::string, int> pokemonsMap;
    std::vector<std::string> pokemonsList;
    int N, M;
    std::cin >> N >> M;
    std::string tmp;
    for (int i = 0; i < N; i++)
    {
        std::cin >> tmp;
        pokemonsMap.insert({tmp, i + 1});
        pokemonsList.push_back(tmp);
    }
    for (int i = 0; i < M; i++)
    {
        std::cin >> tmp;
        if (std::isdigit(tmp[0]))
        {

            std::cout << pokemonsList[std::stoi(tmp) - 1] << '\n';
        }
        else
        {
            std::cout << pokemonsMap[tmp] << '\n';
        }
    }
}
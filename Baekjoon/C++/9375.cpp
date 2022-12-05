#include <iostream>
#include <map>
#include <string>

int main()
{
    int N, k;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> k;
        std::map<std::string, int> wardrobe;
        std::string type, clothing;
        for (int j = 0; j < k; j++)
        {
            std::cin >> clothing >> type;
            if (wardrobe.find(type) != wardrobe.end())
            {
                wardrobe[type]++;
            }
            else
            {
                wardrobe.insert({type, 1});
            }
        }
        int ans = 1;
        for (const auto &it : wardrobe)
        {
            ans *= (it.second + 1);
        }
        std::cout << ans - 1 << '\n';
    }
}
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int K, x = 0, y = 0, X = 0, Y = 0;
    std::cin >> K;
    std::vector<std::pair<int, int>> route, tmp;
    std::vector<int> directions;
    int a, b;
    for (int i = 0; i < 6; i++)
    {
        std::cin >> a >> b;
        route.push_back({a, b});
        directions.push_back(a);
    }
    for (int i = 0; i < 6; i++)
    {
        int idx = std::find(directions.begin(), directions.end(), route[i].first) - directions.begin();
        if (i != idx)
        {
            tmp.push_back({route[i].first, idx});
            tmp.push_back({route[i].first, i});
        }
        if (route[i].first == 1 || route[i].first == 2)
        {
            X += route[i].second;
        }
        if (route[i].first == 3 || route[i].first == 4)
        {
            Y += route[i].second;
        }
    }
    if (tmp[1].second - tmp[0].second == 2 && tmp[3].second - tmp[2].second == 2)
    {
        x = route[tmp[1].second].second;
        y = route[tmp[2].second].second;
    }
    else if (tmp[1].second - tmp[0].second == 4 && tmp[3].second - tmp[2].second == 2)
    {
        x = route[tmp[1].second].second;
        y = route[tmp[3].second].second;
    }
    else if (tmp[1].second - tmp[0].second == 2 && tmp[3].second - tmp[2].second == 4)
    {
        x = route[tmp[0].second].second;
        y = route[tmp[2].second].second;
    }
    else if (tmp[1].second - tmp[0].second == 4 && tmp[3].second - tmp[2].second == 4)
    {
        x = route[tmp[0].second].second;
        y = route[tmp[3].second].second;
    }
    X /= 2;
    Y /= 2;
    std::cout << K * (X * Y - x * y);
}
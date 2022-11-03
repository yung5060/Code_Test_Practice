#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N;
    std::cin >> N;
    std::vector<std::pair<int, int>> coordinates;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        std::cin >> x >> y;
        coordinates.push_back({x, y});
    }
    std::sort(coordinates.begin(), coordinates.end(),
              [](std::pair<int, int> first, std::pair<int, int> second) -> bool
              {
                  if (first.first == second.first)
                  {
                      return first.second < second.second;
                  }
                  return first.first < second.first;
              });
    for (const auto &coordinate : coordinates)
    {
        std::cout << coordinate.first << " " << coordinate.second << "\n";
    }
}
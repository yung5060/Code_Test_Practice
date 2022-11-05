#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    int N;
    std::cin >> N;
    std::vector<std::pair<std::string, std::vector<int>>> reg_list;

    for (int i = 0; i < N; i++)
    {
        std::string name;
        int age;
        std::cin >> age >> name;
        reg_list.push_back({name, {i, age}});
    }

    std::sort(reg_list.begin(), reg_list.end(),
              [&](std::pair<std::string, std::vector<int>> first, std::pair<std::string, std::vector<int>> second) -> bool
              {
                  if (first.second[1] == second.second[1])
                  {
                      return first.second[0] < second.second[0];
                  }
                  return first.second[1] < second.second[1];
              });

    for (const auto &p : reg_list)
    {
        std::cout << p.second[1] << " " << p.first << "\n";
    }
}
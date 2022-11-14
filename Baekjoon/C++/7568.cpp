#include <iostream>
#include <vector>

int main()
{
    int N;
    std::cin >> N;
    std::vector<std::pair<int, int>> arr;
    std::vector<int> bigger(N, 0);
    for (int i = 0; i < N; i++)
    {
        std::pair<int, int> person;
        std::cin >> person.first >> person.second;
        arr.push_back(person);
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j == i)
            {
                continue;
            }
            if (arr[i].first < arr[j].first && arr[i].second < arr[j].second)
            {
                bigger[i]++;
            }
        }
    }
    for (const auto &rank : bigger)
    {
        std::cout << rank + 1 << " ";
    }
}
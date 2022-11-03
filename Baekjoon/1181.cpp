#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    int N;
    std::cin >> N;
    std::vector<std::string> arr;

    for (int i = 0; i < N; i++)
    {
        std::string a;
        std::cin >> a;
        arr.push_back(a);
    }

    std::sort(arr.begin(), arr.end(),
              [](std::string first, std::string second) -> bool
              {
                  if (first.size() == second.size())
                  {
                      return first < second;
                  }
                  return first.size() < second.size();
              });

    std::vector<std::string>::iterator it = arr.begin();
    while (it != arr.end())
    {
        while (*it == *(it + 1))
        {
            it++;
        }
        std::cout << *it << "\n";
        it++;
    }
}
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// sort(v.begin(), v.end(),
//              [&](int first, int second) -> bool
//              {
//                  if (plays[first] == plays[second])
//                  {
//                      return first < second;
//                  }
//                  return plays[first] > plays[second];
//              });

int solution(vector<vector<int>> jobs)
{
    sort(jobs.begin(), jobs.end(),
         [](vector<int> first, vector<int> second) -> bool
         {
             if (first.back() == second.back())
             {
                 return first.front() < second.front();
             }
             return first.back() < second.back();
         });
    int exchange_point = 0, end_time = 0, total = 0;
    for (const auto &it : jobs)
    {
        end_time += it.back();
    }
    while (exchange_point < end_time)
    {
        for (auto &it : jobs)
        {
            if (it.front() <= exchange_point && it.front() >= 0)
            {
                total += (exchange_point + it.back() - it.front());
                exchange_point += it.back();
                it.front() = -1;
                break;
            }
        }
    }
    return total / jobs.size();
}

int main()
{
    vector<vector<int>> jobs = {{0, 3}, {1, 9}, {2, 6}};
    cout << solution(jobs) << endl;
    cin.get();
}
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <numeric>

using namespace std;

vector<int> solution(vector<string> genres, vector<int> plays)
{
    unordered_map<string, vector<int>> album;
    for (int i = 0; i < genres.size(); i++)
    {
        if (album.find(genres[i]) != album.end())
        {
            album[genres[i]].push_back(i);
        }
        else
        {
            album[genres[i]] = vector<int>(1, i);
        }
    }
    vector<vector<int>> filtered_records;
    for (auto &[k, v] : album)
    {
        sort(v.begin(), v.end(),
             [&](int first, int second) -> bool
             {
                 if (plays[first] == plays[second])
                 {
                     return first < second;
                 }
                 return plays[first] > plays[second];
             });
        filtered_records.push_back(vector<int>(v));
    }
    sort(filtered_records.begin(), filtered_records.end(),
         [&](vector<int> first, vector<int> second) -> bool
         {
             int sum1 = 0, sum2 = 0;
             for (const auto &it : first)
             {
                 sum1 += plays[it];
             }
             for (const auto &it : second)
             {
                 sum2 += plays[it];
             }
             return sum1 < sum2;
         });
    vector<int> answer;
    for (const auto &record : filtered_records)
    {
        if (record.size() == 1)
        {
            answer.push_back(record.front());
            continue;
        }
        answer.push_back(record.front());
        answer.push_back(*(record.begin() + 1));
    }
    return answer;
}

int main()
{
    vector<string> genres = {"classic", "pop", "classic", "classic", "pop"};
    vector<int> plays = {500, 600, 500, 800, 2500};
    vector<int> answer = solution(genres, plays);
    for (const auto &song : answer)
    {
        cout << song << " ";
    }
    cin.get();
}
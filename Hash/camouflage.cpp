#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes)
{
    unordered_map<string, int> map;
    for (const auto &it : clothes)
    {
        if (map.find(it.back()) != map.end())
        {
            map[it.back()]++;
        }
        else
        {
            map[it.back()] = 1;
        }
    }
    int answer = 1;
    for (auto &[key, value] : map)
    {
        answer *= (value + 1);
    }
    return answer - 1;
}

int main()
{
}
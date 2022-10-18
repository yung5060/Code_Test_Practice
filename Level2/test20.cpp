#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

bool cmp(pair<string, int> &a,
         pair<string, int> &b)
{
    return a.second > b.second;
}

int convert(string a)
{
    string::iterator it = a.end() - 1;
    int b = 0;
    int result = 0;
    while (it >= a.begin())
    {
        result += (*it - '0') * pow(10, b);
        it--;
        b++;
    }
    return result;
}

vector<int> solution(string s)
{
    vector<string> list;
    string::iterator it = s.begin();
    int listCount = 0;
    while (it != s.end())
    {
        if (*it != '{' && *it != '}' && *it != ',')
        {
            string temp = "";
            while (*it != ',' && *it != '}')
            {
                temp.push_back(*it);
                it++;
            }
            list.push_back(temp);
        }
        else
        {
            listCount += (*it == '{') ? 1 : 0;
            it++;
        }
    }
    map<string, int> table;
    for (const auto &it : list)
    {
        table.insert({it, count(list.begin(), list.end(), it)});
    }
    vector<string> temp;
    for (map<string, int>::iterator it = table.begin(); it != table.end(); it++)
    {
        if (it->second > listCount)
        {
            temp.push_back(it->first);
            it->second -= listCount;
        }
        // cout << it->first << " " << it->second << endl;
    }
    if (!temp.empty())
    {
        reverse(temp.begin(), temp.end());
    }
    vector<pair<string, int>> vec;
    for (auto &it : table)
    {
        vec.emplace_back(it);
    }
    sort(vec.begin(), vec.end(), cmp);
    for (auto &it : vec)
    {
        temp.push_back(it.first);
    }
    vector<int> answer;
    for (auto &it : temp)
    {
        answer.push_back(convert(it));
    }

    return answer;
}

int main()
{
    // solution("{{20,111},{111}}");
    vector<int> answer = solution("{{20,111},{111}}");
    for (const auto &it : answer)
    {
        cout << it << " ";
    }
    cin.get();
}
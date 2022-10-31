#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k)
{
    unordered_map<string, int> map1;
    unordered_map<string, vector<string>> map2;
    for (const auto &id : id_list)
    {
        vector<string> list;
        map2.insert({id, list});
        map1.insert({id, 0});
    }
    for (auto &r : report)
    {
        string a = "", b = "";
        string::iterator it = r.begin();
        while (*it != ' ')
        {
            a.push_back(*it);
            it++;
        }
        it++;
        while (it != r.end())
        {
            b.push_back(*it);
            it++;
        }
        if (count(map2.find(a)->second.begin(), map2.find(a)->second.end(), b) == 0)
        {
            map2.find(a)->second.push_back(b);
            map1.find(b)->second++;
        }
    }
    for (const auto &m : map1)
    {
        if (m.second < k)
        {
            for (auto &n : map2)
            {
                n.second.erase(remove(n.second.begin(), n.second.end(), m.first), n.second.end());
            }
        }
    }
    vector<int> answer;
    for (const auto &id : id_list)
    {
        answer.push_back(map2.find(id)->second.size());
    }
    return answer;
}

int main()
{
    vector<string> id_list = {"muzi", "frodo", "apeach", "neo"};
    vector<string> report = {"muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi"};
    vector<int> answer = solution(id_list, report, 2);
    for (const auto &it : answer)
    {
        cout << it << ' ';
    }
    cin.get();
}
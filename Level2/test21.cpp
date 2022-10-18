#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool cmp(vector<string> a, vector<string> b)
{
    return a.size() < b.size();
}

vector<int> solution(string s)
{
    string::iterator it = s.begin();
    vector<vector<string>> vectorList;
    while (it != s.end())
    {
        if (*it != '{' && *it != ',' && *it != '}' && *it != ' ')
        {
            vector<string> stringList;
            while (true)
            {
                string temp = "";
                while (*it != ',')
                {
                    if (*it == '}')
                    {
                        break;
                    }
                    temp.push_back(*it);
                    it++;
                }
                stringList.push_back(temp);
                if (*it == '}')
                {
                    break;
                }
                it++;
            }
            vectorList.push_back(stringList);
            it++;
        }
        else
        {
            it++;
        }
    }
    sort(vectorList.begin(), vectorList.end(), cmp);
    vector<int> answer;
    for (const auto &it1 : vectorList)
    {
        for (const auto &it2 : it1)
        {
            cout << it2 << " ";
            if (count(answer.begin(), answer.end(), stoi(it2)))
            {
                continue;
            }
            answer.push_back(stoi(it2));
        }
        cout << endl;
    }
    return answer;
}

int main()
{
    // solution("{{123}}");
    vector<int> answer = solution("{{1,2,3},{2,1},{1,2,4,3},{2}}");
    for (const auto &it : answer)
    {
        cout << it << " ";
    }
    cin.get();
}
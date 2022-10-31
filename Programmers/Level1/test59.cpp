#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

string solution(string X, string Y)
{
    unordered_map<char, int> map;
    string duplicate = "";
    string::iterator it = X.begin();
    while (it != X.end())
    {
        if (count(duplicate.begin(), duplicate.end(), *it) > 0)
        {
            it++;
            continue;
        }
        if (count(Y.begin(), Y.end(), *it) > 0)
        {
            map.insert({*it, count(Y.begin(), Y.end(), *it)});
            duplicate.push_back(*it);
            it++;
        }
        else
        {
            it++;
        }
    }
    if (duplicate.empty())
    {
        return "-1";
    }
    string answer = "";
    for (const auto &d : duplicate)
    {
        if (count(X.begin(), X.end(), d) < map.find(d)->second)
        {
            map.find(d)->second = count(X.begin(), X.end(), d);
        }
        for (int i = 0; i < map.find(d)->second; i++)
        {
            answer.push_back(d);
        }
    }
    sort(answer.rbegin(), answer.rend());
    if (answer.front() == '0')
    {
        return "0";
    }
    return answer;
}

int main()
{
    cout << solution("100", "2345") << endl;
    cout << solution("100", "203045") << endl;
    cout << solution("100", "123450") << endl;
    cout << solution("12321", "42531") << endl;
    cout << solution("5525", "1255") << endl;
    cin.get();
}
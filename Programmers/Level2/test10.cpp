#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words)
{
    vector<string> temp;
    vector<int> answer;
    vector<string>::iterator it = words.begin();
    while (it < words.end())
    {
        if (count(temp.begin(), temp.end(), *it))
        {
            break;
        }
        else if ((*it).size() == 1)
        {
            break;
        }
        else if (it == words.end() - 1)
        {
            answer.push_back(0);
            answer.push_back(0);
            return answer;
        }
        else if ((*it).back() != (*(it + 1)).front())
        {
            it++;
            break;
        }
        temp.push_back(*it);
        it++;
    }
    int index = it - words.begin();
    answer.push_back(index % n + 1);
    answer.push_back(index / n + 1);
    return answer;
}

int main()
{
    vector<string> words = {"hello", "one", "even", "never", "now", "world", "draw"};
    vector<int> answer = solution(2, words);
    for (const auto &it : answer)
    {
        cout << it << " ";
    }
    cin.get();
}
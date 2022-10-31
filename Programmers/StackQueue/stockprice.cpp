#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices)
{
    vector<int> answer;
    for (int i = prices.size() - 1; i >= 0; i--)
    {
        answer.push_back(i);
    }
    vector<int>::iterator it1 = prices.begin();
    for (; it1 < prices.end() - 1; it1++)
    {
        vector<int>::iterator it2 = it1 + 1;
        for (; it2 < prices.end(); it2++)
        {
            if (*it2 < *it1)
            {
                answer[it1 - prices.begin()] = it2 - it1;
                break;
            }
        }
    }
    return answer;
}

int main()
{
    vector<int> prices = {1, 2, 3, 2, 3};
    vector<int> answer = solution(prices);
    for (const auto &it : answer)
    {
        cout << it << " ";
    }
    cin.get();
}
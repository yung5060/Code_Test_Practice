#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
    int count = 0, score = 0;
    for (const auto &lotto : lottos)
    {
        for (const auto &win : win_nums)
        {
            if (lotto == 0)
            {
                count++;
                break;
            }
            else if (lotto == win)
            {
                score++;
                break;
            }
        }
    }
    vector<int> result = {score + count, score};
    for (auto &it : result)
    {
        it = (it < 2) ? 6 : 7 - it;
    }
    return result;
}

int main()
{
    vector<int> lottos = {45, 4, 35, 20, 3, 9};
    vector<int> win_nums = {20, 9, 3, 45, 4, 35};
    vector<int> result = solution(lottos, win_nums);
    for (const auto &it : result)
    {
        cout << it << " ";
    }
    cin.get();
}
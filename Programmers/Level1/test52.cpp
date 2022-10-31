#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    vector<int> duplicate;
    for (const auto &li : lost)
    {
        for (const auto &ri : reserve)
        {
            if (li == ri)
            {
                duplicate.push_back(li);
            }
        }
    }
    for (const auto &di : duplicate)
    {
        lost.erase(remove(lost.begin(), lost.end(), di), lost.end());
        reserve.erase(remove(reserve.begin(), reserve.end(), di), reserve.end());
    }

    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());

    for (const auto &it : lost)
    {
        if (count(reserve.begin(), reserve.end(), it - 1))
        {
            reserve.erase(remove(reserve.begin(), reserve.end(), it - 1), reserve.end());
        }
        else if (count(reserve.begin(), reserve.end(), it + 1))
        {
            reserve.erase(remove(reserve.begin(), reserve.end(), it + 1), reserve.end());
        }
        else
        {
            n--;
        }
    }
    return n;
}

int main()
{
    vector<int> lost = {1, 2, 4}, reserve = {1, 3, 5, 4};
    cout << solution(5, lost, reserve) << endl;
    cin.get();
}
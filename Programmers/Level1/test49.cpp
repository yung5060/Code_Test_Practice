#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(vector<double> a, vector<double> b)
{
    return a[1] == b[1] ? a[0] < b[0] : a[1] > b[1];
}

vector<int> solution(int N, vector<int> stages)
{
    stable_sort(stages.rbegin(), stages.rend());
    vector<vector<double>> fail_rate;
    for (int i = 0; i < N; i++)
    {
        float count = 0;
        for (auto &it : stages)
        {
            if (it == i + 1)
            {
                count += 1;
            }
        }
        vector<double> temp = {(double)i + 1, count / stages.size()};
        fail_rate.push_back(temp);
        while (stages.back() == i + 1)
        {
            stages.pop_back();
        }
    }
    stable_sort(fail_rate.begin(), fail_rate.end(), compare);
    vector<int> final;
    for (const auto &it : fail_rate)
    {
        final.push_back(it[0]);
    }
    return final;
}

int main()
{
    vector<int> stages = {4, 4, 4, 4, 4};
    vector<int> answer = solution(4, stages);
    for (const auto &it : answer)
    {
        cout << it << " ";
    }
    cin.get();
}
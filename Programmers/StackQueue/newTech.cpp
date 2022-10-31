#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> days;
    for (int i = 0; i < speeds.size(); i++)
    {
        int temp = ((100 - progresses[i]) % speeds[i] == 0) ? (100 - progresses[i]) / speeds[i] : (100 - progresses[i]) / speeds[i] + 1;
        days.push_back(temp);
    }
    vector<int> stack, answer;
    int count = 1;
    for (const auto &day : days)
    {
        if (stack.empty())
        {
            stack.push_back(day);
            continue;
        }
        if (day > stack.back())
        {
            answer.push_back(count);
            count = 1;
            stack.push_back(day);
        }
        else
        {
            count++;
        }
    }
    answer.push_back(count);
    return answer;
}

int main()
{
    vector<int> progresses = {95, 90, 99, 99, 80, 99};
    vector<int> speeds = {1, 1, 1, 1, 1, 1};
    vector<int> result = solution(progresses, speeds);
    for (const auto &it : result)
    {
        cout << it << " ";
    }
    cin.get();
}
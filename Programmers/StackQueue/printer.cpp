#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location)
{
    vector<int> order;
    vector<int> temp;
    for (int i = 0; i < priorities.size(); i++)
    {
        temp.push_back(i);
    }
    while (!priorities.empty())
    {
        if (priorities.size() == 1)
        {
            order.push_back(temp.front());
            temp.pop_back();
            priorities.pop_back();
            break;
        }
        int max = *max_element(priorities.begin() + 1, priorities.end());
        if (priorities.front() >= max)
        {
            order.push_back(temp.front());
            priorities = vector<int>(priorities.begin() + 1, priorities.end());
            temp = vector<int>(temp.begin() + 1, temp.end());
        }
        else
        {
            priorities.push_back(priorities.front());
            temp.push_back(temp.front());
            priorities = vector<int>(priorities.begin() + 1, priorities.end());
            temp = vector<int>(temp.begin() + 1, temp.end());
        }
    }
    for (const auto &num : order)
    {
        cout << num << " ";
    }
    cout << endl;
    return find(order.begin(), order.end(), location) - order.begin() + 1;
}

int main()
{
    vector<int> priorities = {1, 1, 2, 3, 2, 1};
    cout << solution(priorities, 0) << endl;
    cin.get();
}
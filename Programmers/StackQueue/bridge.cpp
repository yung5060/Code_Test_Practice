#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights)
{
    queue<int> bridge;
    for (int i = 0; i < bridge_length; i++)
        bridge.push(0);
    vector<int> temp = vector<int>(truck_weights.rbegin(), truck_weights.rend());
    int count = 0, current_weight = 0;
    while (!temp.empty())
    {
        current_weight -= bridge.front();
        bridge.pop();
        if (current_weight + temp.back() <= weight)
        {
            bridge.push(temp.back());
            current_weight += temp.back();
            temp.pop_back();
        }
        else
        {
            bridge.push(0);
        }
        count++;
    }
    return count + bridge_length;
}

int main()
{
}
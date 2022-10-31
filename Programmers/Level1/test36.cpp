#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes)
{
    vector<int> horizontal;
    vector<int> vertical;
    for (auto &size : sizes)
    {
        if (size.front() < size.back())
            reverse(size.begin(), size.end());
        horizontal.push_back(size.front());
        vertical.push_back(size.back());
    }
    sort(horizontal.begin(), horizontal.end());
    sort(vertical.begin(), vertical.end());
    return horizontal.back() * vertical.back();
}

int main()
{
}
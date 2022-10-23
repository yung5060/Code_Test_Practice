#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right)
{
    vector<int> list;
    for (long long i = left; i <= right; i++)
    {
        int vertical = i / n + 1;
        int horizontal = i % n + 1;
        if (vertical >= horizontal)
        {
            list.push_back(vertical);
        }
        else
        {
            list.push_back(horizontal);
        }
    }
    return list;
}

int main()
{
    vector<int> answer = solution(4, 7, 14);
    for (const auto &it : answer)
    {
        cout << it << " ";
    }
    cin.get();
}
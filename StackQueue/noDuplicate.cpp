#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> temp;
    for (const auto &num : arr)
    {
        if (temp.empty())
        {
            temp.push_back(num);
            continue;
        }
        if (temp.back() != num)
        {
            temp.push_back(num);
        }
    }
    return temp;
}

int main()
{
    vector<int> arr = {1, 1, 3, 3, 0, 1, 1};
    vector<int> result = solution(arr);
    for (const auto &it : result)
    {
        cout << it << " ";
    }
    cin.get();
}
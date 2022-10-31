#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;
    for (const auto &it : commands)
    {
        vector<int> temp(array);
        sort(temp.begin() + it[0] - 1, temp.begin() + it[1]);
        answer.push_back(*(temp.begin() + it[0] + it[2] - 2));
    }
    return answer;
}

int main()
{
    vector<int> arr1 = {2, 5, 3};
    vector<int> arr2 = {4, 4, 1};
    vector<int> arr3 = {1, 7, 3};
    vector<int> arr4 = {1, 5, 2, 6, 3, 7, 4};
    vector<vector<int>> array;
    array.push_back(arr1);
    array.push_back(arr2);
    array.push_back(arr3);
    vector<int> answer = solution(arr4, array);
    for (const auto &it : answer)
    {
        cout << it << " ";
    }
    cin.get();
}
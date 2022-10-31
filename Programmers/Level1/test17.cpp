#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer(arr);
    if (answer.size() == 1)
        return vector<int>(1, -1);
    sort(arr.rbegin(), arr.rend());
    int pop = *(arr.end() - 1);
    answer.erase(remove(answer.begin(), answer.end(), pop), answer.end());
    return answer;
}

int main()
{
    vector<int> array = {2, 0, 4, 5, 54, 3};
    vector<int>::iterator it;
    vector<int> answer = solution(array);
    for (it = answer.begin(); it != answer.end(); it++)
        cout << *it << " ";
    cin.get();
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor)
{
    vector<int> answer;
    vector<int>::iterator it;
    for (it = arr.begin(); it != arr.end(); it++)
    {
        if (!(*it % divisor))
        {
            answer.push_back(*it);
        }
    }
    if (!answer.size())
    {
        answer.push_back(-1);
    }
    else
    {
        sort(answer.begin(), answer.end());
    }
    return answer;
}

int main()
{
    vector<int> array = {5, 9, 7, 10};
    vector<int> answer = solution(array, 5);
    vector<int>::iterator it;
    for (it = answer.begin(); it != answer.end(); it++)
    {
        cout << *it << " ";
    }
    cin.get();
}
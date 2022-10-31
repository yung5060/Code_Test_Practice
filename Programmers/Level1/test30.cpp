#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    stack<int> stack;

    stack.push(*arr.begin());
    answer.push_back(*arr.begin());

    for (vector<int>::iterator it = arr.begin() + 1; it != arr.end(); it++)
    {
        if (*it != stack.top())
        {
            stack.push(*it);
            answer.push_back(*it);
        }
    }

    return answer;
}

int main()
{
    vector<int> list = {4, 4, 4, 3, 3};
    vector<int> arr = solution(list);
    for (vector<int>::iterator it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    cin.get();
}
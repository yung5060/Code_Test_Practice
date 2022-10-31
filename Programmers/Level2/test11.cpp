#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution(string s)
{
    stack<char> stack;
    string::iterator it = s.begin();
    while (it != s.end())
    {
        if (stack.empty())
        {
            stack.push(*it);
        }
        else if (stack.top() == *it)
        {
            stack.pop();
        }
        else
        {
            stack.push(*it);
        }
        it++;
    }
    return (stack.empty()) ? 1 : 0;
}

int main()
{
    cout << solution("baabaa") << endl;
    cout << solution("cdcd") << endl;
    cin.get();
}
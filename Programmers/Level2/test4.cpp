#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<char> stack;
    if (s.front() == ')' || s.back() == '(')
    {
        return false;
    }
    for (const auto &it : s)
    {
        if (it == '(')
        {
            stack.push(it);
        }
        else
        {
            if (!stack.empty())
            {
                stack.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return stack.empty();
}

int main()
{
    cout << solution("()()") << endl;
    cout << solution("(())()") << endl;
    cout << solution(")()(") << endl;
    cout << solution("(()(") << endl;
    cin.get();
}
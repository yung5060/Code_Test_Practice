#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<int> brackets;
    for (const auto &letter : s)
    {
        if (brackets.empty())
        {
            if (letter == ')')
            {
                return 0;
            }
            brackets.push(letter);
            continue;
        }
        if (brackets.top() == letter)
        {
            brackets.push(letter);
        }
        else
        {
            brackets.pop();
        }
    }
    return brackets.empty();
}

int main()
{
    cout << solution("()()") << endl;
    cout << solution("(())()") << endl;
    cout << solution(")()(") << endl;
    cout << solution("(()(") << endl;
    cin.get();
}
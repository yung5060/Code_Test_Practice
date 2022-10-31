#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s)
{
    string::iterator pointer = s.begin();
    int answer = 0;
    while (pointer != s.end())
    {
        auto it = pointer;
        if (*it == ']' || *it == ')' || *it == '}')
        {
            pointer++;
            continue;
        }
        vector<char> stack;
        while (it != s.end())
        {
            if (*it == '[' || *it == '(' || *it == '{')
            {
                stack.push_back(*it);
                it++;
            }
            else
            {
                if (*it == ']')
                {
                    if (stack.back() == '[')
                    {
                        stack.pop_back();
                    }
                    else
                    {
                        stack.push_back(*it);
                    }
                }
                if (*it == ')')
                {
                    if (stack.back() == '(')
                    {
                        stack.pop_back();
                    }
                    else
                    {
                        stack.push_back(*it);
                    }
                }
                if (*it == '}')
                {
                    if (stack.back() == '{')
                    {
                        stack.pop_back();
                    }
                    else
                    {
                        stack.push_back(*it);
                    }
                }
                it++;
            }
        }
        it = s.begin();
        while (it != pointer)
        {
            if (*it == '[' || *it == '(' || *it == '{')
            {
                stack.push_back(*it);
                it++;
            }
            else
            {
                if (*it == ']')
                {
                    if (stack.back() == '[')
                    {
                        stack.pop_back();
                    }
                    else
                    {
                        stack.push_back(*it);
                    }
                }
                if (*it == ')')
                {
                    if (stack.back() == '(')
                    {
                        stack.pop_back();
                    }
                    else
                    {
                        stack.push_back(*it);
                    }
                }
                if (*it == '}')
                {
                    if (stack.back() == '{')
                    {
                        stack.pop_back();
                    }
                    else
                    {
                        stack.push_back(*it);
                    }
                }
                it++;
            }
        }
        if (stack.empty())
        {
            answer++;
        }
        pointer++;
    }
    return answer;
}

int main()
{
    cout << solution("[](){}") << endl;
    cout << solution("}]()[{") << endl;
    cout << solution("[)(]") << endl;
    cout << solution("}}}") << endl;
    cin.get();
}
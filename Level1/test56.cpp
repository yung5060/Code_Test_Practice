#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool isAlphabet(char s)
{
    return (s >= 97 && s <= 122);
}

bool isNumber(char s)
{
    return (s >= 48 && s <= 57);
}

string solution(string new_id)
{
    string answer = "";
    string exclude = "-_";
    string::iterator it = new_id.begin();
    while (it != new_id.end())
    {
        if (isAlphabet(*it) || isNumber(*it) || count(exclude.begin(), exclude.end(), *it))
        {
            answer.push_back(*it);
            it++;
        }
        else if (*it >= 65 && *it <= 90)
        {
            answer.push_back(*it + 32);
            it++;
        }
        else if (*it == '.')
        {
            if (!answer.empty() && answer.back() != '.')
            {
                answer.push_back(*it);
            }
            while (*it == '.')
            {
                it++;
            }
        }
        else
        {
            it++;
        }
    }
    if (answer.back() == '.')
    {
        answer.pop_back();
    }
    if (answer.empty())
    {
        answer.push_back('a');
    }
    if (answer.size() > 15)
    {
        while (answer.size() != 15)
        {
            answer.pop_back();
        }
    }
    if (answer.back() == '.')
    {
        answer.pop_back();
    }
    if (answer.size() < 3)
    {
        while (answer.size() != 3)
        {
            answer.push_back(answer.back());
        }
    }

    return answer;
}

int main()
{
    cout << solution("...!@BaT#*..y.abcdefghijklm") << endl;
    cout << solution("z-+.^.") << endl;
    cout << solution("=.=") << endl;
    cout << solution("123_.def") << endl;
    cout << solution("abcdefghijklmn.p") << endl;
    cin.get();
}
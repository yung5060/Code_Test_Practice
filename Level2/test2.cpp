#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isLower(char a)
{
    return (a >= 97 && a <= 122) ? true : false;
}

string solution(string s)
{
    string::iterator it = s.begin();
    if (isLower(*it))
    {
        *it -= 32;
    }
    it++;
    while (it != s.end())
    {
        if (*it == ' ')
        {
            while (*it == ' ')
            {
                it++;
            }
        }
        else if (*(it - 1) == ' ')
        {
            if (isLower(*it))
            {
                *it -= 32;
            }
            it++;
        }
        else if (!isLower(*it))
        {
            *it += 32;
            it++;
        }
        else
        {
            it++;
        }
    }
    return s;
}

int main()
{
    cout << solution("3people unFollowed me") << endl;
    cout << solution("for the last week") << endl;
    cin.get();
}
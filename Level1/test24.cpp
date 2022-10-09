#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool solution(string s)
{
    if (s.size() == 4 || s.size() == 6)
    {
        for (string::iterator it = s.begin(); it != s.end(); it++)
        {
            if (!isdigit(*it))
                return false;
        }
        return true;
    }
    return false;
}
int main()
{
    cout << solution("a234") << endl;
    cout << solution("1234") << endl;
    cin.get();
}
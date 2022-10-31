#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    int blank = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            blank = i;
            continue;
        }
        (s[i] >= 'a' && s[i] <= 'z') ? (s[i] -= ((i - blank) & 1) ? 32 : 0) : (s[i] += ((i - blank) & 1) ? 0 : 32);
    }
    return s;
}

int main()
{
    cout << solution("Yung Cho") << endl;
    cin.get();
}
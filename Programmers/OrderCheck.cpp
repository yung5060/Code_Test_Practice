#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int solution(string before, string after)
{
    for (int i = 0; i < before.size(); i++)
    {
        if (count(before.begin(), before.end(), before[i]) != count(after.begin(), after.end(), before[i]))
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    cout << solution("olleh", "hello") << endl;
    cout << solution("allpe", "apple") << endl;
}
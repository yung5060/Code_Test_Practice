#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n)
{
    for (auto &it : s)
    {
        if (it == ' ')
            continue;
        it = (it >= 'a' && it <= 'z') ? ((it + (n % 26) > 'z') ? 96 + ((it + (n % 26)) % 'z') : it + (n % 26)) : ((it + (n % 26) > 'Z') ? 64 + ((it + (n % 26)) % 'Z') : it + (n % 26));
    }
    return s;
}

int main()
{
    cout << solution("AB", 1) << endl;
    cout << solution("z", 1) << endl;
    cout << solution("a B z", 4) << endl;
    cin.get();
}
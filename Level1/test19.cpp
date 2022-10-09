#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";
    int diff = s.end() - s.begin();
    (diff % 2) ? answer += (*(s.begin() + diff / 2)) : answer += (string(1, *(s.begin() + diff / 2 - 1)) + *(s.begin() + diff / 2));
    return answer;
}

int main()
{
    cout << solution("abcde") << endl;
    cout << solution("qwer") << endl;
    cin.get();
}
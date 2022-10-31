#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s)
{
    sort(s.rbegin(), s.rend());
    return s;
}

int main()
{
    cout << solution("Zbcdefg") << endl;
    cin.get();
}
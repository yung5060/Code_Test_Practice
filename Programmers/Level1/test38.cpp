#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int i;

bool compare(string a, string b)
{
    return a[i] == b[i] ? a < b : a[i] < b[i];
}

vector<string> solution(vector<string> strings, int n)
{
    i = n;
    sort(strings.begin(), strings.end(), compare);
    return strings;
}

int main()
{
    vector<string> strings = {"sun", "bed", "car"};
    vector<string> answer = solution(strings, 1);
    for (const auto &it : answer)
    {
        cout << it << " ";
    }
    cin.get();
}
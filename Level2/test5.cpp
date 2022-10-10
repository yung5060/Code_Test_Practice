#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s)
{
    int rep = 0, zeros = 0;
    while (s.size() != 1)
    {
        zeros += count(s.begin(), s.end(), '0');
        rep++;
        int length = s.size() - count(s.begin(), s.end(), '0');
        string decimal = "";
        while (length != 0)
        {
            decimal.push_back(length % 2);
            length /= 2;
        }
        reverse(decimal.begin(), decimal.end());
        s = decimal;
    }
    vector<int> a = {rep, zeros};
    return a;
}

int main()
{
    vector<int> a = solution("110010101001");
    for (const auto &it : a)
    {
        cout << it << " ";
    }
    cin.get();
}
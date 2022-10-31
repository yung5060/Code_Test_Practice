#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int stringToInt(string num)
{
    if (num[0] == '-')
    {
        int sum = 0, power = 0;
        string::iterator n = num.end() - 1;
        while (n != num.begin())
        {
            sum -= (*n - '0') * pow(10, power);
            power++;
            n--;
        }
        cout << num << " : " << sum << endl;
        return sum;
    }
    else
    {
        int sum = 0, power = 0;
        string::iterator n = num.end() - 1;
        while (n != num.begin() - 1)
        {
            sum += (*n - '0') * pow(10, power);
            power++;
            n--;
        }
        cout << num << " : " << sum << endl;
        return sum;
    }
}

bool compare(string a, string b)
{
    return stoi(a) == stoi(b) ? a < b : stoi(a) < stoi(b);
}

string solution(string s)
{
    vector<string> numbers;
    string::iterator it = s.begin();
    while (it != s.end())
    {
        if (*it == ' ')
        {
            it++;
        }
        else
        {
            string number = "";
            while (*it != ' ')
            {
                number.push_back(*it);
                it++;
                if (it == s.end())
                    break;
            }
            numbers.push_back(number);
        }
    }
    sort(numbers.begin(), numbers.end(), compare);
    for (const auto &it : numbers)
    {
        cout << it << " ";
    }
    cout << endl;
    return numbers.front() + " " + numbers.back();
}

int main()
{
    cout << solution("11 21 31 41 100 -32") << endl;
    cin.get();
}
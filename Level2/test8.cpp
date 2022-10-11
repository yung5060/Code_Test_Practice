#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n)
{
    string decimal = "";
    while (n > 0)
    {
        decimal.push_back(n % 2 + '0');
        n /= 2;
    }
    reverse(decimal.begin(), decimal.end());
    auto it = decimal.end() - 1;
    for (; it > decimal.begin(); it--)
    {
        if (*it == '1' && *(it - 1) == '0')
        {
            break;
        }
    }
    if (it != decimal.begin())
    {
        sort(it + 1, decimal.end());
        char temp = *it;
        *it = *(it - 1);
        *(it - 1) = temp;
    }
    else
    {
        reverse(decimal.begin(), decimal.end());
        decimal.push_back('0');
        reverse(decimal.begin(), decimal.end());
        it = decimal.begin() + 1;
        sort(it + 1, decimal.end());
        char temp = *it;
        *it = *(it - 1);
        *(it - 1) = temp;
    }
    int answer = 0;
    for (int i = 0; i < decimal.size(); i++)
    {
        answer += pow(2, decimal.size() - 1 - i) * (decimal[i] - '0');
    }
    return answer;
}

int main()
{
    cout << solution(15) << endl;
    cin.get();
}
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int getNumber(char a)
{
    if (a == 'S')
        return 1;
    if (a == 'D')
        return 2;
    if (a == 'T')
        return 3;
    return 0;
}

int solution(string dartResult)
{
    string::iterator it = dartResult.end() - 1;
    int score = 0;
    int star = 0;
    while (it >= dartResult.begin())
    {
        int a = (*(it - 2) == '0' && *(it - 3) == '1') ? 10 : *(it - 2) - '0';
        int b = getNumber(*(it - 1));
        if (*it == '*')
        {
            star++;
            score += pow(a, b) * pow(2, star);
            it -= (*(it - 2) == '0' && *(it - 3) == '1') ? 4 : 3;
            if (star == 2)
                star--;
            cout << score << endl;
        }
        else if (*it == '#')
        {
            score -= pow(a, b) * pow(2, star);
            star -= (star) ? 1 : 0;
            it -= (*(it - 2) == '0' && *(it - 3) == '1') ? 4 : 3;
            cout << score << endl;
        }
        else
        {
            a = (*(it - 1) == '0' && *(it - 2) == '1') ? 10 : *(it - 1) - '0';
            b = getNumber(*it);
            score += pow(a, b) * pow(2, star);
            star -= (star) ? 1 : 0;
            it -= (*(it - 1) == '0' && *(it - 2) == '1') ? 3 : 2;
            cout << score << endl;
        }
    }
    return score;
}

int main()
{

    cout << solution("1S2D*3T*") << endl;
    cin.get();
}
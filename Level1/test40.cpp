#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string s)
{
    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<int> answer;
    int i = 0;
    while (i < s.size())
    {
        if (*(s.begin() + i) - '0' < 10)
        {
            answer.push_back(*(s.begin() + i) - '0');
            i++;
        }
        else
        {
            for (int j = 0; j < 10; j++)
            {
                if (*(s.begin() + i) + (*(s.begin() + i + 1)) == numbers[j][0] + numbers[j][1] && *(s.begin() + i) == numbers[j][0])
                {
                    answer.push_back(j);
                    i += numbers[j].size();
                }
            }
        }
    }
    int result = 0;
    for (int i = 0; i < answer.size(); i++)
    {
        result += answer[i] * pow(10, (answer.size() - 1 - i));
    }
    return result;
}

int main()
{
    cout << solution("one4seveneight") << endl;
    cout << solution("23four5six7") << endl;
    cout << solution("1zerotwozero3") << endl;
    cout << solution("123") << endl;
    cin.get();
}
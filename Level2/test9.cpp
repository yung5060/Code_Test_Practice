#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow)
{
    vector<int> answer;
    for (int i = 1; i <= sqrt(yellow); i++)
    {
        if ((yellow % i) == 0)
        {
            if (((i + 2) * (yellow / i + 2)) == brown + yellow)
            {
                answer.push_back(yellow / i + 2);
                answer.push_back(i + 2);
            }
        }
    }
    return answer;
}

int main()
{
    vector<int> answer = solution(10, 2);
    for (const auto &it : answer)
    {
        cout << it << " ";
    }
    cin.get();
}
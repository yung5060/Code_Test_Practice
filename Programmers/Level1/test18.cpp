#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs)
{
    int answer = 0;
    for (int i = 0; i < signs.size(); i++)
    {
        signs[i] ? answer += absolutes[i] : answer += absolutes[i] * (-1);
    }
    return answer;
}

int main()
{
    vector<int> absolutes = {4, 7, 12};
    vector<bool> signs = {true, false, true};
    cout << solution(absolutes, signs) << endl;
    cin.get();
}
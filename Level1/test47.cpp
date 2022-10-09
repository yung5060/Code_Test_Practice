#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers)
{
    vector<int> one = {1, 2, 3, 4, 5};
    vector<int> two = {1, 3, 4, 5};
    vector<int> three = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    int one_score = 0;
    int two_score = 0;
    int three_score = 0;
    for (int i = 0; i < answers.size(); i++)
    {
        one_score += (answers[i] == one[i % 5]) ? 1 : 0;
        two_score += (i & 1) ? ((two[(i % 8) / 2] == answers[i]) ? 1 : 0) : ((answers[i] == 2) ? 1 : 0);
        three_score += (answers[i] == three[i % 10]) ? 1 : 0;
    }
    vector<int> scores = {one_score, two_score, three_score};
    vector<int> result;
    int max = *max_element(scores.begin(), scores.end());
    for (int i = 0; i < 3; i++)
    {
        if (scores[i] == max)
            result.push_back(i + 1);
    }
    return result;
}

int main()
{
    vector<int> answers = {1, 3, 2, 4, 2};
    vector<int> result = solution(answers);
    for (const auto &it : result)
    {
        cout << it << " ";
    }
    cin.get();
}
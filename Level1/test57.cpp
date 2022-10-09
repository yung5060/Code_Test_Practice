#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <map>

using namespace std;

int point(int a)
{
    return abs(4 - a);
}

string solution(vector<string> survey, vector<int> choices)
{
    string answer = "";
    map<char, int> map = {
        {'R', 0},
        {'T', 0},
        {'C', 0},
        {'F', 0},
        {'J', 0},
        {'M', 0},
        {'A', 0},
        {'N', 0}};
    for (int i = 0; i < choices.size(); i++)
    {
        if (choices[i] == 4)
        {
            continue;
        }
        map.find(survey[i][choices[i] / 4])->second += point(choices[i]);
    }
    if (map.find('R')->second >= map.find('T')->second)
    {
        answer.push_back('R');
    }
    else
    {
        answer.push_back('T');
    }
    if (map.find('C')->second >= map.find('F')->second)
    {
        answer.push_back('C');
    }
    else
    {
        answer.push_back('F');
    }
    if (map.find('J')->second >= map.find('M')->second)
    {
        answer.push_back('J');
    }
    else
    {
        answer.push_back('M');
    }
    if (map.find('A')->second >= map.find('N')->second)
    {
        answer.push_back('A');
    }
    else
    {
        answer.push_back('N');
    }

    return answer;
}

int main()
{
    vector<string> survey = {"AN", "CF", "MJ", "RT", "NA"};
    vector<int> choices = {5, 3, 2, 7, 5};
    cout << solution(survey, choices) << endl;
    cin.get();
}
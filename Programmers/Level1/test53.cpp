#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for (auto it = completion.end() - 1; it >= completion.begin(); it--)
    {
        if (participant.back() != *it)
        {
            answer = participant.back();
            break;
        }
        participant.pop_back();
    }
    answer = (answer == "") ? participant[0] : answer;
    return answer;
}

int main()
{
    vector<string> participant = {"mislav", "stanko", "mislav", "ana"};
    vector<string> completion = {"stanko", "ana", "mislav"};
    cout << solution(participant, completion) << endl;
    cin.get();
}